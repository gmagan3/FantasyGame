#include <iostream>
#include <stack>
#include "string"
#include "Space.hpp"
#include "Adventurer.hpp"
#include "Dungeon.hpp"
#include "Lake.hpp"
#include "Yard.hpp"
#include "Room.hpp"
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main(){
    Character *player;
    player = new Adventurer;
    cout << "Welcome Adventurer to the Kingdom of Baravia!" << endl;
    cout << "There are several monsters which you must vanquish to clear the quest" << endl;
    cout << "Once you have defeated all the monsters and collected all their souls you will be crowned King!" << endl;
    cout << "If you consult your backpack you will see that you have been given two health potions";
    cout << "They will restore 20 points of your total 100 health" << endl;
    std::stack <std::string> Backpack;
    std::string potion = "potion";
    Backpack.push(potion);
    Backpack.push(potion);

    cout << "You are currently in the resting room" << endl;
    cout << "The next room is the Dungeon where the Troll resides" << endl;
    cout << "Do you wish to enter the Dungeon?" << endl;

    Space *currentSpace;
    Space *space1 = new Room;
    Space *space2 = new Dungeon;
    Space *space3 = new Lake;
    Space *space4 = new Yard;

    space1->right = space2;
    space1->left = nullptr;
    space2->left = space1;
    space2->right = space3;

    currentSpace = space1;

    cout << currentSpace->getName() << endl;
    currentSpace = currentSpace->right;
    cout << currentSpace->getName() << endl;





}