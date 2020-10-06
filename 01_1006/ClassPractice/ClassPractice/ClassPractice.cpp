
#include "Common.h"
#include "Unit.h"

int main()
{
	Unit unit;

	printf("m_hp  = %d\n", unit.m_hp);
	printf("m_str = %d\n", unit.m_str);
	printf("m_mag = %d\n", unit.m_mag);
	printf("m_tec = %d\n", unit.m_tec);
	printf("m_spd = %d\n", unit.m_spd);
	printf("m_def = %d\n", unit.m_def);
	printf("m_luc = %d\n", unit.m_luc);
	printf("m_mde = %d\n", unit.m_mde);

	system("pause");
	return 0;
}

