
#include <iostream>
#include "Num.h"
#include "Character.h"
#include "Enemy01.h"

int main()
{
	Num a(100), b(200);
	a.Print();
	b.Print();

	// staticなメンバ関数の使い方１
	// 通常のメンバ関数と同じように使える
	Enemy01 char1(10);
	char1.PrintHp();
	char1.Print();
	Enemy01 char2(20);
	char2.PrintHp();
	char2.Print();
	{
		Enemy01 char3(30);
		char3.PrintHp();
		char3.Print();
	}
	// staticなメンバ関数の使い方２
	// クラス名::関数名(引数)
	Character::Print();

	return 0;
}

