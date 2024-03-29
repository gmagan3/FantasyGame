/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Hydra class which inherits from the Character class. It sets the default values for the amor and health specific to the Hydra. It also overrides the attack and defense functions along with get and setter methods.
*********************************************************************/
#ifndef Hydra_HPP
#define Hydra_HPP
#include "Character.hpp"

class Hydra : public Character
{
public:
Hydra():Character()
{
    health = 300;
    name = "Hydra";
}
int attack();
int defense(int);


int getHealth();

int setHealth(int);
~Hydra(){};



private:
    
};



#endif // Hydra_HPP