//
// Created by gianluca on 17/09/19.
//

#ifndef GG_STATE_GAMEOVER_H
#define GG_STATE_GAMEOVER_H

#include "BaseState.h"
#include <SFML/Graphics.hpp>

class State_GameOver : public BaseState{
public:
    State_GameOver(StateManager* l_stateManager);
    ~State_GameOver();

    void OnCreate();
    void OnDestroy();

    void Activate();
    void Deactivate();

    void Update(const sf::Time& l_time);
    void Draw();
private:
    sf::Font m_font;
    sf::Text m_text;
    float m_elapsed;
};


#endif //GG_STATE_GAMEOVER_H
