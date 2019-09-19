//
// Created by gianluca on 17/09/19.
//

#ifndef GG_GAME_H
#define GG_GAME_H


#include "Window.h"
#include "EventManager.h"
#include "StateManager.h"
#include "TextureManager.h"
#include "EntityManager.h"
#include <iostream>

class Game{
public:
    Game();
    ~Game();

    void Update();
    void Render();
    void LateUpdate();

    sf::Time GetElapsed();

    Window* GetWindow();
private:
    void RestartClock();

    sf::Clock m_clock;
    sf::Time m_elapsed;
    SharedContext m_context;
    Window m_window;
    EntityManager m_entityManager;
    TextureManager m_textureManager;
    StateManager m_stateManager;
};



#endif //GG_GAME_H
