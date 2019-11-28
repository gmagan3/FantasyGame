#include <iostream>
#include <stack>
#include "string"
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Welcome Adventurer to the Kingdom of Baravia!" << endl;
    cout << "There are several monsters which you must vanquish to clear the quest" << endl;
    cout << "If you consult your backpack you will see that you have been given two health potions";
    cout << "They will restore 20 points of your total 100 health" << endl;
    std::stack <std::string> Backpack;
    std::string potion = "potion";
    Backpack.push(potion);
    Backpack.push(potion);

}