//
// Created by gianluca on 17/09/19.
//

#ifndef GG_SHAREDCONTEXT_H
#define GG_SHAREDCONTEXT_H

#include "Window.h"
#include "EventManager.h"
#include "TextureManager.h"
#include "EntityManager.h"
#include "DebugOverlay.h"

class Map;
struct SharedContext{
    SharedContext():
            m_wind(nullptr),
            m_eventManager(nullptr),
            m_textureManager(nullptr),
            m_entityManager(nullptr),
            m_gameMap(nullptr){}

    Window* m_wind;
    EventManager* m_eventManager;
    TextureManager* m_textureManager;
    EntityManager* m_entityManager;
    Map* m_gameMap;
    DebugOverlay m_debugOverlay;
};
#endif //GG_SHAREDCONTEXT_H
