#ifndef AbstractCharacter_hpp
#define AbstractCharacter_hpp

#include "./AbstractLivingEntity.hpp"

class AbstractCharacter : public AbstractLivingEntity
{
private:
    //when have, add item
protected:
    AbstractCharacter(int maxlife, int life, int damage, int level);
public:
    ~AbstractCharacter();
    virtual int getDamage();

    virtual void atackEnemy(AbstractLivingEntity * enemy);

    //take item

    virtual void passBout();
};

#endif