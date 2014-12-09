#include "InformationLayer.h"
#include "LifeBar.h"
#include "SignetInfoBar.h"
#include "CharConvert.h"
#include "AppConfig.h"

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

    m_pMineName = LabelTTF::create();
    m_pMineName->setString(CharConvert::a2u("Mine"));
    m_pMineName->setAnchorPoint(Vec2::ZERO);
    m_pMineName->setPosition(AppConfig::getRealVec2(Vec2(10.f, 460.f)));
    this->addChild(m_pMineName);

    m_pMineLife = LifeBar::create(3);
    m_pMineLife->setAnchorPoint(Vec2::ZERO);
    m_pMineLife->setPosition(AppConfig::getRealVec2(Vec2(60.f, 460.f)));
    this->addChild(m_pMineLife);

    m_pMineSignet = SignetInfoBar::create();
    m_pMineSignet->setAnchorPoint(Vec2::ZERO);
    m_pMineSignet->setPosition(AppConfig::getRealVec2(Vec2(10.f, 400.f)));
    this->addChild(m_pMineSignet);

    m_pEnemyName = LabelTTF::create();
    m_pEnemyName->setString(CharConvert::a2u("Enemy"));
    m_pEnemyName->setAnchorPoint(Vec2::ZERO);
    m_pEnemyName->setPosition(AppConfig::getRealVec2(Vec2(190.f, 460.f)));
    this->addChild(m_pEnemyName);

    m_pEnemyLife = LifeBar::create(3);
    m_pEnemyLife->setAnchorPoint(Vec2::ZERO);
    m_pEnemyLife->setPosition(AppConfig::getRealVec2(Vec2(240.f, 460.f)));
    this->addChild(m_pEnemyLife);

    m_pEnemySignet = SignetInfoBar::create();
    m_pEnemySignet->setAnchorPoint(Vec2::ZERO);
    m_pEnemySignet->setPosition(AppConfig::getRealVec2(Vec2(190.f, 460.f)));
    this->addChild(m_pEnemySignet);

    return true;
}

void InformationLayer::setLife(unsigned int nLife, PlayerType eType)
{
    switch (eType)
    {
    case PlayerType::kPlayerTypePos:
        if ( m_pMineLife )
        {
            m_pMineLife->setLife(nLife);
        }
        break;
    case PlayerType::kPlayerTypeNeg:
        if ( m_pEnemyLife )
        {
            m_pEnemyLife->setLife(nLife);
        }
        break;
    default:
        CCAssert(false, "[InformationLayer][setLife] unexpected type");
        break;
    }
}

void InformationLayer::setSignet(const Signet &stSignet, PlayerType eType)
{


}
