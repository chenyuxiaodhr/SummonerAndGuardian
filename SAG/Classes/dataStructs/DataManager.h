/***********************
* Class: all data structs
* Author: CdiajadeX
* Date: 2014/11/18
************************/
#ifndef _DataManager_H_
#define _DataManager_H_

#include <assert.h>

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
        assert(index >= 0 && index < 6);
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

typedef struct Signet
{
    unsigned int nAttack = 0;
    unsigned int nDefend = 0;
    unsigned int nMove = 0;
    unsigned int nMagic = 0;
    unsigned int nTrick = 0;
}Signet;

#endif //end of file