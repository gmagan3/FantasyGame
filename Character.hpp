/*********************************************************************
** Program name: Project 3
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Character abstract class which is the parent for several child class. It contains a virtual attack and defense functions which are passed down to the classes and overrided in each child class. It passes down name and health variables.
*********************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>

class Character
{
public:
    Character(){};
    virtual int attack(){};
    virtual int defense(int){};
    int getHealth();
    int recoverHealth();
    int setHealth(int);
    std::string getType();
    std::string getName();

    virtual ~Character(){};

    

private:
protected:
int health;
std::string name;

};
#endif // CHARACTER_HPP