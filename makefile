
FLAGS = -Wall -Wextra -DDEBUG -g -std=c++14
PROJNAME = lab5

all: lab5.o Star.o Planet.o Probe.o
		g++ $(FLAGS) lab5.o Star.o Planet.o Probe.o -o $(PROJNAME)

lab5.o: lab5.cpp
		g++ $(FLAGS) -c lab5.cpp -o lab5.o

Planet.o: Planet.cpp
		g++ $(FLAGS) -c Planet.cpp -o Planet.o

Star.o: Star.cpp
		g++ $(FLAGS) -c Star.cpp -o Star.o

Probe.o: Probe.cpp
		g++ $(FLAGS) -c Probe.cpp -o Probe.o

run: all
		./$(PROJNAME)
memcheck: all
		valgrind ./$(PROJNAME)
clean:
		rm -rf *.o
		rm -rf $(PROJNAME)
