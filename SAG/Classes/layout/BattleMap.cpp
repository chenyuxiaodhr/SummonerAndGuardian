#include "BattleMap.h"

USING_NS_CC;

MapTile::MapTile() : m_mapImage(NULL)
, m_isOpened(false)
, m_belongToThis(false)
{
	m_mapImage = Sprite::create("CloseNormal.png");
	m_mapImage->retain();
}

MapTile::~MapTile()
{
	m_mapImage->release();
	m_mapImage = NULL;
}


BattleMap::BattleMap()
{
}

BattleMap::~BattleMap()
{
}