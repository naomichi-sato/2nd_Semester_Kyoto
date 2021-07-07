
#include <iostream>
#include <windows.h>
#include <stdio.h>

// �C�����C���֐��̏�����
/*
inline �߂�l�̌^ �֐���(����)
{
	�������e
}
*/
inline int AddSum(int a, int b)
{
	return (a + b);
}

// �N���X���Ɋ֐����`���邱�Ƃ��ł���
class Test
{
public:
	// �֐��̐錾���ɒ�`�������Ă��܂��ƁA
	// �����I��inline�֐��Ƃ��Ĉ�����
	int AddSum(int a, int b)
	{
		return (a + b);
	}
};

/*
���C�����C���֐��̒��ӓ_
�֐��̋K�͂��傫���Ɣ��f���ꂽ���̂́A
�Ⴆinlien�Ƃ��Ă��Ă��ʏ�̊֐��Ăяo���Ƃ��Ĉ�����

���̂��߁Ainline�֐��̏����͏��K�͂ɂ��Ȃ���΂Ȃ�Ȃ�
*/

// �������x�̈Ⴂ�����邽�߂̃e�X�g�p�֐�
inline unsigned int InlinePow(int x1, int x2)
{
	return (x1 * x2);
}
unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}

int main()
{
	int a = AddSum(1, 3);
	// �R���p�C�����Aa = (a + b) �[�� a = (1 + 3)�ɓW�J�����

	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f) )
	{
		return 0;
	}
	LARGE_INTEGER s, e;
	// inline�֐�
	{
		QueryPerformanceCounter(&s);
		unsigned int pow = 0;
		for( int i = 0; i < 10000; i++ )
		{
			for( int j = 0; j < 10000; j++ )
			{
				pow = InlinePow(i,j);
			}
		}
		printf("pow = %d\n", pow);

		QueryPerformanceCounter(&e);
		double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
		printf("inline time = %f sec\n", t);
	}

	// �֐��Ăяo��
	{
		QueryPerformanceCounter(&s);
		unsigned int pow = 0;
		for( int i = 0; i < 10000; i++ )
		{
			for( int j = 0; j < 10000; j++ )
			{
				pow = Pow(i,j);
			}
		}
		printf("pow = %d\n", pow);

		QueryPerformanceCounter(&e);
		double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
		printf("time = %f sec\n", t);
	}

}

