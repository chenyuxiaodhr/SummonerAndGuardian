/***********************
* Class: UI map of the battle game
* Author: CdiajadeX
* Date: 2014/11/19
************************/

#include "cocos2d.h"

class MapTile
{
public:
	MapTile();
	~MapTile();

	void setMapImageTexture(cocos2d::Sprite*);

	CC_SYNTHESIZE(bool, m_isOpened, IsOpen);
	CC_SYNTHESIZE(bool, m_belongToThis, BelongToThis);

private:
	cocos2d::Sprite* m_mapImage;
};

class BattleMap
{
public:
	BattleMap();
	~BattleMap();

private:
	MapTile m_mapTile[10][20];
};
