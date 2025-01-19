# Makefile for the first tutorial
# Author: 		Kagan Dikmen (kagandikmen@outlook.com)
# Creation: 	2025-01-19
# Modification: 2025-01-19

# UPMEM SDK needs to be procured and its environment setting
# shell script needs to be sourced beforehand

CLANG=dpu-upmem-dpurte-clang
SOURCE=test

all: 
	${CLANG} -o ${SOURCE}.o ${SOURCE}.c

clean:
	rm -rf *.o

clean_all:
	rm -rf *.o .vscode/ .cache/ .__pycache__/