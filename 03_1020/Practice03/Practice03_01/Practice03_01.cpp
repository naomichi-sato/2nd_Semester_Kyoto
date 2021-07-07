
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"
#include "EnemyManager.h"

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
/*
	// Base�̃|�C���^�ϐ��z��
	Base* array[] = 
	{
		new Player(),
		new Enemy()
	};
	array[1]->SetHp( 100 );

	for( int i = 0; i < 2; i++ )
	{
		if( array[i] != nullptr )
		{
			array[i]->Exec();

			PrintHp( array[i] );
			if( array[i]->CheckHit(10, 10, 20, 30) == false )
			{
				printf("�������Ă܂���\n");
			}
		}
	}

	// ���̂̔j��
	for (int i = 0; i < 2; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}

	// �������z�֐���錾�����N���X�́A
	// �P�̂Ŏ��̉������邱�Ƃ��o���Ȃ��Ȃ�
	// ���ۃN���X�ƌĂ�
//	Base base;
//	Base* pBase = new Base();
*/

	// EnemyManager���g����Enemy�N���X�̊Ǘ��̗�
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy           = nullptr;

	// �X�e�[�W�J�n���_�ł܂Ƃ߂ď�����
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);

	// �쐬�����G�l�~�[�Ɋe�������s�킹��
	enemyMng->Exec();
	enemyMng->Draw();

	// �w�肵���G�l�~�[���폜
	enemyMng->DestoryEnemy( pEnemy );
	// �w����W�ƐڐG���Ă���G�l�~�[���擾
	pEnemy = enemyMng->CheckHit( 10, 10, 20, 30 );

	system("pause");
	return 0;
}

