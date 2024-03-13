#include "./AbstractEntity.hpp"

int AbstractEntity::getBout()
{
    return bout;
}

void AbstractEntity::passBout()
{
    this->bout++;
}