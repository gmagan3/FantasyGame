#include "Space.hpp"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

void Space::runSpace(Character *p, Character *m, std::stack <std::string> &B)
{
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
        cout << "3. Run" << endl;
        cin >> decision;
        if(decision == 1)
        {
            m->defense(p->attack());
            cout << p->getHealth() << endl;
            p->defense(m->attack());
        }
        if(decision == 2)
        {
        std::string item;
        std::stack<std::string>b1;
        b1 = B;
        int loop = 1;
        while(!b1.empty() && loop == 1)
        {
            if(b1.top() == "potion")
            {
                B.pop();
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
            b1.pop();
        }

        }
        }
    }


   
}