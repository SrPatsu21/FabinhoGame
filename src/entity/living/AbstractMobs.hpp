#ifndef AbstractMobs_hpp
#define AbstractMobs_hpp

#include "./AbstractLivingEntity.hpp";

class AbstractMobs : public AbstractLivingEntity
{
private:

protected:
    AbstractMobs(int maxlife, int life, int damage, int level);
    ~AbstractMobs();
public:
    virtual void passBout();
};

#endif
