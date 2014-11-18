/***********************
* Class: all data structs
* Author: CdiajadeX
* Date: 2014/11/18
************************/
#ifndef DataManager
#define DataManager

enum Effects {
	Summon,
	Attack,
	Guard,
	Move,
	Magic,
	Trick,

	Total,
};

struct CountOfEffects
{
	Effects effect;
	int effectTimes;

	CountOfEffects() : effect(Summon), effectTimes(1) {}
};

struct Dice
{
	CountOfEffects effectOfEachSide[6];

	CountOfEffects getEffectByIndex(int index)
	{
		return effectOfEachSide[index - 1];
	}
};

struct Monster 
{
	int monsterId;

	int attackValue;
	int defendValue;
	int hp;
	int race;
	
	//skills
};

struct Guardian
{
	Monster monster;
	Dice dice;

	int level;
};

#endif //end of file