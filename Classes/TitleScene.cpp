#include "TitleScene.h"
#include "TitleLayer.h"

USING_NS_CC;

bool TitleScene::init()
{
    if (!Scene::init()) {
        return false;
    }
        
    this->createTitleLayer();
    
    return true;
}

void TitleScene::createTitleLayer()
{
    auto layer = TitleLayer::create();
    addChild(layer);
}