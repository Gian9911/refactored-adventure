//
// Created by gianluca on 17/09/19.
//

#ifndef GG_ANIM_DIRECTIONAL_H
#define GG_ANIM_DIRECTIONAL_H

#include "Anim_Base.h"
#include "Directions.h"

class Anim_Directional : public Anim_Base{
protected:
    void FrameStep();
    void CropSprite();
    void ReadIn(std::stringstream& l_stream);
};

#endif //GG_ANIM_DIRECTIONAL_H
