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

BattleMap* BattleMap::create(cocos2d::Size contentSize)
{
	BattleMap *pRet = new BattleMap();
	if (pRet && pRet->init(contentSize))
	{
		pRet->autorelease();
		return pRet;
	}
	else
	{
		delete pRet;
		pRet = NULL;
		return NULL;
	}
}

bool BattleMap::init(cocos2d::Size contentSize)
{
	if (!Layer::init())
	{
		return false;
	}

	Node* container = Node::create();
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			container->addChild(m_mapTile[i][j].getMapImage());
			m_mapTile[i][j].getMapImage()->setPosition(
				m_mapTile[i][j].getMapImage()->getContentSize().width * (i + 0.5),
				m_mapTile[i][j].getMapImage()->getContentSize().height * (j + 0.5));
		}
	}

	container->setContentSize(Size(m_mapTile[0][0].getMapImage()->getContentSize().height * 10
		, m_mapTile[0][0].getMapImage()->getContentSize().height * 20));

	m_battleView = ScrollView::create(contentSize, container);
	this->addChild(m_battleView);
	m_battleView->setContentOffset(ccp(0, m_battleView->getViewSize().height - container->getContentSize().height));
	m_battleView->setDelegate(this);

	return true;
}

void BattleMap::scrollViewDidScroll(cocos2d::extension::ScrollView* view)
{
	log("%f", m_battleView->getContentOffset().y);
}

void BattleMap::scrollViewDidZoom(cocos2d::extension::ScrollView* view)
{

}