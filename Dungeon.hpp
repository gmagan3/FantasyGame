#ifndef DUNGEON_HPP
#define DUNGEON_HPP
#include "Space.hpp"
#include "Character.hpp"
#include "Lake.hpp"

class Dungeon: public Space {
public:
Dungeon(){
    name = "Dungeon";
};
void runSpace(Character *){};
~Dungeon(){}
};

#endif // DUNGEON_HPP