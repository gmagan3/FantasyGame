#include <iostream>
#include <stack>
#include <deque>
#include "string"
#include "Space.hpp"
#include "Adventurer.hpp"
#include "Dungeon.hpp"
#include "Lake.hpp"
#include "Yard.hpp"
#include "Room.hpp"
#include "Marsh.hpp"
#include "Chimera.hpp"
#include "Troll.hpp"
#include "Dragon.hpp"
#include "Hydra.hpp"
#include "ThroneRoom.hpp"
using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** The validation function below ensures that only integers through 1-5 are accepted. It keeps looping for user input until the desired integers are entered and then the choice is returned.

Reference for function: https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
*********************************************************************/
int inputValidation(int choice)
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
        else if((choice == 1) || (choice == 2))
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

int main(){
    //Creates the pointer and character object for the user
    Character *player;
    player = new Adventurer;
    cout << "Welcome Adventurer to the Kingdom of Baravia!" << endl;
    cout << "There are several monsters which you must vanquish to clear the quest" << endl;
    cout << "Once you have defeated all the monsters and collected all their souls you will be crowned King!" << endl;
    cout << "If you consult your backpack you will see that you have been given two health potions" << endl;
    cout << "They will restore 20 points of your total 100 health" << endl;
    //Creates a backpack for storing items
    std::deque<std::string> Backpack;
    //Pushes potions into the backpack
    std::string potion = "potion";
    Backpack.push_back(potion);
    Backpack.push_back(potion);

    //creates pointer for the space the player will be in
    Space *currentSpace;

    //Creates character objects for the different spaces
    Space *space1 = new Room;
    Space *space2 = new Dungeon;
    Space *space3 = new Lake;
    Space *space4 = new Yard;
    Space *space5 = new Marsh;
    Space *space6 = new Throne;

    //Creates character objects for the monsters
    Character *monster1 = new Troll;
    Character *monster2 = new Hydra;
    Character *monster3 = new Dragon;
    Character *monster4 = new Chimera;

    //Uses pointer to establish sequence of spaces in a linear fashion
    space1->right = space2;
    space2->left = space1;
    space2->right = space3;
    space3->left = space2;
    space3->right = space4;
    space4->left= space3;
    space4->right = space5;
    space5->left = space4;
    space5->right = space6;
    space6->left = space5;


    currentSpace = space1;
    int choice;
    int result;
    cout << "Do you wish to enter the next room?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> choice;
    inputValidation(choice);
    if(choice == 1)
    {
        //Sets the user to the next room
        currentSpace = currentSpace->right;
        //Runs function for when the user enters the room
        result = currentSpace->runSpace(player, monster1, Backpack);
    }
    if(result == 1)
    {
        cout << "Game Over!" << endl;
        return 0;
       
    }
    else if(result == 2)
    {
        cout << "Congrats you may move to the next area now." << endl;
    }
    int result1;
    currentSpace = currentSpace->right;
    result1 = currentSpace->runSpace(player, monster2, Backpack);

    if(result1 == 1)
    {
        cout << "Game Over!" << endl;
        return 0;
       
    }
    else if(result1 == 2)
    {
        cout << "Congrats you may move to the next area now." << endl;
    }
    int result2;
    currentSpace = currentSpace->right;
    result2 = currentSpace->runSpace(player, monster3, Backpack);

    if(result2 == 1)
    {
        cout << "Game Over!" << endl;
        return 0;
       
    }
    else if(result2 == 2)
    {
        cout << "Congrats you may move to the next area now." << endl;
    }
    int result3;
    currentSpace = currentSpace->right;
    result3 = currentSpace->runSpace(player, monster4, Backpack);

    if(result3 == 1)
    {
        cout << "Game Over!" << endl;
        return 0;
       
    }
    else if(result3 == 2)
    {
        cout << "Congrats you have now collected all of the keys and saved the kingdom!" << endl;
        //Empties the backpack with the game over
        while(!Backpack.empty())
        {
            Backpack.pop_front();
        }
    }
    currentSpace = currentSpace->right;

    

    

    

    //Frees the memory allocated by the previous objects with the game over
    delete player;
    delete space1;
    delete space2;
    delete space3;
    delete space4;
    delete space5;
    delete space6;

    delete monster1;
    delete monster2;
    delete monster3;
    delete monster4;




return 0;





}