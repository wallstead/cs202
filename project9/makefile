all: p9

p9: main.o queue2.o
	g++ main.o queue2.o -o p9

main.o: main.cpp
	g++ -c main.cpp

queue2.o: queue2.cpp
	g++ -c queue2.cpp

clean:
	rm -f *.o p9
