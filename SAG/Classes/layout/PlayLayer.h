/*
�ļ�����PlayLayer.h
���ߣ�jxyi
����ʱ�䣺2014/11/20
���ܣ�ս��������
*/

#ifndef _PLAYLAYER_H_
#define _PLAYLAYER_H_

#include "cocos2d.h"

class OperationLayer;

class PlayLayer : public cocos2d::Layer
{
public:
    CREATE_FUNC(PlayLayer);
    ~PlayLayer();

private:
    PlayLayer();

    bool init() override;

private:
    OperationLayer *m_pOperationLayer = nullptr; // ��������layer
};



#endif // _PLAYLAYER_H_







