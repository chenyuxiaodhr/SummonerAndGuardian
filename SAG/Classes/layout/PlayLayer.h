/*
文件名：PlayLayer.h
作者：jxyi
创建时间：2014/11/20
功能：战斗主界面
*/

#ifndef _PLAYLAYER_H_
#define _PLAYLAYER_H_

#include "cocos2d.h"

class InformationLayer;
class BattleMap;

class PlayLayer : public cocos2d::Layer
{
public:
    CREATE_FUNC(PlayLayer);
    ~PlayLayer();

private:
    PlayLayer();

    bool init() override;

private:
    InformationLayer *m_pInformationLayer = nullptr; // 操作面板的layer
    BattleMap *m_pBattleMap = nullptr; // 棋盘的layer
};



#endif // _PLAYLAYER_H_







