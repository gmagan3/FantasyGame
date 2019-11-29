#ifndef SPACE_HPP
#define SPACE_HPP

class Space {

    public:
    Space();
    struct Spaces
    {
        Spaces *next;
        Spaces *prev;
        
    }
    Spaces *top;
    Spaces *bottom;
    Spaces *right;
    Spaces *left;
}

#endif // !SPACE_HPP
