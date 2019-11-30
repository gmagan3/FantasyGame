/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: November 10th, 2019
** Description: This is the Character abstract class which is the parent for the Dragon, Vampire, Blue Men, Medusa and Harry Potter class. It contains a virtual attack and defense functions which are passed down to the classes and overrided in each child class. It passes down armor and health variables.
*********************************************************************/
#include "Character.hpp"

int Character::getHealth()
{
    return health;
}

int Character::recoverHealth()
{
    int recover;
    recover = 0.5 * this->health;
    setHealth(recover + this->getHealth());
}

int Character::setHealth(int s)
{
    health = s;
}

