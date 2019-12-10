output: main.o Character.o Adventurer.o Castle.o Dragon.o Dungeon.o Hydra.o Lake.o Room.o Space.o ThroneRoom.o Troll.o Yard.o Marsh.o Chimera.o
	g++ -std=c++11 main.o Character.o Adventurer.o Castle.o Dragon.o Dungeon.o Hydra.o Lake.o Room.o Space.o ThroneRoom.o Troll.o Yard.o Marsh.o Chimera.o -o output
	
main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Adventurer.o: Adventurer.hpp Adventurer.cpp
	g++ -std=c++11 -c Adventurer.cpp

Character.o: Character.cpp Character.hpp
	g++ -std=c++11 -c Character.cpp

Castle.o: Castle.cpp Castle.hpp
	g++ -std=c++11 -c Castle.cpp

Dragon.o: Dragon.cpp Dragon.hpp
	g++ -std=c++11 -c Dragon.cpp

Dungeon.o: Dungeon.cpp Dungeon.hpp
	g++ -std=c++11 -c Dungeon.cpp

Hydra.o: Hydra.cpp Hydra.hpp
	g++ -std=c++11 -c Hydra.cpp

Chimera.o: Chimera.cpp Chimera.hpp
	g++ -std=c++11 -c Chimera.cpp

Marsh.o: Marsh.cpp Marsh.hpp
	g++ -std=c++11 -c Marsh.cpp

Lake.o: Lake.cpp Lake.hpp
	g++ -std=c++11 -c Lake.cpp

Room.o: Room.cpp Room.hpp
	g++ -std=c++11 -c Room.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

ThroneRoom.o: ThroneRoom.cpp ThroneRoom.hpp
	g++ -std=c++11 -c ThroneRoom.cpp

Troll.o: Troll.cpp Troll.hpp
	g++ -std=c++11 -c Troll.cpp

Yard.o: Yard.cpp Yard.hpp
	g++ -std=c++11 -c Yard.cpp

zip:
	zip -D FinalProject_Magan_Guleid.zip Adventurer.cpp Adventurer.hpp Character.hpp Character.cpp Castle.hpp Castle.cpp Chimera.cpp Chimera.hpp Dragon.hpp Dragon.cpp Dungeon.hpp Dungeon.cpp Hydra.cpp Hydra.hpp Marsh.cpp Marsh.hpp Lake.hpp Lake.cpp Room.cpp Room.hpp Space.hpp Space.cpp ThroneRoom.hpp ThroneRoom.cpp Troll.hpp Troll.cpp Yard.cpp Yard.hpp FinalProject.pdf main.cpp makefile 
clean:
	rm *.o output