OBJECTS=main.o List.o Node.o OList.o
CXXFLAGS=
LDFLAGS= 
CXX=g++

main: main.o List.o Node.o OList.o
	$(CXX) -o main $(OBJECTS)

main.o: main.cpp List.h OList.h
	g++ -c -std=c++11 main.cpp

tests: tests.o Node.o OList.o
	g++ -o tests tests.o Node.o OList.o

tests.o: tests.cpp doctest.h OList.h
	g++ -c -std=c++11 tests.cpp

List.o: List.cpp List.h Node.h
	g++ -c -std=c++11 List.cpp

OList.o: OList.cpp OList.h Node.h
	g++ -c -std=c++11 OList.cpp

Node.o: Node.cpp Node.h
	g++ -c -std=c++11 Node.cpp

clean:
	rm -f *.o main tests