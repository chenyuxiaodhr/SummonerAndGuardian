/*
�ļ�����AppConfig.h
���ߣ�jxyi
����ʱ�䣺2014/11/30
���ܣ����ڶ�����Ϸ���õ���ȫ�ֳ����볣�þ�̬����
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


