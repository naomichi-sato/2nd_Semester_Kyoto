#include <stdio.h>
#include <stdlib.h>
#include <vector>   // �x�N�^�[�N���X���g�����߂̃w�b�_�[
#include <iostream>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	std::vector<int> v1(8);		// �v�f8�A���ׂĂ�0�ŏ�����

	// iterator���g����for���̉񂵕�
	//	for (int i = 0; i < v1.size(); i++) �ƈӖ��͓���
	int counter = 0;
	for (std::vector<int>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
	{
		*itr = rand();
		printf("v1[%d] = %d\n", counter, *itr);

		counter++;
	}
	printf("\n");

	system("pause");
	return 0;
}

