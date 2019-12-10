/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Marsh class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef MARSH_HPP
#define MARSH_HPP
#include "Space.hpp"

class Marsh: public Space {

public:
Marsh(){
    name = "Marsh";
};

~Marsh(){};

};

#endif // MARSH_HPP