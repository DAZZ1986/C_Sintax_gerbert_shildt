#include <stdio.h>
#include <locale.h>
#include "Player.h"	//header ��� ����� ������� � ����� ������������ ����. ���������� g_Age, �� ����� ������� 
					//����������� ��� g_Age ���������� � ������ ����� ����� header �� � ��� �� �������� ���
					//������ extern int g_Age;, � header ��� ����� ������� ���� ������ ���� � ���� ��������
					//extern int g_Age;. �� �� �������� ������������ ������ ����� header.



int main(void)
{
	char* locale = setlocale(LC_ALL, "");

	extern int g_Age;  //���� ������ ���� � ���� �������� extern int g_Age; ���� ��� heder �����.
	g_Age = g_Age + 5; //��� �������� ��� ����� �������� extern ����������, ������ ������� �� � ����� ���������
					   //��� ��� extern int g_Age; � ����� ������ �������� � ���������� g_Age.
	 
	printf("������� ������: %d \n", g_Age); //��� �� ��������������� ���������� ���������� extern, � ������� 
											//����������� � Player.h, ��� ��� ���������� � ������ �����.
	g_ShowBalance();   //��� �� �������� �������� ���������� ����������.
	printf("������� ������: %d \n", g_Age); //��� �� ������ ���������� �������� �������� ���������� ����������.

	//extern int g_Speed = 20; //��� ������ ������, �� extern ���������� ���������� ����� ������ ���� ���!
	//extern int g_Speed; //��� �� �������� ����. ����������, �� ����� ���� � �� ������ �� ��� ���� � ������.
	printf("�������� ������: %d \n", g_Speed); //��� �� ������ �������� ����. ����������




	return 0;
}