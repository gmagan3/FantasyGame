#ifndef THRONE_HPP
#define THRONE_HPP
#include "Space.hpp"

class Throne: public Space {

public:
Throne():Space(){
    name = "Throne Room";
};

int runSpace(Character *p, std::deque <std::string> &);

~Throne(){};  

};

#endif // THRONE_HPP