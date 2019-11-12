INC =../include/ast
OBJS := $(patsubst %.cc,%.o,$(wildcard *.cc))

CPP = c++ -g
CPPFLAGS = -Wall -I$(INC)

all: $(OBJS)

%.o: %.cc
	$(CPP) -c -o $@ $< $(CPPFLAGS)

.SUFFIXES: .cc

clean:
	rm -f *.o *.a


