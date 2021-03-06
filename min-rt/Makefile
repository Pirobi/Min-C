# added by Sumii
RESULT = ../min-caml
SLDS = ball contest cup dra lattice mange mir orange piero1 piero2 planet \
shuttle test test2 test3 tileball tron tsu tsu2 tsu3
CC = gcc
FLAGS = -g -O3 -I ../translation/
INDENT = indent
INDENTARGS = -brf -br -nbc -T Value -T Closure
GPP = g++
EXTERNAL = external.c

.PRECIOUS: %.cmp %.diff.gcc-GCC.ppm %.diff.ocamlopt-gcc.ppm %.mincaml.ppm %.gcc.ppm %.GCC.ppm %.ocamlopt.ppm %.ocamlc.ppm %.minc.ppm

test: $(SLDS:%=%.cmp) #$(SLDS:%=%.diff.ocamlopt-gcc.ppm) $(SLDS:%=%.diff.gcc-GCC.ppm)

clean:
	rm -f *.cmp *.ppm *.ppm.tmp ppmdiff raytrace RayTrace *.sld_ *.cmo *.cmx *.cmi *.o min-rt_b min-rt min-rt.s min-rt.min-caml min-rt.MIN-C min-rt.min-c min-rt.ml.c

%.cmp: %.mincaml.ppm %.minc.ppm # avoid 80-bit float on x86
	-diff $^ > $@
%.diff.gcc-GCC.ppm: ppmdiff %.gcc.ppm %.GCC.ppm
	./$^ $@
%.diff.ocamlopt-gcc.ppm: ppmdiff %.ocamlopt.ppm %.gcc.ppm
	./$^ $@
ppmdiff: ppm.ml diff.ml
	ocamlopt $^ -o $@

%.minc.ppm: %.sld min-rt.min-c
	time -p ./min-rt.min-c < $< > $@.tmp
	mv $@.tmp $@
min-rt.min-c: $(EXTERNAL) min-rt.ml.c
	$(CC) $(FLAGS) $^ -lm -o $@
min-rt.ml.c: min-rt.s
	$(INDENT) $(INDENTARGS) $@
	rm $@~
min-rt.MIN-C: $(EXTERNAL) min-rt.ml.c
	$(GPP) $(FLAGS) $^ -lm -o $@
%.MINC.ppm: %.sld min-rt.MIN-C
	time -p ./min-rt.min-c < $< > $@.tmp
	mv $@.tmp $@

%.mincaml.ppm: %.sld min-rt.min-caml
	time -p ./min-rt.min-caml < $< > $@.tmp
	mv $@.tmp $@
min-rt.min-caml: min-rt.s globals.s ../libmincaml.S ../stub.c
	gcc -m32 -g -O2 -Wall $^ -lm -o min-rt.min-caml
min-rt.s: min-rt.ml $(RESULT)
	$(RESULT) min-rt #-inline 100 NEEDED TO COMMENT OUT BECAUSE OF INCOMPATIBILITY WITH MIN-C

%.gcc.ppm: %.sld raytrace
	echo 768 > $<_
	cat $< >> $<_
	time -p ./raytrace < $<_ > $@.tmp
	mv $@.tmp $@
raytrace: raytrace.c
	gcc -ffloat-store -Wall -O3 raytrace.c -lm -o raytrace

%.GCC.ppm: %.sld RayTrace
	time -p ./RayTrace -s -w 768 -h 768 < $< > $@.tmp
	mv $@.tmp $@
RayTrace: RayTrace.cxx
	g++ -Wall -O3 RayTrace.cxx -lm -o RayTrace

%.ocamlopt.ppm: %.sld min-rt
	time -p ./min-rt < $< > $@.tmp
	mv $@.tmp $@
%.ocamlc.ppm: %.sld min-rt_b
	time -p ./min-rt_b < $< > $@.tmp # to avoid 80-bit float on x86
	mv $@.tmp $@

######################################################################

# original by Oiwa follows (modified a little by Sumii)

native: min-rt
bytecode: min-rt_b

.SUFFIXES: .ml .mli .cmo .cmi .cmx

.ml.cmo:
	ocamlc -g -c -pp ./preprocess.sh $<

.ml.cmx:
	ocamlopt -unsafe -inline 100 -c -pp ./preprocess.sh $<

.mli.cmi:
	ocamlc -g -c $<

min-rt.cmx: globals.cmx miniMLRuntime.cmx
min-rt.cmo: globals.cmo miniMLRuntime.cmi
globals.cmx: miniMLRuntime.cmx
globals.cmo: miniMLRuntime.cmi

min-rt_b: min-rt.cmo globals.cmo miniMLRuntime.cmo
	ocamlc -g -o min-rt_b miniMLRuntime.cmo globals.cmo min-rt.cmo 

min-rt: min-rt.cmx globals.cmx miniMLRuntime.cmx
	ocamlopt -unsafe -inline 100 -o min-rt miniMLRuntime.cmx globals.cmx min-rt.cmx 

miniMLRuntime.cmi: miniMLRuntime.mli
	ocamlc -c miniMLRuntime.mli

miniMLRuntime.cmx: miniMLRuntime.ml miniMLRuntime.cmi
	ocamlopt -unsafe -inline 100 -c miniMLRuntime.ml

miniMLRuntime.cmo: miniMLRuntime.ml miniMLRuntime.cmi
	ocamlc -g -c miniMLRuntime.ml
