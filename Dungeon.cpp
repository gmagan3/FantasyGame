#include <iostream>
#include "Dungeon.hpp"
using std::cout;
using std::endl;
using std::cin;

void Dungeon::runSpace(Character *player)
{
    Character *monster = new Troll;
    cout << "You have just entered into the Dungeon" << endl;
    cout << "In the haze of the dungeon, you have encountered a Troll!" << endl;
    int choice;
    cout << "Would you like to attack this troll or return to the resting room?"
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> choice;
    if(choice == 1)
    {
        int decision;
        int loop = 1;
        cout << "Every turn you will have the choice to use a health potion, run or attack."
        while(loop == 1)
        {
        cout << "1. Attack" << endl;
        cout << "2. Use health potion" << endl;
        cout << "3. Run" << endl;
        cin >> decision;
        if(decision == 1)
        {
            player->attack(monster->defense());
            monster->attack(player->defense());
        }
        }
    }
}