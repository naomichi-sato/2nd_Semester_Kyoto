
#ifndef UNIT_H
#define UNIT_H

#include "Definition.h"

// Unitクラス
class Unit
{
public:
	// コンストラクタ
	Unit();
	// デストラクタ
	~Unit();

	// ステータス表示
	void PrintStatus();

private:
	Status m_status;
};

#endif // #ifndef UNIT_H
