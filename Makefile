main: main.o List.o Node.o
	g++ -o main main.o List.o Node.o

List.o: List.cpp List.h
	g++ -c -std=c++11 List.cpp
Node.o: Node.cpp Node.h
	g++ -c -std=c++11 Node.cpp