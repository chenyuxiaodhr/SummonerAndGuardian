#include "AppConfig.h"

USING_NS_CC;

const Size AppConfig::g_designSize = { 320.f, 480.f };

Vec2 AppConfig::getRealVec2(const cocos2d::Vec2 &strVec2)
{
    Size winSize = Director::sharedDirector()->getWinSize();
    Vec2 ret = {
        strVec2.x * winSize.width / g_designSize.width,
        strVec2.y * winSize.height / g_designSize.height 
    };
    return ret;
}



