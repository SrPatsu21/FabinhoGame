#include "Hero.hpp"

Hero::Hero()
 : AbstractCharacter(10, 10, 2, 3)
{}

Hero::~Hero()
{
    AbstractCharacter::~AbstractCharacter();
}