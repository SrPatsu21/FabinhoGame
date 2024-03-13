#include "Princess.hpp"

Princess::Princess()
 : AbstractCharacter(10, 10, 2, 3)
{}

Princess::~Princess()
{
    AbstractCharacter::~AbstractCharacter();
}