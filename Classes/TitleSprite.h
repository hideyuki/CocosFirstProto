#ifndef __TITLE_SPRITE_H__
#define __TITLE_SPRITE_H__

#include "cocos2d.h"

class TitleSprite: public cocos2d::Sprite
{
public:
    virtual bool init();
    CREATE_FUNC(TitleSprite);
};

#endif // __TITLE_SPRITE_H__