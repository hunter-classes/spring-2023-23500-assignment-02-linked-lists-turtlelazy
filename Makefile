OBJECTS=main.o List.o Node.o
CXXFLAGS=
LDFLAGS= 
CXX=g++

main: main.o List.o Node.o OList.o
	$(CXX) -o main $(OBJECTS)

main.o: main.cpp List.h OList.h


tests: tests.o List.o Node.o OList.o
	$(CXX) -o main $(OBJECTS)

tests.o: tests.cpp List.h OList.h

List.o: List.cpp List.h Node.h

OList.o: OList.cpp OList.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm -f $(OBJECTS)