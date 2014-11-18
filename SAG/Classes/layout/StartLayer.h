/*
文件名：StartLayer.h
作者：jxyi
创建时间：2014/11/18
功能：游戏的开始界面
*/

#ifndef _STARTLAYER_H_
#define _STARTLAYER_H_

#include "cocos2d.h"

class StartLayer : public cocos2d::Layer
{
public:
    ~StartLayer();
    CREATE_FUNC(StartLayer);

private:
    StartLayer();

    bool init() override;

    void __addEditEntry();
    void __addPlayEntry();

private:
    bool m_bEditIsPushed;
    bool m_bPlayIsPushed;

};












#endif // _STARTLAYER_H_

