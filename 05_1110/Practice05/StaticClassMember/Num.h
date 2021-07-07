
#ifndef NUM_H
#define NUM_H

class Num
{
public:
	Num( int num );
	void Print();

private:
	// staticメンバ変数の作り方(宣言)
	// static 型名 変数名
	static int m_Num;
};

#endif	// #ifndef NUM_H

