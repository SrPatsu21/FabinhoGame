#ifndef AbstractUsableItens_hpp
#define AbstractUsableItens_hpp

#include "./AbstractTakeOnceItem.hpp"
#include <iostream>

class AbstractUsableItens : public AbstractTakeOnceItem
{
private:
    int durability;
    int damage;
protected:
    AbstractUsableItens(int durability, int damage);
    AbstractUsableItens(int durability, int damage, AbstractLivingEntity * owner);
public:
    ~AbstractUsableItens();

    virtual void setDurability(int durability);
    virtual int getDurability();
    virtual void setDamage(int damage);
    virtual int getDamage();
    virtual void useItem();
};
#endif
