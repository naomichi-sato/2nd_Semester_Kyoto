
#include <stdlib.h>
#include <stdio.h>

// Fighter�N���X
class Fighter
{
public:
	// �R���X�g���N�^
	Fighter();
	// �f�X�g���N�^
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};

Fighter::Fighter()
{
}

Fighter::~Fighter()
{
}

int main()
{

	system("pause");
	return 0;
}

