//
// Created by gianluca on 17/09/19.
//

#ifndef GG_STATE_INTRO_H
#define GG_STATE_INTRO_H

#include "BaseState.h"
#include "EventManager.h"

class State_Intro : public BaseState{
public:
    State_Intro(StateManager* l_stateManager);
    ~State_Intro();

    void OnCreate();
    void OnDestroy();

    void Activate();
    void Deactivate();

    void Update(const sf::Time& l_time);
    void Draw();

    void Continue(EventDetails* l_details);
private:
    sf::Sprite m_introSprite;
    sf::Font m_font;
    sf::Text m_text;
};


#endif //GG_STATE_INTRO_H
