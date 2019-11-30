#ifndef CASTLE_HPP
#define CASTLE_HPP
#include "Space.hpp"

class Room: public Space {

public:
Room():Space(){
    name = "Room";
};

~Room(){};

};

#endif // ROOM_HPP