#include <stdio.h>  // ���������� ������������ ���� stdio.h
#include <locale.h>
#include "Player.h"	//header ��� ����� ������� � ����� ������������ ���� ���������� g_Age, �� ����� ������� 
					//����������� ��� g_Age ���������� � ������ ����� ����� header �� � ��� �� �������� ���
					//������ extern int g_age;, � header ��� ����� ������� ���� ������ ���� � ���� ��������
					//extern int g_age;. �� �� �������� ������������ ������ ����� header.



int main(void)
{
	char* locale = setlocale(LC_ALL, "");

	//extern int g_Age;   //���� ������ ���� � ���� �������� extern int g_age;.
	printf("������� ������: %d \n", g_Age); //��� �� ��������������� ���������� ����������, ������� �� � ������
											//����� �� ����������, � ������� ����������� � Player.h, ��� ��� 
											//���������� � ������ �����.
	g_ShowBalance();
	printf("������� ������: %d \n", g_Age); //��� �� �������� �������� ���������� ����������.


	return 0;
}