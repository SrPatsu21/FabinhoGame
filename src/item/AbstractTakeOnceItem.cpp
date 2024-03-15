#include "AbstractTakeOnceItem.hpp"
#include "../entity/living/AbstractLivingEntity.hpp"
#include <cstddef>

AbstractTakeOnceItem::AbstractTakeOnceItem()
{
    setAsUntaked();
    removeOwner();
}
AbstractTakeOnceItem::AbstractTakeOnceItem(bool taked, AbstractLivingEntity* own)
{
    setAsTaked();
    setOwner(own);
};

AbstractTakeOnceItem::~AbstractTakeOnceItem(){}

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

void AbstractTakeOnceItem::setOwner(AbstractLivingEntity* own)
{
    this->owner = own;
};
void AbstractTakeOnceItem::removeOwner()
{
    this->owner = 0;
};


AbstractLivingEntity* AbstractTakeOnceItem::getOwner()
{
    return owner;
};