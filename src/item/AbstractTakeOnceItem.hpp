#ifndef AbstractTakeOnceItem_hpp
#define AbstractTakeOnceItem_hpp

#include "./InterfaceCollectionable.hpp"
#include "../entity/living/AbstractLivingEntity.hpp"

class AbstractTakeOnceItem : public InterfaceCollectionable
{
private:
    static bool taked;
    static AbstractLivingEntity* owner;

protected:
    AbstractTakeOnceItem();
    AbstractTakeOnceItem(bool taked, AbstractLivingEntity* own);

public:
    ~AbstractTakeOnceItem();
    virtual bool isTaked();
    virtual void setAsTaked();
    virtual void setAsUntaked();
    virtual void setOwner(AbstractLivingEntity* owner);
    virtual AbstractLivingEntity* getOwner();
};

#endif