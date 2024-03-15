#include "./AbstractCharacter.hpp"

AbstractCharacter::AbstractCharacter(int maxlife, int life, int damage, int level)
 : AbstractLivingEntity(maxlife, life, damage, level)
{}

AbstractCharacter::~AbstractCharacter(){}

void AbstractCharacter::passBout()
{
    AbstractLivingEntity::passBout();
}

void AbstractCharacter::atackEnemy(AbstractLivingEntity * enemy, int damage_plus)
{
    enemy->receiveDamage(getDamage(), getLevel());
}

AbstractUsableItens* AbstractCharacter::getItem()
{
    return this->item;
};
void AbstractCharacter::setItem(AbstractUsableItens * item)
{
    this->item = item;
    item->setAsTaked();
    item->setOwner(this);
};
void AbstractCharacter::useItem()
{
    getItem()->useItem();
};