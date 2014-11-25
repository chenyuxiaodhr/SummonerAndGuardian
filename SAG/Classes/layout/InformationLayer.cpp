#include "InformationLayer.h"
#include "LifeBar.h"
#include "SignetInfoBar.h"
#include "CharConvert.h"

USING_NS_CC;



InformationLayer::InformationLayer()
{

}

InformationLayer::~InformationLayer()
{


}

bool InformationLayer::init()
{
    if ( ! Layer::init() )
    {
        return false;
    }

    Size winSize = Director::sharedDirector()->getWinSize();

    m_pMineName = LabelTTF::create();
    m_pMineName->setString(CharConvert::a2u("Mine"));
    m_pMineName->setAnchorPoint(Vec2::ZERO);
    m_pMineName->setPosition(Vec2(10.f * winSize.width / 320.f, 460.f * winSize.height / 480.f));
    this->addChild(m_pMineName);

    m_pMineLife = LifeBar::create();
    m_pMineLife->setAnchorPoint(Vec2::ZERO);
    m_pMineLife->setPosition(Vec2(40.f * winSize.width / 320.f, 460.f * winSize.height / 480.f));
    this->addChild(m_pMineLife);

    m_pMineSignet = SignetInfoBar::create();
    m_pMineSignet->setAnchorPoint(Vec2::ZERO);
    m_pMineSignet->setPosition(Vec2(10.f * winSize.width / 320.f, 400.f * winSize.height / 480.f));
    this->addChild(m_pMineSignet);

    m_pEnemyName = LabelTTF::create();
    m_pEnemyName->setString(CharConvert::a2u("Enemy"));
    m_pEnemyName->setAnchorPoint(Vec2::ZERO);
    m_pEnemyName->setPosition(Vec2(190.f * winSize.width / 320.f, 460.f * winSize.height / 480.f));
    this->addChild(m_pEnemyName);

    m_pEnemyLife = LifeBar::create();
    m_pEnemyLife->setAnchorPoint(Vec2::ZERO);
    m_pEnemyLife->setPosition(Vec2(40.f * winSize.width / 320.f, 460.f * winSize.height / 480.f));
    this->addChild(m_pEnemyLife);

    m_pEnemySignet = SignetInfoBar::create();
    m_pEnemySignet->setAnchorPoint(Vec2::ZERO);
    m_pEnemySignet->setPosition(Vec2(10.f * winSize.width / 320.f, 400.f * winSize.height / 480.f));
    this->addChild(m_pEnemySignet);

    return true;
}

