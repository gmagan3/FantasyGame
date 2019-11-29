#ifndef SPACE_HPP
#define SPACE_HPP

class Space {

    public:
    Space();
    virtual runSpace();
    Spaces *top;
    Spaces *bottom;
    Spaces *right;
    Spaces *left;
    struct Spaces
    {
        Character *value;
        Spaces *next;
        Spaces *prev;
        Spaces(Character *a, Spaces *next1 = nullptr, Spaces *prev1 = nullptr)
        {
            value = a;
            next = next1;
            prev = prev1;
        }
    };

}

#endif // !SPACE_HPP
