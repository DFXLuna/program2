# Makefile
# Date: -1 Dec 1440
CC=g++
CFLAGS=-ggdb -Wall -std=c++11
LEX=flex++
LEXFLAGS=--warn

.PHONY: clean

program2: program2.cpp program2_lex.cpp messenger.cpp messenger.hpp
	${CC} ${CFLAGS} program2.cpp program2_lex.cpp messenger.cpp -o program2

program2_lex.cpp: program2.lpp messenger.hpp
	${LEX} ${LEXFLAGS} program2.lpp

clean:
	/bin/rm -f program2 program2_lex.cpp
	

