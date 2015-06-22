# Sumii's Makefile for Min-Caml (for GNU Make)
# 
# ack.ml¤Ê¤É¤Î¥Æ¥¹¥È¥×¥í¥°¥é¥à¤òtest/¤ËÍÑ°Õ¤·¤Æmake do_test¤ò¼Â¹Ô¤¹¤ë¤È¡¢
# min-caml¤Èocaml¤Ç¥³¥ó¥Ñ¥¤¥ë¡¦¼Â¹Ô¤·¤¿·ë²Ì¤ò¼«Æ°¤ÇÈæ³Ó¤·¤Þ¤¹¡£

RESULT = min-caml
NCSUFFIX = .opt
CC = gcc
CFLAGS = -g -O3 -Wall

default: debug-code top $(RESULT) do_test
$(RESULT): debug-code top
## [¼«Ê¬¡Ê½»°æ¡ËÍÑ¤ÎÃí]
## ¡¦OCamlMakefile¤ä¸Å¤¤GNU Make¤Î¥Ð¥°(?)¤Ç¾å¤Î¤è¤¦¤ÊÄêµÁ¤¬É¬Í×(??)
## ¡¦OCamlMakefile¤Ç¤Ïdebug-code¤Ènative-code¤Î¤½¤ì¤¾¤ì¤Ç
##   .mli¤¬¥³¥ó¥Ñ¥¤¥ë¤µ¤ì¤Æ¤·¤Þ¤¦¤Î¤Ç¡¢Î¾Êý¤È¤âdefault:¤Î±¦ÊÕ¤ËÆþ¤ì¤ë¤È
##   ºÆmake»þ¤Ë¡Ê.mli¤¬ÊÑ¹¹¤µ¤ì¤Æ¤¤¤ë¤Î¤Ç¡Ë.ml¤âºÆ¥³¥ó¥Ñ¥¤¥ë¤µ¤ì¤ë
clean:: nobackup

# ¢­¤â¤·¼ÂÁõ¤ò²þÂ¤¤·¤¿¤é¡¢¤½¤ì¤Ë¹ç¤ï¤»¤ÆÊÑ¤¨¤ë
SOURCES = float.c type.ml id.ml m.ml s.ml \
syntax.ml parser.mly lexer.mll typing.mli typing.ml kNormal.mli kNormal.ml \
alpha.mli alpha.ml beta.mli beta.ml assoc.mli assoc.ml \
inline.mli inline.ml constFold.mli constFold.ml elim.mli elim.ml \
closure.mli closure.ml asm.mli asm.ml virtual.mli virtual.ml \
simm.mli simm.ml regAlloc.mli regAlloc.ml emit.mli emit.ml \
main.ml main.mli translate.ml translate.mli

# ¢­¥Æ¥¹¥È¥×¥í¥°¥é¥à¤¬Áý¤¨¤¿¤é¡¢¤³¤ì¤âÁý¤ä¤¹
TESTS = print sum-tail gcd sum fib ack even-odd \
adder funcomp cls-rec cls-bug cls-bug2 \
shuffle spill spill2 spill3 join-stack join-stack2 join-stack3 \
join-reg join-reg2 non-tail-if non-tail-if2 \
inprod inprod-rec inprod-loop matmul matmul-flat

do_test: $(TESTS:%=test/%.timecmp)

.PRECIOUS: test/%.s test/% test/%.res test/%.ans test/%.cmp test/%.min-caml test/%.min-c test/%.timecmp
TRASH = $(TESTS:%=test/%.s) $(TESTS:%=test/%) $(TESTS:%=test/%.res) $(TESTS:%=test/%.ans) $(TESTS:%=test/%.cmp) $(TESTS:%=test/%.ml.c) $(TESTS:%s=test/%.min-caml) $(TESTS:%s=test/%.min-c)

test/%.s: $(RESULT) test/%.ml
	./$(RESULT) test/$*
test/%: test/%.s libmincaml.S stub.c
	$(CC) $(CFLAGS) -m32 $^ -lm -o $@
test/%.res: test/%
	$< > $@
test/%.ans: test/%
	ocaml $< > $@
test/%.res.time: test/%.res
	time $< > $@
test/%.ml.c: $(RESULT) test/%.ml
	./$(RESULT) test/%.ml
test/%.min-c: test/%.ml.c translation/csyntax.o
	$(CC) $(CFLAGS) $^ -lm -o $@
test/%.min-c.time: test/%.min-c
	time $< > $@
test/%.cmp: test/%.res test/%.ans
	diff $^ > $@
test/%.timecmp: test/%.res.time test/%.min-c.time
	diff $^ > $@

min-caml.html: main.mli main.ml id.ml m.ml s.ml \
		syntax.ml type.ml parser.mly lexer.mll typing.mli typing.ml kNormal.mli kNormal.ml \
		alpha.mli alpha.ml beta.mli beta.ml assoc.mli assoc.ml \
		inline.mli inline.ml constFold.mli constFold.ml elim.mli elim.ml \
		closure.mli closure.ml asm.mli asm.ml virtual.mli virtual.ml \
		simm.mli simm.ml regAlloc.mli regAlloc.ml emit.mli emit.ml
	./to_sparc
	caml2html -o min-caml.html $^
	sed 's/.*<\/title>/MinCaml Source Code<\/title>/g' < min-caml.html > min-caml.tmp.html
	mv min-caml.tmp.html min-caml.html
	sed 's/charset=iso-8859-1/charset=euc-jp/g' < min-caml.html > min-caml.tmp.html
	mv min-caml.tmp.html min-caml.html
	ocaml str.cma anchor.ml < min-caml.html > min-caml.tmp.html
	mv min-caml.tmp.html min-caml.html

release: min-caml.html
	rm -fr tmp ; mkdir tmp ; cd tmp ; cvs -d:ext:sumii@min-caml.cvs.sf.net://cvsroot/min-caml export -Dtomorrow min-caml ; tar cvzf ../min-caml.tar.gz min-caml ; cd .. ; rm -fr tmp
	cp Makefile stub.c SPARC/libmincaml.S min-caml.html min-caml.tar.gz ../htdocs/

include OCamlMakefile
