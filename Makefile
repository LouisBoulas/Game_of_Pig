# Program for compiling C++ programs
CXX = g++

# Extra flags to give to the compiler
CXXFLAGS = -g -Wall

# make compiles with an implicit rule:
# $(CXX) -c $(CXXFLAGS) <the .cpp file> 

pig.out: main.o dice.o piggame.o player.o humanplayer.o computerplayer.o
	$(CXX) $(CXXFLAGS) main.o dice.o player.o humanplayer.o computerplayer.o \
		               piggame.o -o pig.out

dice.o: dice.cpp dice.h

player.o: player.cpp player.h

humanplayer.o: humanplayer.cpp humanplayer.h player.h

computerplayer.o: computerplayer.cpp computerplayer.h player.h

piggame.o: piggame.cpp piggame.h


.PHONY: clean
clean:
	rm -f *.o core

.PHONY: clobber
clobber: clean
	rm -f *.out

.PHONY: all
all: clobber pig.out

