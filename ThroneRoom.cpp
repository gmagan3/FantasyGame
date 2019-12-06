#include "ThroneRoom.hpp"
#include <iostream>
#include <deque>
using namespace std;

int Throne::runSpace(Character *p, std::deque <std::string> &B)
{
    cout << "Congrats! You have successfuly defeated all of the monsters in the Kingdom." << endl;
    cout << "You have now won the game and have saved the Kingdom!!" << endl;

    while(!B.empty())
    {
        B.pop_front();
    }
}