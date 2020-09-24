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

clean:
	rm -f *.txt
	rm -f $(BINDIR)
	rm -f $(OBJDIR)
