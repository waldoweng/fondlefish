IDIR =../include
ODIR=obj

CPP = c++ -g -std=c++11
LEX = flex
YACC = bison
CPPFLAGS = -DYYDEBUG=1 -I$(IDIR)/ast

PROGRAMES = pmysql

.PHONY: clean

pmysql: pmysql.tab.o pmysql.o
	${CPP} -o $@ pmysql.tab.o pmysql.o ast/ast.a 

pmysql.tab.cpp pmysql.tab.hpp: pmysql.ypp
	${YACC} -vd pmysql.ypp

pmysql.cc: pmysql.l
	${LEX} -o $*.cc $<

pmysql.o: pmysql.cc pmysql.tab.hpp

%.o: %.cc
	$(CPP) -c -o $@ $< $(CFLAGS)

%.o: %.cpp
	$(CPP) -c -o $@ $< $(CFLAGS)

.SUFFIXES: .pgm .l .ypp .c .cc

clean:
	rm -f *.o *.output pmysql pmysql.tab.*  pmysql.cc


