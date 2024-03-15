#ifndef AbstractTakeOnceItem_hpp
#define AbstractTakeOnceItem_hpp

#include "./InterfaceCollectionable.hpp"
#include "../entity/AbstractLivingEntity.hpp"

class AbstractTakeOnceItem : public InterfaceCollectionable
{
private:
    bool taked;
    AbstractLivingEntity* owner;
protected:
    AbstractTakeOnceItem();
    AbstractTakeOnceItem(bool taked, AbstractLivingEntity* own);

public:

    ~AbstractTakeOnceItem();

    virtual bool isTaked();
    virtual void setAsTaked();
    virtual void setAsUntaked();
    virtual void setOwner(AbstractLivingEntity* owner);
    virtual void removeOwner();
    virtual AbstractLivingEntity* getOwner();
};

#endif