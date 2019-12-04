#ifndef LAKE_HPP
#define LAKE_HPP
#include "Space.hpp"

class Lake: public Space {
public:
Lake():Space()
{
    name = "Lake";
}

~Lake(){}
};

#endif // LAKE_HPP