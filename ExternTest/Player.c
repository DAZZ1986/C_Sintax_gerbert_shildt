#include <stdio.h>        // подключаем заголовочный файл stdio.h
#include <locale.h>


//глобальные переменные и функция
int g_Age = 5;
int g_Speed;

int g_ShowBalance()
{
	g_Age += 20;
}