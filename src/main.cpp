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
    std::cout << "select ou char" << std::endl << "1 Hero \t 2 Princess" << std::endl;
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
        //player
        std::cout << "1 atacar" << std::endl;
        std::cin >> action;
        if (1 == action)
        {
            AbstractLivingEntity * mob = monster;
            player->atackEnemy(mob, 0);
        }
        //monster
        monster->atackEnemy(player);

        //print result

        std::cout << "Dados:: player:" << player->getLife() << " monster: " << monster->getLife() << std::endl;

        //verify
        if (0 >= player->getLife())
        {
            delete player;
            player = NULL;
        }else 
        {
            player->passBout();
        }

        if (0 >= monster->getLife())
        {
            delete monster;
            monster = NULL;
        }else 
        {
            monster->passBout();
        }        
    }
    std::cout << "fim da batalha" << std::endl;
    if (NULL != player)
    {
        std::cout << "Parabens vc venceu de um monstro peba" << std::endl;
    } else
    {
        std::cout << "Parabens vc perdeu para monstro peba" << std::endl;
    }
    
    
    return 0;
}