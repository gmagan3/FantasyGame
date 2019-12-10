/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Chimera class which inherits from the Character class. It sets the default values for the health specific to the Hydra. It also overrides the attack and defense functions along with get and setter methods.
*********************************************************************/
#ifndef Chimera_HPP
#define Chimera_HPP
#include "Character.hpp"

class Chimera : public Character
{
public:
Chimera():Character()
{
    health = 200;
    name = "Chimera";
}
int attack();
int defense(int);


int getHealth();

int setHealth(int);
~Chimera(){};



private:
    
};



#endif // Chimera_HPP