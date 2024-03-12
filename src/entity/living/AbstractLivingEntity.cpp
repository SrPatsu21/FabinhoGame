#include <cmath>
#include "../AbstractEntity.cpp";

class AbstractLivingEntity : public AbstractEntity
{
    private:
    int maxlife, life, damage, level;


    public:
    AbstractLivingEntity(int maxlife = 1, int life = 1, int damage = 0, int level = 0)
    {
        this->maxlife=maxlife;
        this->life=life;
        this->damage=damage;
        this->level=level;
    }

    //encapsulation
    virtual int getMaxLife()
    {
        return maxlife;
    }
    virtual int getLife()
    {
        return life;
    }
    virtual int getDamage()
    {
        return damage;
    }
    virtual int getLevel()
    {
        return level;
    }
    //handel
    virtual void levelUp() 
    {
        this->level++;
    }
    virtual void lifeRegen(int amouth)
    {
        this->life = fmin(amouth, getMaxLife());
    }
    virtual void lifeRegen()
    {
        lifeRegen(1);
    }
    virtual void receiveDamage(int damage, int enimy_level)
    {
        this->life = fmax(0, this->life-(damage * (enimy_level/level)));
    }

    //inehrent
    virtual void passBout()
    {
        AbstractEntity::passBout();
    }

    

};