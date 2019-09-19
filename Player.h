//
// Created by gianluca on 17/09/19.
//

#ifndef GG_PLAYER_H
#define GG_PLAYER_H


#include "Character.h"
#include "EventManager.h"

class Player : public Character{
public:
    Player(EntityManager* l_entityMgr);
    ~Player();

    void OnEntityCollision(EntityBase* l_collider, bool l_attack);
    void React(EventDetails* l_details);
};

#endif //GG_PLAYER_H
