/*
文件名：AppConfig.h
作者：jxyi
创建时间：2014/11/30
功能：用于定义游戏中用到的全局常量与常用静态方法
*/

#ifndef _APPCONFIG_H_
#define _APPCONFIG_H_

#include "cocos2d.h"

class AppConfig
{
public:
    static cocos2d::Vec2 getRealVec2(const cocos2d::Vec2 &strVec2);

public:
    const static cocos2d::Size g_designSize;
};


#endif // _APPCONFIG_H_


