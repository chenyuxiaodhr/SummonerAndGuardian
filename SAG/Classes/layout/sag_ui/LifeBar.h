/*
文件名：LifeBar.h
作者：jxyi
创建时间：2014/11/25
功能：用于显示玩家的生命值信息
*/

#ifndef _LIFEBAR_H_
#define _LIFEBAR_H_

#include "cocos2d.h"

class LifeBar : public cocos2d::Node
{
public:
    ~LifeBar();
    CREATE_FUNC(LifeBar);

protected:
    LifeBar();
    virtual bool init() override;

private:

};
















#endif // _LIFEBAR_H_










