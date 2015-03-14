#ifndef __TITLE_SCENE_H__
#define __TITLE_SCENE_H__

#include "cocos2d.h"

class TitleScene: public cocos2d::Scene
{
public:
    virtual bool init();    
    CREATE_FUNC(TitleScene);
    
    void createTitleLayer();
};

#endif // __TITLE_SCENE_H__
