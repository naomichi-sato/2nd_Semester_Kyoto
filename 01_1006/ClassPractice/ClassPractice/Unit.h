
#ifndef UNIT_H
#define UNIT_H

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
	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};

#endif // #ifndef UNIT_H
