/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: November 10th, 2019
** Description: This is the Character abstract class which is the parent for the Barbarian, Vampire, Blue Men, Medusa and Harry Potter class. It contains a virtual attack and defense functions which are passed down to the classes and overrided in each child class. It passes down armor and strength variables.
*********************************************************************/
#include "Character.hpp"

int Character::getStrength()
{
    return strength;
}

int Character::recoverStrength()
{
    int recover;
    recover = 0.5 * this->strength;
    setStrength(recover + this->getStrength());
}

int Character::setStrength(int s)
{
    strength = s;
}

std::string Character::getType()
{
    return type;
}