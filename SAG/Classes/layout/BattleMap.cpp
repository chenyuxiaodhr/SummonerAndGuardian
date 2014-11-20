#include "BattleMap.h"

USING_NS_CC;
USING_NS_CC_EXT;

MapTile::MapTile() : m_mapImage(NULL)
, m_mapAffiliation(kNoMap)
, m_monsterInMap(kNoMonster)
{
	m_mapImage = Sprite::create("CloseNormal.png");
	m_mapImage->retain();
}

MapTile::~MapTile()
{
	m_mapImage->release();
	m_mapImage = NULL;
}

void MapTile::setMapImageTexture(cocos2d::Sprite* pSprite)
{
	if (pSprite && m_mapImage)
	{
		m_mapImage->setTexture(pSprite->getTexture());
	}
}

BattleMap::BattleMap()
{

}

BattleMap::~BattleMap()
{

}

bool BattleMap::init()
{
	if (!Layer::init())
	{
		return false;
	}

	ScrollView *scrollView = ScrollView::create(this->getParent()->getContentSize());

	this->addChild(scrollView);

	return true;
}