# Author: Don Stringham <donstringham@weber.edu>
.DEFAULT_GOAL=clean


# VARIABLES
CC=gcc
BUILD_TIME ?= $(shell date +%FT%T%z)
SDIR=./src
ODIR=$(SDIR)
BDIR=./bin

# TARGETS
all:
	-mkdir -p $(BDIR)

bld.ex01: $(SDIR)/ex01.o
	$(CC) $(CFLAGS) -o $(BDIR)

run.ex01:
	@echo Running exercise 01...

release:
	git tag v$(V)
	@read -p "Press enter to confirm and push to origin ..." && git push origin v$(V)

.PHONY: clean
clean:
	-rm -r $(BDIR)
	-rm -f $(ODIR)/*.o
