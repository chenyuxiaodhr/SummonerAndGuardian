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
    
    static LifeBar* create(unsigned int maxHeartCount);
    void setLife(unsigned int nLife);

protected:
    LifeBar();
    virtual bool init(unsigned int maxHeartCount);

private:
    void __initHeart();

    void __updateHeart();

private:
    unsigned int m_nMaxHeartCount = 3;
    unsigned int m_nCurrentLife = 0;

    std::vector<cocos2d::Sprite*> m_vecHeart;
};
















#endif // _LIFEBAR_H_










