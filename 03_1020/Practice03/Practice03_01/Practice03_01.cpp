
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"

void PrintHp( Base* target )
{
	if(target == nullptr)
	{
		return;
	}
	printf("hp = %d\n", target->GetHp());
}

int main()
{
	// ���N���X�̃|�C���^�ϐ��ցA�p����̃N���X�̃A�h���X�����ł���
//	Base* player = new Player();
//	Base* enemy  = new Enemy();

	// �܂�A�ǂ����Base�N���X���p�����Ă���̂ŁA
	// Base�̃|�C���^�ϐ��z��ňꊇ�Ǘ����邱�Ƃ��o����
	Base* array[] = 
	{
		new Player(),
		new Enemy()
	};
	array[1]->SetHp( 100 );

	// array���g���ē����蔻���for���ŉ�
	for( int i = 0; i < 2; i++ )
	{
		if( array[i] != nullptr )
		{
			PrintHp( array[i] );
			if( array[i]->CheckHit(10, 10, 20, 30) == false )
			{
				printf("�������Ă܂���\n");
			}
		}
	}

//	delete player;
//	delete enemy;

	for (int i = 0; i < 2; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}

	system("pause");
	return 0;
}

