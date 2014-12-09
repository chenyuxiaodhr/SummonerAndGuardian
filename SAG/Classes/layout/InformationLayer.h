/*
文件名：InformationLayer.h
作者：jxyi
创建时间：2014/11/20
功能：战斗界面的对战信息显示面板
*/

#ifndef _INFORMATIONLAYER_H_
#define _INFORMATIONLAYER_H_

#include "cocos2d.h"
#include "DataManager.h"

class LifeBar;
class SignetInfoBar;

enum class PlayerType {
    kPlayerTypePos = 0,
    kPlayerTypeNeg
};

class InformationLayer : public cocos2d::Layer
{
public:
    ~InformationLayer();
    CREATE_FUNC(InformationLayer);

    void setLife(unsigned int nLife, PlayerType eType);
    void setSignet(const Signet &stSignet, PlayerType eType);

private:
    InformationLayer();
    bool init() override;

private:
    cocos2d::LabelTTF *m_pMineName = nullptr;
    cocos2d::LabelTTF *m_pEnemyName = nullptr;

    LifeBar *m_pMineLife = nullptr;
    LifeBar *m_pEnemyLife = nullptr;

    SignetInfoBar *m_pMineSignet = nullptr;
    SignetInfoBar *m_pEnemySignet = nullptr;
};











#endif // _INFORMATIONLAYER_H_


