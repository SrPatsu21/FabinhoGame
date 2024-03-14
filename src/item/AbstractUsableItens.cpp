#include "./AbstractUsableItens.hpp"

AbstractUsableItens::AbstractUsableItens()
{}
AbstractUsableItens::AbstractUsableItens(int durability, int damage, AbstractLivingEntity* owner)
: AbstractTakeOnceItem(true, owner)
{
    setDurability(durability);
    setDamage(damage);
}


AbstractUsableItens::~AbstractUsableItens()
{
    if (this->durability == 0)
    {
        std::cout << "player broak the item"<< std::endl;
    }
}
void AbstractUsableItens::setDurability(int durability=1)
{
    this->durability = durability;
};
int AbstractUsableItens::getDurability()
{
    return this->durability;
};
void AbstractUsableItens::setDamage(int damage=0)
{
    this->damage = damage;
};
int AbstractUsableItens::getDamage()
{
    return this->damage;
};