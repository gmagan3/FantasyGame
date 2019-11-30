#include "Space.hpp"
#include <iostream>
#include <string>
using namespace std;

void Space::runSpace(Character *p, Character *m)
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
        }
    }
}