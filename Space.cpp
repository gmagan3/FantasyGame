#include "Space.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int Space::runSpace(Character *p, Character *m, std::deque <std::string> &B)
{
    int final;
    cout << "You have just entered into the" << this->getName() << endl;
    cout << "In the haze of the dungeon, you have encountered a Troll!" << endl;
    int choice;
    cout << "Would you like to attack this troll or return to the resting room?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> choice;
    if(choice == 1)
    {
        int decision;
        int loop = 1;
        cout << "Every turn you will have the choice to use a health potion, run or attack." << endl;
        while(loop == 1)
        {
        cout << "1. Attack" << endl;
        cout << "2. Use health potion" << endl;
        cin >> decision;
        if(decision == 1)
        {
            m->defense(p->attack());
            cout << p->getHealth() << endl;
            p->defense(m->attack());
            if(p->getHealth() < 1)
            {
                cout << "Oh no! You have died!" << endl;
                final = 1;
            }
            if(m->getHealth() < 1)
            {
                cout << "Congrats! You have defeated the" << this->getName() << endl;
                cout << "Your health will be reset to 100" << endl;
                final = 2;
                p->setHealth(100);
                cout << "You have gained the " << this->getName() << "'s key!" << endl;
                std::string key1 = "key1";
                B.push_back(key1);
                int i = 6;
                if(B.size() > i)
                {
                    cout << "Although the defeated monster yielded a health potion your bag is too small to hold it." << endl;
                }
                else
                {
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
            if(std::find(B.begin(), B.end(), "potion")!= B.end())
            {
                B.pop_front();
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
                    cout << "Potion has now been used" << endl;
                    p->setHealth(p->getHealth()+20);
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

        
    }


   return final;
}