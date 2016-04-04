all: p8

p8: project8.o stack.o stackN.o
	g++ project8.o stack.o stackN.o -o p8

project8.o: project8.cpp
	g++ -c project8.cpp

stack.o: stack.cpp
	g++ -c stack.cpp

stackN.o: stackN.cpp
	g++ -c stackN.cpp

clean:
	rm -f *.o p8
