/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: November 10th, 2019
** Description: This is the Dragon class which inherits from the Character class. It sets the default values for the amor and health specific to the Dragon. It also overrides the attack and defense functions along with get and setter methods.
*********************************************************************/
#ifndef Adventurer_HPP
#define Adventurer_HPP
#include "Character.hpp"

class Adventurer : public Character
{
public:
Adventurer():Character()
{
    health = 100;
}
int attack();
int defense(int);


int getHealth();

int setHealth(int);
~Adventurer(){};



private:
    
};



#endif // Dragon_HPP