INC =../include/ast
OBJS := $(patsubst %.cc,%.o,$(wildcard *.cc))

CPP = c++ -g
CPPFLAGS = -std=c++11 -Wall -I$(INC)

all: ast.a

ast.a: $(OBJS)
	ar r ast.a $(OBJS)
	rm $(OBJS)
	
%.o: %.cc
	$(CPP) -c -o $@ $< $(CPPFLAGS)

.SUFFIXES: .cc

clean:
	rm -f *.o *.a


