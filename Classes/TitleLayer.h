#ifndef __TITLE_LAYER_H__
#define __TITLE_LAYER_H__

#include "cocos2d.h"

class TitleLayer: public cocos2d::Layer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(TitleLayer);
};

#endif // __TITLE_LAYER_H__
