#pragma once

#include "object.hpp"

class Item : public Object{
private:
    std::string name;
    bool type;
public:
    virtual unsigned int getNumber() = 0;
    
    void setName(std::string name);
};

// Суть такая, если тип тру, то это атакующий предмет, генерит урон
// если тип фолз, то это хилящий предмет, и он хилит