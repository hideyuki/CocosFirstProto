#include "TitleSprite.h"

USING_NS_CC;

bool TitleSprite::init()
{
    if (!Sprite::init()) {
        return false;
    }
    
    setTexture("HelloWorld.png");
    
    return true;
}
