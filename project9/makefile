all: p9

p9: main.o queue1.o
	g++ main.o queue1.o -o p9

main.o: main.cpp
	g++ -c main.cpp

queue1.o: queue1.cpp
	g++ -c queue1.cpp

clean:
	rm -f *.o p9
