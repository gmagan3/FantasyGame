/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Dungeon class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef DUNGEON_HPP
#define DUNGEON_HPP
#include "Space.hpp"
#include "Character.hpp"
#include "Lake.hpp"

class Dungeon: public Space {
public:
Dungeon():Space(){
    name = "Dungeon";
};
~Dungeon(){}
};

#endif // DUNGEON_HPP