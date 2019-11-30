#ifndef SPACE_HPP
#define SPACE_HPP
#include "Character.hpp"
#include <string>
#include <stack>
using namespace std;

class Space {

    public:
    Space *top;
    Space *bottom;
    Space *right;
    Space *left;
    Space()
    {
    top = nullptr;
    bottom = nullptr;
    right = nullptr;
    left = nullptr;
    };
    virtual void runSpace(Character *p, Character *m, std::stack <std::string> &);
    virtual std::string getName()
    {
        return this->name;
    }
    virtual ~Space(){};

    protected:
    std::string name;

};

#endif // !SPACE_HPP
