
#ifndef POSITION_H
#define POSITION_H

/* テンプレートクラス
■概要
	クラスのメンバに対してテンプレートを使ったクラス

■書き方
	template <class T>
	class クラス名
	{
		T メンバ変数;

		T 関数名(引数)
		{
		}
	};

	// クラス外に定義を書く場合
	template <typename パラメータ名>
	戻り値の型 クラス名<パラメータ名>::関数名(引数)
	{
	
	}

■補足
	・テンプレートを使ったクラスのことを汎用クラスと呼んだりする
	・typenameとclassについては、その機能に違いはない
	　そのテンプレートを使う時の T の型が class である可能性があるなら class
	　intや、floatなどのデータ型である場合は typename を使うルールにすることで
	　コードの可読性を上げることが出来るかも……。
	・ T と書いた部分は、変数と同様にどのような名前でも構わない
	　'T'emplateなので、 T として解説している技術書やサイトが多い

■注意点
	クラスのテンプレートについては、基本的に定義(実装)も含め、
	すべてヘッダーファイルに書くようにする
	※cppを用意してそちらに定義(実装)を書くと、対策をとらない限りエラーが出てしまう
*/
template <class T>
class Position
{
public:
	Position()
		: m_PosX( 0 )
		, m_PosY( 0 )
	{
	}

public:
	void SetPosX( T x_ ){ m_PosX = x_; }
	void SetPosY( T y_ ){ m_PosY = y_; }

	T GetPosX() const;
	T GetPosY() const;

private:
	T m_PosX;
	T m_PosY;
};

// テンプレートクラスの関数定義(クラス外)
/*
template <typename パラメータ名>
戻り値の型 クラス名<パラメータ名>::関数名(引数)
{	
}
*/
template <typename T>
T Position<T>::GetPosX() const
{
	return m_PosX;
}

template <typename T>
T Position<T>::GetPosY() const
{
	return m_PosY;
}

#endif	// #ifndef POSITION_H
