
#ifndef ENEMY01_H
#define ENEMY01_H

#include "Character.h"

class Enemy01 : public Character
{
public:
	Enemy01( int hp );
	void PrintHp();

private:
	int m_Hp;
};

#endif	// #ifndef ENEMY01_H

