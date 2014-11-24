#include "PlayLayer.h"
#include "OperationLayer.h"
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

    m_pOperationLayer = OperationLayer::create();
    this->addChild(m_pOperationLayer);

    Size winSize = Director::sharedDirector()->getWinSize();
	m_pBattleMap = BattleMap::create(Size(winSize.width * 2.f / 3.f, winSize.height * 2.f / 3.f));
    //m_pBattleMap->setContentSize();
    this->addChild(m_pBattleMap);

    return true;
}



