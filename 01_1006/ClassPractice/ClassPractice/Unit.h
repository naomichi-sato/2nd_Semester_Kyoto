
#ifndef UNIT_H
#define UNIT_H

#include "Definition.h"

// Unit�N���X
class Unit
{
public:
	// �R���X�g���N�^
	Unit();
	// �f�X�g���N�^
	~Unit();

	// �X�e�[�^�X�\��
	void PrintStatus();

private:
	Status m_status;
};

#endif // #ifndef UNIT_H
