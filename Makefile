# Author: Don Stringham <donstringham@weber.edu>
UNAME_S := $(shell uname -s)

CC := gcc
BINDIR := bin
SRCDIR := src
OBJDIR := $(SRCDIR)
SRCS := $(shell find $(SRCDIR) -name *.c)

# TARGETS
bld.ex01: src/ex01.c
	$(CC) src/ex01.c -o $(BINDIR)/ex01

run.ex01:
	$(BINDIR)/ex01 $(ARGS)

bld.ex02: src/ex02.c
	$(CC) src/ex02.c -o $(BINDIR)/ex02

run.ex02:
	$(BINDIR)/ex02 $(ARGS)

bld.ex03: src/ex03.c
	$(CC) src/ex03.c -o $(BINDIR)/ex03

run.ex03:
	$(BINDIR)/ex03 $(ARGS)

bld.ex04: src/ex04.c
	$(CC) src/ex04.c -o $(BINDIR)/ex04

run.ex04:
	$(BINDIR)/ex04 $(ARGS)

bld.ex05: src/ex05.c
	$(CC) src/ex05.c -o $(BINDIR)/ex05

run.ex05:
	$(BINDIR)/ex05

run.ex05.2:
	$(BINDIR)/ex05 -l

bld.ex06.cat: src/ex06_cat.c
	$(CC) src/ex06_cat.c -o $(BINDIR)/ex06_cat

run.ex06.cat:
	$(BINDIR)/ex06_cat ./data/in.txt

clean:
	rm -fr *.txt
	rm -fr $(BINDIR)
	mkdir $(BINDIR)
