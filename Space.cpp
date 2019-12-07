#include "Space.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** The runSpace function takes in two character pointers one for the player and the other for the monster in the space along with a reference to the Backpack. It then gives the player two options between attacking the creature or using a health potion. If a potion is available it used to give the player 20 points of health. The rounds are looped until either the player or the monster wins. If the player wins they are awarded a key which is pushed to the Backpack.
*********************************************************************/
int Space::runSpace(Character *p, Character *m, std::deque <std::string> &B)
{
    int final;
    cout << "You have just entered into the " << this->getName() << endl;
    int choice;
        int decision;
        int loop = 1;
        cout << "Every turn you will have the choice to use a health potion, run or attack." << endl;
        //Runs a loop for each round of the battle
        while(loop == 1)
        {
        cout << "1. Attack" << endl;
        cout << "2. Use health potion" << endl;
        cin >> decision;
        //Validates the input each time
        inputValidation(decision);
        if(decision == 1)
        {
            //Runs the attack/defense functions for player and monster
            m->defense(p->attack());
            cout << "Player Health: " << p->getHealth() << endl;
            p->defense(m->attack());
            cout << m->getName() << " Health: " << m->getHealth() << endl;
            if(p->getHealth() < 1)
            {
                cout << "Oh no! You have died!" << endl;
                final = 1;
                loop = 2;
            }
            if(m->getHealth() < 1)
            {
                cout << "Congrats! You have defeated the" << m->getName() << endl;
                cout << "Your health will be reset to 100" << endl;
                final = 2;
                //Resets player health to 100
                p->setHealth(100);
                cout << "You have gained the " << this->getName() << "'s key!" << endl;
                //Awards the player the key for defeating the monster
                std::string key1 = "key1";
                //Pushes the key into the backpack
                B.push_back(key1);
                //Establishes a backpack limit on items
                int i = 6;
                if(B.size() > i)
                {
                    cout << "Although the defeated monster yielded a health potion your bag is too small to hold it." << endl;
                }
                else
                {
                    cout << "You have won a health potion for defeating the creature." << endl;
                    //If backpack is not at capacity, it awards a health potion
                    B.push_back("potion");
                }
                loop = 2;
            }

            
        }
        if(decision == 2)
        {
        int loop = 1;
        while(loop == 1)
        {
            //Runs algorithim to check if there is a potion in the backpack
            if(std::find(B.begin(), B.end(), "potion")!= B.end())
            {
                B.pop_front();
                //Resets the player to max health so it can't exceed 100
                if(p->getHealth() == 100)
                {
                    cout << "Potion has been used but you are at max health!" << endl;
                    loop = 2;
                }
                else if(p->getHealth() > 81)
                {
                    cout << "Your health has now been reset to the max of 100" << endl;
                    p->setHealth(100);
                    loop = 2;
                }
                else
                {
                    //Adds 20 health to the player 
                    cout << "Potion has now been used" << endl;
                    p->setHealth(p->getHealth()+20);
                    cout << "Player health now: " << p->getHealth() << endl;
                    loop = 2;
                }       
            }
            else
            {
                cout << "You do not have any more potions left!!" << endl;
                loop = 2;
            }
        }
        }
        }

   return final;
}

/*********************************************************************
** The validation function below ensures that only integers through 1-5 are accepted. It keeps looping for user input until the desired integers are entered and then the choice is returned.

Reference for function: https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
*********************************************************************/
int Space::inputValidation(int choice)
{
    //Loops until user enters correct number
    while(true)
    {
        if(std::cin.fail())
        {
            std::cin.clear();
            //Removes the bad input
            std::cin.ignore(32767, '\n'); 
            std::cout << "Input is not valid. Please enter again." << std::endl;
            cin >> choice;
        }
        else if(choice == 1 || choice == 2)
        {
            return choice;
        }
        else{
            std::cout << "Please enter a valid number" << std::endl;
            std::cin.clear();
            std::cin >> choice;
        }
    }
}