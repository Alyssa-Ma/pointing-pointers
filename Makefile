CXXFLAGS=-std=c++11

main: main.o 3d-space.o 
	g++ -o main main.o 3d-space.o

main.o: main.cpp lab9.h
	g++ $(CXXFLAGS) -c main.cpp

3d-space.o: 3d-space.cpp lab9.h
	g++ $(CXXFLAGS) -c 3d-space.cpp

tests: tests.o 3d-space.o
	g++ -o tests tests.o 3d-space.o

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

poem: poem.o 
	g++ -o poem poem.o

poem.o: poem.cpp
	g++ $(CXXFLAGS) -c poem.cpp

clean:
	rm -f main main.o 3d-space.o tests tests.o poem poem.o
