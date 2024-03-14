#include "AbstractTakeOnceItem.hpp"

AbstractTakeOnceItem::AbstractTakeOnceItem()
{
    this->setAsUntaked();
}
AbstractTakeOnceItem::AbstractTakeOnceItem(bool taked = true, AbstractLivingEntity* owner)
{
    this->taked = taked;
    this->setOwner(owner);
};

AbstractTakeOnceItem::~AbstractTakeOnceItem()
{
    this->setAsUntaked();
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