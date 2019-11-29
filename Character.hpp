/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: November 10th, 2019
** Description: This is the Character abstract class which is the parent for the Dragon, Vampire, Blue Men, Medusa and Harry Potter class. It contains a virtual attack and defense functions which are passed down to the classes and overrided in each child class. It passes down armor and strength variables.
*********************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>

class Character
{
public:
    Character(){};
    virtual int attack() {};
    virtual int defense(int) {};
    virtual int getStrength();
    virtual int recoverStrength();
    virtual int setStrength(int);
    virtual std::string getType();

    virtual ~Character(){};

    

private:
protected:
int armor;
int health;
std::string type;
    
};


#endif // CHARACTER_HPP