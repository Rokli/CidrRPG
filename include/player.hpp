#ifndef PLAYER_H
#define PLAYER_H

<<<<<<< HEAD
class Player{
    
=======
#include "object.hhp"
#include "string"

class Player : public Object {
private:
    unsigned int health;
    std::string name;
public:
    unsigned int attack() = 0;
>>>>>>> 0974d30 (ll)
};

#endif