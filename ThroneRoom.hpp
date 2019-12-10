/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Throne class which inherits from the Space class. It inherits the runSpace method from Space and sets the name of the class.
*********************************************************************/
#ifndef THRONE_HPP
#define THRONE_HPP
#include "Space.hpp"

class Throne: public Space {

public:
Throne():Space(){
    name = "Throne Room";
};


~Throne(){};  

};

#endif // THRONE_HPP