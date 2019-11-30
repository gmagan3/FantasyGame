#ifndef SPACE_HPP
#define SPACE_HPP
#include "Character.hpp"
#include <string>

class Space {

    public:
    Space()
    {
    top = nullptr;
    bottom = nullptr;
    right = nullptr;
    left = nullptr;
    };
    virtual void runSpace(Character *){};
    virtual std::string getName()
    {
        return this->name;
    }
    Space *top;
    Space *bottom;
    Space *right;
    Space *left;
    virtual ~Space(){};

    protected:
    std::string name;

};

#endif // !SPACE_HPP
