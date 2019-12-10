/*********************************************************************
** Program name: Final Project
** Author: Guleid Magan
** Date: December 10th, 2019
** Description: This is the Space class which is the parent class for several derived classes. It contains the input Validation function and the runSpace logic which runs the logic for each space which is passed down to the derived classes. 
*********************************************************************/


#ifndef SPACE_HPP
#define SPACE_HPP
#include "Character.hpp"
#include <string>
#include <deque>
using std::cout;
using std::cin;
using std::endl;

class Space {

    public:
    Space *top;
    Space *bottom;
    Space *right;
    Space *left;
    int inputValidation(int choice);
    Space()
    {
    top = nullptr;
    bottom = nullptr;
    right = nullptr;
    left = nullptr;
    };
    virtual int runSpace(Character *p, Character *m, std::deque <std::string> &);
    virtual std::string getName()
    {
        return this->name;
    }
    virtual ~Space(){};

    protected:
    std::string name;
    int choice;

};

#endif // !SPACE_HPP
