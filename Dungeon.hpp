#ifndef DUNGEON_HPP
#define DUNGEON_HPP
#include "Space.hpp"
#include "Character.hpp"
#include "Lake.hpp"

class Dungeon: public Space {
public:
Dungeon()
{
    Dungeon* dungeons;
    Lake *lakes;
    dungeons->right = lakes;
}
void runSpace(Character *);

}

#endif // DUNGEON_HPP