# Makefile for the second tutorial
# Author: 		Kagan Dikmen
# Creation: 	2025-01-19
# Modification:	2025-11-19

# UPMEM SDK needs to be procured and its environment setting
# shell script needs to be sourced beforehand

CLANG = dpu-upmem-dpurte-clang
CFLAGS = -DNR_TASKLETS=3 -DSTACK_SIZE_DEFAULT=256 -DSTACK_SIZE_TASKLET_1=2048
SOURCE = tasklet

all: 
	${CLANG} ${CFLAGS} -o ${SOURCE}.o ${SOURCE}.c

clean:
	rm -rf *.o

clean_all:
	rm -rf *.o .vscode/ .cache/ .__pycache__/