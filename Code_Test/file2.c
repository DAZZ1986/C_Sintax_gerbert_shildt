/*
#include <locale.h>
#include <stdio.h>
#include <string.h>
*/



//�������� ����. ���. � ����� Tests.c, � ��� ������������ � ��������.
extern int g_age1;	//����. ���. ��������� ������ ���


void SetAge2(void)
{
	g_age1 = 1000;
	printf("����. ���. g_age1 �������� � ������� SetAge2(�� ������� �����): %d \n", g_age1);
}




//Static
extern int gs_health;
gs_health = 20;
