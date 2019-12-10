/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Troll class which inherits from the Character class. It sets the default values for the health specific to the Troll. It also overrides the attack and defense functions along with get and setter methods.
*********************************************************************/

#include "Troll.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using std::cout;
using std::endl;

/*********************************************************************
** The attack function below overrides the virtual function from the Character class. It randomly rolls 2 six sided dice and then return the sum of the rolls as the attack roll.
*********************************************************************/
int Troll::attack()
{
    //Randomly rolls two six sided dice and adds the result
    int random = rand() % 6 + 1;
    int random1 = rand() % 6 + 1;
    int attack = random + random1;
    if(13 > attack > 9)
    {
        attack = attack + 3;
        cout << "Extra fire damage of 3 has occured." << endl;
    }
    //It outputs the random roll as the attack and returns the value
    return attack;
}
/*********************************************************************
** The defense function below overrides the virtual function from the Character class. As a parameter it takes in an integer parameter which is the attack roll. It randomly rolls 2 six sided dice to calculate the defense roll. It then subtracts the attack roll from the defense roll and armor to calculate the damage. It then outputs the result and updates the strength subtracting the damage.
*********************************************************************/
int Troll::defense(int roll)
{
    //Randomly rolls two six sided dice and adds the result
    int random1 = rand() % 10 + 1;
    int random2 = rand() % 10 + 1;
     int random3 = rand() % 10 + 1;
    int rollDefense = random1 + random2 + random3;

    //Subtracts the attack given as parameter from the roll defense 
    //and the armor of the Troll
    int result = roll - rollDefense;
    //If the attack deals a negative number the attack is set to 0
    if(result < 0)
    {
        result = 0;
    }

    //The strength of the Troll is updated with the given attack damage
    int total = getHealth() - result;

    //The strength is now updated in the class
    setHealth(total);
    return total;
}


int Troll::getHealth()
{
    return this->health;
}

int Troll::setHealth(int s)
{
    health = s;
}
