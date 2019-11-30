output: main.o Character.o Adventurer.o Castle.o Dragon.o Dungeon.o Hydra.o Lake.o Room.o Space.o ThroneRoom.o Troll.o Yard.o 
	g++ -std=c++11 main.o Character.o Adventurer.o Castle.o Dragon.o Dungeon.o Hydra.o Lake.o Room.o Space.o ThroneRoom.o Troll.o Yard.o  -o output
	
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

clean:
	rm *.o output