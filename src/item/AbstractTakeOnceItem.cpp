#include "AbstractTakeOnceItem.hpp"
#include "../entity/living/AbstractLivingEntity.hpp"


AbstractTakeOnceItem::AbstractTakeOnceItem()
{
    setAsUntaked();
}
AbstractTakeOnceItem::AbstractTakeOnceItem(bool taked, AbstractLivingEntity* own)
{
    setAsTaked();
    setOwner(own);
};

AbstractTakeOnceItem::~AbstractTakeOnceItem()
{
    this->taked = true;
}

bool AbstractTakeOnceItem::isTaked()
{
    return this->taked;
};

void AbstractTakeOnceItem::setAsTaked()
{
    this->taked = true;
};

void AbstractTakeOnceItem::setAsUntaked()
{
    this->taked = false;
};

void AbstractTakeOnceItem::setOwner(AbstractLivingEntity* owner)
{
    this->owner = owner;
};
AbstractLivingEntity* AbstractTakeOnceItem::getOwner()
{
    return this->owner;
};