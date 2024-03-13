#include "./AbstractCharacter.hpp";

AbstractCharacter::AbstractCharacter(int maxlife = 1, int life = 1, int damage = 0, int level = 0)
 : AbstractLivingEntity(maxlife, life, damage, level)
{}

AbstractCharacter::~AbstractCharacter()
{
    AbstractLivingEntity::~AbstractLivingEntity();
}

void AbstractCharacter::passBout()
{
    AbstractLivingEntity::passBout();
}

//take item

int AbstractCharacter::getDamage()
{
    return this->getDamage();//+ item damage bonus
}

void AbstractCharacter::atackEnemy(AbstractLivingEntity enemy)
{
    enemy.receiveDamage(getDamage(), getLevel());
}