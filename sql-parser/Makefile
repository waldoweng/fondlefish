CC = c++ -g
LEX = flex
YACC = bison
CPPFLAGS = -DYYDEBUG=1

PROGRAMES = pmysql

.PHONY: clean

pmysql: pmysql.tab.o pmysql.o
	${CC} -o $@ pmysql.tab.o pmysql.o


pmysql.tab.c pmysql.tab.h: pmysql.y
	${YACC} -vd pmysql.y

pmysql.c: pmysql.l
	${LEX} -o $*.c $<

pmysql.o: pmysql.c pmysql.tab.h

.SUFFIXES: .pgm .l .y .c .cc

clean:
	rm -f *.o *.output pmysql pmysql.tab.*  pmysql.c


