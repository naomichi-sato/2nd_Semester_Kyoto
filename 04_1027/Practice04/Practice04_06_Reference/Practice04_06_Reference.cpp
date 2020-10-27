
#include <iostream>

// 参照を引数にもつ関数
void Init( int& rhp, int& rmp )
{
	rhp = 50;
	rmp = 10;
}

int main()
{
	// 参照型の書き方
	// データ型& 変数名
	int val  = 0;
	int& ref = val;	// intの参照型変数ref

	printf("valのアドレス %x\n", &val );
	printf("refのアドレス %x\n", &ref );

	printf("valに100を代入\n");
	val = 100;
	printf("val = %d\n", val );
	printf("ref = %d\n", ref );

	printf("\n", ref );

	printf("refに10を代入\n");
	ref = 10;
	printf("val = %d\n", val );
	printf("ref = %d\n", ref );

	// 参照渡し
	// 引数に参照を持つ関数へ変数を渡すこと
	int hp = 0;
	int mp = 0;
	Init( hp, mp );	// 参照渡し
	printf("HP = %d\n", hp);
	printf("MP = %d\n", mp);

	return 0;
}


