
#include <iostream>
#include "CharacterBase.h"

// const参照引数を持つパラメータ表示関数
void PrintParam( const CharacterBase& character );

int main()
{
	CharacterBase testChar;
	PrintParam( testChar );

	return 0;
}

// const参照引数を持つパラメータ表示関数
void PrintParam( const CharacterBase& character )
{
	printf( "Character Parameter List\n" );
	printf( "------------------------\n" );
	printf( "Hp  = %3d\n", character.GetHp() );
	printf( "Mp  = %3d\n", character.GetMp() );
	printf( "Str = %3d\n", character.GetStr() );
	printf( "Vit = %3d\n", character.GetVit() );
	printf( "Int = %3d\n", character.GetInt() );
}

