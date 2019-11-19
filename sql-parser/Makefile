IDIR =../include
ODIR=obj

CPP = c++ -g -std=c++11 -Wall -Wno-deprecated-register -Wno-writable-strings
LEX = flex
YACC = bison
CPPFLAGS = -DYYDEBUG=1 -DYYERROR_VERBOSE=1 -I$(IDIR)/ast

PROGRAMES = pmysql

.PHONY: clean

pmysql: pmysql.tab.o pmysql.o ast/ast.a
	${CPP} -o $@ pmysql.tab.o pmysql.o ast/ast.a 

ast/ast.a :
	cd ast; make

pmysql.tab.cc pmysql.tab.hh: pmysql.yy
	${YACC} -vd pmysql.yy

pmysql.cc: pmysql.l
	${LEX} -o $*.cc $<

pmysql.o: pmysql.cc pmysql.tab.hh

%.o: %.cc
	$(CPP) -c -o $@ $< $(CPPFLAGS)

.SUFFIXES: .pgm .l .yy .c .cc

clean:
	rm -f *.o *.output pmysql pmysql.tab.*  pmysql.cc
	cd ast; make clean


