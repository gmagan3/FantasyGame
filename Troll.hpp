/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: November 10th, 2019
** Description: This is the Troll class which inherits from the Character class. It sets the default values for the amor and strength specific to the Troll. It also overrides the attack and defense functions along with get and setter methods.
*********************************************************************/
#ifndef Troll_HPP
#define Troll_HPP
#include "Character.hpp"

class Troll : public Character
{
public:
Troll():Character()
{
    armor = 0;
    health = 200;
}
int attack();
int defense(int);


int getArmor();
int getHealth();

int setHealth(int);
~Troll(){};



private:
    
};



#endif // Troll_HPP