all: p10

p10: main.o listarray.o
	g++ main.o listarray.o -o p10

main.o: main.cpp
	g++ -c main.cpp

listarray.o: listarray.cpp
	g++ -c listarray.cpp

clean:
	rm -f *.o p10
