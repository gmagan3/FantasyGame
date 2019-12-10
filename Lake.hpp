/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Lake class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef LAKE_HPP
#define LAKE_HPP
#include "Space.hpp"

class Lake: public Space {
public:
Lake():Space()
{
    name = "Lake";
}

~Lake(){}
};

#endif // LAKE_HPP