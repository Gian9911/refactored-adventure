//
// Created by gianluca on 17/09/19.
//

#ifndef GG_TEXTUREMANAGER_H
#define GG_TEXTUREMANAGER_H
#include "ResourceManager.h"
#include <SFML/Graphics/Texture.hpp>

class TextureManager: public ResourceManager<TextureManager, sf::Texture>{
public:
    TextureManager(): ResourceManager("../cmake-build-debug/Resources/textures.cfg"){}

    sf::Texture* Load(const std::string& l_path){
        sf::Texture* texture = new sf::Texture();
        if(!texture->loadFromFile(
                Utils::GetWorkingDirectory() + l_path))
        {
            delete texture;
            texture = nullptr;
            std::cerr << "! Failed to load texture: " << l_path << std::endl;
        }
        return texture;
    }
};
#endif //GG_TEXTUREMANAGER_H
