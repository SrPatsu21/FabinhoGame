#ifndef AbstractLivingEntity_hpp
#define AbstractLivingEntity_hpp

#include "../AbstractEntity.hpp"

class AbstractLivingEntity : public AbstractEntity
{
private:
    int maxlife, life, damage, level;

protected:
    AbstractLivingEntity(int maxlife = 1, int life = 1, int damage = 0, int level = 0){}
    ~AbstractLivingEntity(){}
public:
    //encapsulation
    virtual int getMaxLife();
    virtual int getLife();
    virtual int getDamage();
    virtual int getLevel();
    //handel
    virtual void levelUp();
    virtual void lifeRegen(int amouth);
    virtual void lifeRegen();

    virtual void receiveDamage(int damage, int enemy_level);

    virtual void atackEnemy(AbstractLivingEntity enemy, int damage);
    //inehrent
    virtual void passBout();
};

#endif