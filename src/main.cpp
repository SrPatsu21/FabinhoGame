#include <iostream>
#include "./entity/living/chars/Hero.hpp"
#include "./entity/living/chars/Princess.hpp"
#include "./entity/living/AbstractCharacter.hpp"
#include "./entity/living/mobs/Monster.hpp"
#include "./entity/living/AbstractMobs.hpp"



int main()
{
    int character;
    int action;
    AbstractCharacter * player;
    AbstractMobs * monster;
    monster = new Monster();
    std::cout << "select ou char" << std::endl << "1 Hero \t 2 Princess";
    std::cin >> character;

    if (1 == character)
    {
        player = new Hero();
    }else if(2 == character)
    {
        player = new Princess();
    }else
    {
        player = new Hero();
    }

    while(player != NULL && monster != NULL)
    {
        std::cout << "1 atacar";
        std::cin >> action;
        if (1 == action)
        {
            player->atackEnemy(monster);
        }
        monster->atackEnemy(player);

        if (player->getLife() > 0)
        {
            delete player;
        }else 
        {
            player->passBout();
        }

        if (monster->getLife() > 0)
        {
            delete monster;
        }else 
        {
            monster->passBout();
        }        
    }
    
    return 0;
}