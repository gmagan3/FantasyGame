/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Room class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP
#include "Space.hpp"

class Room: public Space {

public:
Room():Space(){
    name = "Room";
};

~Room(){};

};

#endif // ROOM_HPP