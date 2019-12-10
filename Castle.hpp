/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Castle class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef CASTLE_HPP
#define CASTLE_HPP
#include "Space.hpp"

class Castle: public Space {

public:
Castle(){
    name = "Castle";
};

~Castle(){};

};

#endif // CASTLE_HPP