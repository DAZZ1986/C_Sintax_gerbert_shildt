/*
#include <locale.h>
#include <stdio.h>
#include <string.h>
*/



//объявили глоб. пер. в файле Tests.c, а тут переобъявили и изменили.
extern int g_age1;	//глоб. пер. объявлена второй раз


void SetAge2(void)
{
	g_age1 = 1000;
	printf("Глоб. пер. g_age1 изменена в функции SetAge2(из другого файла): %d \n", g_age1);
}




//Static
extern int gs_health;
gs_health = 20;
