output: main.o Character.o Barbarian.o BlueMen.o dynamicStack.o HarryPotter.o Vampire.o Medusa.o
	g++ -std=c++11 main.o Character.o BlueMen.o Barbarian.o Vampire.o dynamicStack.o Medusa.o HarryPotter.o -o output

dynamicStack.o: dynamicStack.cpp dynamicStack.hpp
	g++ -std=c++11 -c dynamicStack.cpp
	
main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Barbarian.o: Barbarian.hpp Barbarian.cpp
	g++ -std=c++11 -c Barbarian.cpp

Character.o: Character.cpp Character.hpp
	g++ -std=c++11 -c Character.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	g++ -std=c++11 -c BlueMen.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	g++ -std=c++11 -c HarryPotter.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	g++ -std=c++11 -c Vampire.cpp

Medusa.o: Medusa.cpp Medusa.hpp
	g++ -std=c++11 -c Medusa.cpp