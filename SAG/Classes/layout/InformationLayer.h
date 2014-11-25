/*
�ļ�����InformationLayer.h
���ߣ�jxyi
����ʱ�䣺2014/11/20
���ܣ�ս������Ķ�ս��Ϣ��ʾ���
*/

#ifndef _INFORMATIONLAYER_H_
#define _INFORMATIONLAYER_H_

#include "cocos2d.h"

class LifeBar;
class SignetInfoBar;

class InformationLayer : public cocos2d::Layer
{
public:
    ~InformationLayer();
    CREATE_FUNC(InformationLayer);

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

