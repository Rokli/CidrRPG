#ifndef PLAYER_H
#define PLAYER_H
    
#include "object.hpp"

class Player : public Object {
private:
    unsigned int health;
    
    std::string name;
public:
    virtual unsigned int attack() = 0;
    virtual void spell() = 0;
    
    void setName(std::string name);
};

#endif