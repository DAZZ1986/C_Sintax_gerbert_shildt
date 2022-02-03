#include <stdio.h>  // подключаем заголовочный файл stdio.h
#include <locale.h>


static int statGlob_num;	//Статическая глобальная переменная. Видимость в рамках файла где она объявлена!
void series_start(int seed); //иницилизирует переменную statGlob_num
int series(void);



int main()
{
	char* locale = setlocale(LC_ALL, "");


	printf("Статическая глобальная переменная \n");
	series_start(100);
	int resSG = series();
	printf("Число: %d \n", resSG);




	printf("\n\n/////////////////////\n\n\n");




	printf("Статическая локальная переменная \n");
	int resSL;
	resSL = StaticLocalTest();
	printf("Число: %d \n", resSL); //2
	resSL = StaticLocalTest();
	printf("Число: %d \n", resSL); //4
	resSL = StaticLocalTest();
	printf("Число: %d \n", resSL); //6

	//printf("Число: %d \n", statLoc_num);//тк это статическая локальная переменная объявленная и определенная
										  //в функции, тут компилятор выдает ошибку, тк ее область видимости в
										  //рамках своего блока{} где она была объявлена, а объявлена она в 
										  //функции StaticLocalTest().


}



//Статическая локальная переменная
int StaticLocalTest(void)
{
	static int statLoc_num; //это статическая локальная переменная, которая ВИДИМА в рамках своего блока{} в котором
						//она объявлена. number1 будет сохранять свое значение между вызовами функции и тогда
						//мы получим постоянное увеличение числа на два(2)!     Ответы: 2; 4; 6. 
						//НО если мы уберем static, то тогда эта переменная при выходе из функции будет 
						//разрушаться и при входе в нее будет заново создаваться и как следствие значение 
						//функции НЕ будет сохраняться между вызовами функции!  Ответы: 2; 2; 2.
	statLoc_num += 2;
	return statLoc_num;
}




//Статическая глобальная переменная
void series_start(int seed)
{
	statGlob_num = seed; //иницилизируем переменную statGlob_num, тем самым демонстрируя ее доступеность 
						 //по всему файлу!
}

int series(void)
{
	statGlob_num = statGlob_num + 23;  //к глоб. перем. statGlob_num прибавляем 23, тем самым демонстрируя ее
	return statGlob_num;			   //доступеность по всему файлу!
}

