
#include <stdio.h>
#include <stdlib.h>
#include <string>   // string���g�����߂̃w�b�_�[
#include <iostream> // C++�Ŋg�����ꂽ���o�͗p�̃w�b�_�[

int main()
{
	// C����̕����A������
	char word = 'a';					// 1����
	char name[] = "naomichi sato";		// �����z��
	const char* cstr = "Hello World!";	// const char �|�C���^�^

	// �ۑ�F��L�R�̕����A�������printf�ŉ�ʂɏo�͂���
	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	// string�^�̏�����
	std::string str = "������";

	// C����̊֐���string�^�ɓ��͂���Ă��镶������g���ɂ�
	// .c_str()�Ƃ����֐��ŁA������̃|�C���^���󂯎��K�v������
//	printf("str = %s\n", str.c_str() );

	// C++�I�ȏ�����(iostream��strinig�̃C���N���[�h���K�v)
	std::cout << str << std::endl;

	system("pause");
	return 0;
}

