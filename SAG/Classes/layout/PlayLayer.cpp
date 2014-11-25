#include "PlayLayer.h"
#include "InformationLayer.h"
#include "BattleMap.h"

USING_NS_CC;

PlayLayer::PlayLayer()
{

}

PlayLayer::~PlayLayer()
{


}

bool PlayLayer::init()
{
    if ( ! Layer::init() )
    {
        return false;
    }

    m_pInformationLayer = InformationLayer::create();
    this->addChild(m_pInformationLayer, 1);

    Size winSize = Director::sharedDirector()->getWinSize();
	m_pBattleMap = BattleMap::create(Size(winSize.width * 2.f / 3.f, winSize.height * 2.f / 3.f));
    //m_pBattleMap->setContentSize();
    this->addChild(m_pBattleMap, 0);

    return true;
}



