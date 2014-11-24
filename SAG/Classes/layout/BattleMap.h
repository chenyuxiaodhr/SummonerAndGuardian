/***********************
* Class: UI map of the battle game
* Author: CdiajadeX
* Date: 2014/11/19
************************/

#include "cocos2d.h"
#include "cocos-ext.h"

enum MapAffiliation
{
	kNoMap,
	kOurMap,
	kTheirMap,
};

enum MonsterInMap
{
	kNoMonster,
	kOurMonster,
	kTheirMonster,
};

class MapTile
{
public:
	MapTile();
	~MapTile();

	void setMapImageTexture(cocos2d::Sprite*);
	cocos2d::Sprite* getMapImage() { return m_mapImage; }

	CC_SYNTHESIZE(MapAffiliation, m_mapAffiliation, MapAffiliation);
	CC_SYNTHESIZE(MonsterInMap, m_monsterInMap, MonsterInMap);

private:
	cocos2d::Sprite* m_mapImage;
};

class BattleMap
	: public cocos2d::extension::ScrollViewDelegate
	, public cocos2d::Layer
{
public:
	//CREATE_FUNC(BattleMap);
	static BattleMap* create(cocos2d::Size);

private:
	virtual bool init(cocos2d::Size contentSize);

	BattleMap();
	~BattleMap();

	virtual void scrollViewDidScroll(cocos2d::extension::ScrollView* view);
	virtual void scrollViewDidZoom(cocos2d::extension::ScrollView* view);

private:
	MapTile m_mapTile[10][20];
	cocos2d::extension::ScrollView* m_battleView;
};
