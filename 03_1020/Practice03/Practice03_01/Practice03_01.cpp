
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"

int main()
{
	// ���N���X�̃|�C���^�ϐ��ցA�p����̃N���X�̃A�h���X�����ł���
	Base* player = new Player();
	Base* enemy  = new Enemy();

	player->SetMoveSpeed(5.0f);
	enemy->SetHp(100);
	if( player->CheckHit(10, 10, 20, 30) == false )
	{
		printf("�������Ă��܂���\n");
	}
	if (enemy->CheckHit(10, 10, 20, 30) == false)
	{
		printf("�������Ă��܂���\n");
	}

	delete player;
	delete enemy;

	system("pause");
	return 0;
}

