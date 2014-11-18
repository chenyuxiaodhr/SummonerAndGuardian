/*
�ļ�����StartLayer.h
���ߣ�jxyi
����ʱ�䣺2014/11/18
���ܣ���Ϸ�Ŀ�ʼ����
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

