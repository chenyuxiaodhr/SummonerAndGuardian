/*
�ļ�����LifeBar.h
���ߣ�jxyi
����ʱ�䣺2014/11/25
���ܣ�������ʾ��ҵ�����ֵ��Ϣ
*/

#ifndef _LIFEBAR_H_
#define _LIFEBAR_H_

#include "cocos2d.h"

class LifeBar : public cocos2d::Node
{
public:
    ~LifeBar();
    
    static LifeBar* create(unsigned int maxHeartCount);

protected:
    LifeBar();
    virtual bool init(unsigned int maxHeartCount);

private:
    void __initHeart();

private:
    unsigned int m_nMaxHeartCount = 3;
};
















#endif // _LIFEBAR_H_










