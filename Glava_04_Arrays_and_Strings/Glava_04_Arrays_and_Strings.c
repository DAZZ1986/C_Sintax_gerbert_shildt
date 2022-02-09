﻿#include <locale.h>
#include <stdio.h>
#include <string.h>



// ////////////Передача одномерного массива в функцию
void func1(int* x, size_t n); //указатель
void func2(int x[10]); //массив определенного размера
void func3(int x[]); //массив без определенного размера

// ////////////Строки
//char* gets(char* x);


int main(void)
{
	char* locale = setlocale(LC_ALL, "");

	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/04.htm
	printf("///////// Глава 04. Массивы и строки\n");
	/*
	Массив — это набор переменных одного типа, имеющих одно и то же имя. Доступ к конкретному элементу массива
	осуществляется с помощью индекса. В языке С все массивы располагаются в отдельной непрерывной области памяти.
	Первый элемент массива располагается по самому меньшему адресу, а последний — по самому большому. Массивы могут
	быть одномерными и многомерными. Строка представляет собой массив символьных переменных, заканчивающийся специальным
	нулевым символом, это наиболее распространенный тип массива.

	Массивы и указатели тесно связаны. То, что может быть сказано о массивах, чаще всего непосредственно относится и к
	указателям, и наоборот. В этой главе рассматриваются массивы, указатели будут подробно рассмотрены в главе 5. Для
	полного понимания приемов работы с массивами и указателями читателю следует хорошо усвоить обе эти главы.

	*/




	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0401.htm
	printf("\n\n\n/////////// Одномерные массивы\n");
	/*
	Общая форма объявления одномерного массива имеет следующий вид:
	тип имя_переменной [размер];

	Как и другие переменные, массив должен быть объявлен явно, чтобы компилятор выделил для него определенную область
	памяти (т.е. разместил массив). Здесь тип обозначает базовый тип массива, являющийся типом каждого элемента.
	Размер задает количество элементов массива. Например, следующий оператор объявляет массив из 100 элементов типа
	double под именем balance:
	double balance[100];

	Согласно стандарту С89 размер массива должен быть указан явно с помощью выражения-константы. Таким образом, в
	программе на С89 размер массива определяется во время компиляции и впоследствии остается неизменным.
	(В С99 определены массивы, размер которых определяется во время выполнения. О них еще будет идти речь далее в
	этой главе, а также более подробно в части II).

	Доступ к элементу массива осуществляется с помощью имени массива и индекса. Индекс элемента массива помещается в
	квадратных скобках после имени. Например, оператор
	balance[3] = 12.23;
	присваивает 4-му элементу массива balance значение 12.23.
	Индекс первого элемента любого массива в языке С равен нулю. Поэтому оператор
	char p[10];
	объявляет массив символов из 10 элементов — от р[0] до р[9]. В следующей программе вычисляются значения элементов
	массива целого типа с индексами от 0 до 99:
	#include <stdio.h>

	int main(void)
	{
	  int x[100]; //объявление массива 100 целых
		int t;

		//присваение массиву значений от 0 до 99
		for (t = 0; t < 100; ++t) x[t] = t;

		//вывод на экран содержимого x
		for (t = 0; t < 100; ++t) printf("%d ", x[t]);

		return 0;
	}

	Объем памяти, необходимый для хранения массива, непосредственно определяется его типом и размером. Для одномерного
	массива количество байтов памяти вычисляется следующим образом:
	количество_байтов = sizeof(базовый_тип) × длина_массива

	Во время выполнения программы на С не проверяется ни соблюдение границ массивов, ни их содержимое. В область памяти,
	занятую массивом, может быть записано что угодно, даже программный код. Программист должен сам, где это необходимо,
	ввести проверку границ индексов. Следующий пример программы компилируется без ошибки, однако при выполнении
	происходит нарушение границы массива count и разрушение соседних участков памяти:

	int count[10], i;

	//здесь нарушена граница массива count
	for (i = 0; i < 100; i++) count[i] = i;

	Можно сказать, что одномерный массив — это список, хранящийся в непрерывной области памяти в порядке индексации.
	На рис. 4.1 показано, как хранится в памяти массив а, начинающийся по адресу 1000 и объявленный как
	char a[7];

	Элемент   a[0]   a[1]   a[2]   a[3]   a[4]   a[5]   a[6]   a[7]
	Адрес     1000   1001   1002   1003   1004   1005   1006   1007
	Рис. 4.1. Массив из семи символов, начинающийся по адресу 1000.
	*/







	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0402.htm
	printf("\n\n\n/////////// Создание указателя на массив\n");
	/*
	Указатель на 1-й элемент массива можно создать путем присваивания ему имени массива без индекса. Например, если
	есть объявление
	int sample[10];
	то в качестве указателя на 1-й элемент массива можно использовать имя sample. В следующем фрагменте программы
	адрес 1-го элемента массива sample присваивается указателю р:
	int *p;
	int sample[10];

	p = sample;

	В обеих переменных (р и sample) хранится адрес 1-го элемента, отличаются эти переменные только тем, что значение
	sample в программе изменять нельзя. Адрес первого элемента можно также получить, используя оператор получения
	адреса &. Например, выражения sample и &sample[0] имеют одно и то же значение. Тем не менее, в профессионально
	написанных программах вы не встретите выражения &sample[0].

	// МОИ ТЕСТЫ
	int arr[10] = {1,2,3,4,5,6,7,8,9};

	int* p1;
	p1 = arr; //адрес 1-го эл. массива присвоили поинтеру через имя массива.

	int* p2 = &arr[0]; //адрес 1-го эл. массива присвоили поинтеру через оператор получения адреса&.

	int arr1 = *p1; //тут вытащили значение, которое лежало по адресу который находился в поинтере p1
	int arr2 = *p2; //тут вытащили значение, которое лежало по адресу который находился в поинтере p2

	printf("\nАдрес первого эл. массива arr[0] через &arr[0]: %d \n", &arr[0]);
	printf("\nАдрес первого эл. массива arr[0] через p1: %d \n", p1);
	printf("\nАдрес первого эл. массива arr[0] через p2: %d \n", p2);

	printf("\nЗначение первого эл. массива arr[0] через индес эл. arr[0]: %d \n", arr[0]);
	printf("\nЗначение первого эл. массива arr[0] через поинтер p1: %d \n", arr1);
	printf("\nЗначение первого эл. массива arr[0] через поинтер p2: %d \n", arr2);
	*/






	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0403.htm
	printf("\n\n\n/////////// Передача одномерного массива в функцию\n");
	/*
	В функцию всегда передаем адрес в памяти, никогда не передаем значения!!!
	В языке С нельзя передать весь массив как аргумент функции. Однако можно передать указатель на массив, т.е. имя
	массива без индекса. Например, в представленной программе в func1() передается указатель на массив i:

	int main(void)
	{
	  int i[10];
	  func1(i);

	  // ... //
	}
	Если в функцию передается указатель на одномерный массив, то в самой функции его можно объявить одним из трех
	вариантов: как указатель, как массив определенного размера и как массив без определенного размера. Например,
	чтобы функция func1() получила доступ к значениям, хранящимся в массиве i, она может быть объявлена как:

	void func1(int* x) //указатель
	{
		// ... //
	}
	или как
	void func1(int x[10]) //массив определенного размера
	{
		// ... //
	}
	и наконец как
	void func1(int x[]) //массив без определенного размера
	{
		// ... //
	}

	Эти три объявления тождественны, потому что каждое из них сообщает компилятору одно и то же: в функцию будет
	передан указатель на переменную целого типа. В первом объявлении используется указатель, во втором — стандартное
	объявление массива. В последнем примере измененная форма объявления массива сообщает компилятору, что в функцию
	будет передан массив неопределенной длины. Как видно, длина массива не имеет для функции никакого значения, потому
	что в С проверка границ массива не выполняется. Эту функцию можно объявить даже так:

	void func1(int x[32])
	{
		// ... //
	}

	И при этом программа будет выполнена правильно, потому что компилятор не создает массив из 32 элементов, а только
	подготавливает функцию к приему указателя.

	// МОИ ТЕСТЫ
	int arr44[4] = {110, 220, 330, 440};

	// вычисляем размер массива - sizeof - возвращает значени в байтах, а int = 4 байта и поэтому массив равер 16 байт / 4 = 4 эл. массива
	func1(arr44, sizeof(arr44) / sizeof(int)); //по указателю, передал по имени адрес первого эл. массива.
	func2(arr44); //массив определенного размера.
	func3(arr44); //массив без определенного размера.
	*/






	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0404.htm
	printf("\n\n\n/////////// Строки\n");
	/*
	Одномерный массив наиболее часто применяется в виде строки символов. Строка — это одномерный массив символов,
	заканчивающийся нулевым символом. В языке С признаком окончания строки (нулевым символом) служит символ '\0'.
	Таким образом, строка содержит символы, составляющие строку, а также нулевой символ. Это единственный вид строки,
	определенный в С.
	На заметку: В C++ дополнительно определен специальный класс строк, называющийся String[1], который позволяет
	обрабатывать строки объектно-ориентированными методами. Стандарт С не поддерживает String.

	Объявляя массив символов, предназначенный для хранения строки, необходимо предусмотреть место для нуля, т.е. указать
	его размер в объявлении на один символ больше, чем наибольшее предполагаемое количество символов. Например,
	объявление массива str, предназначенного для хранения строки из 10 символов, должно выглядеть так:
	char str[11];
	Последний, 11-й байт предназначен для нулевого символа.

	Записанная в тексте программы строка символов, заключенных в двойные кавычки, является строковой константой, например:
	"некоторая строка". В конец строковой константы компилятор автоматически добавляет нулевой символ.

	Для обработки строк в С определено много различных библиотечных функций. Чаще всего используются следующие функции:
	Имя функции		Выполняемое действие
	strcpy(s1,s2)	Копирование s2 в s1
	strcat(s1,s2)	Конкатенация (присоединение) s2 в конец s1
	strlen(s1)		Возвращает длину строки s1
	strcmp(s1,s2)	Возвращает 0, если s1 и s2 совпадают, отрицательное значение, если s1<s2 и положительное значение, если s1>s2
	strchr(s1,ch)	Возвращает указатель на первое вхождение символа ch в строку s1
	strstr(s1,s2)	Возвращает указатель на первое вхождение строки s2 в строку s1

	Эти функции объявлены в заголовочном файле <string.h>. Применение библиотечных функций обработки строк иллюстрируется
	следующим примером:
	#include <stdio.h>
	#include <string.h>

	int main(void)
	{
	  char s1[80], s2[80];

	  gets(s1);
	  gets(s2);

	  printf("Длина: %d %d\n", strlen(s1), strlen(s2));

	  if(!strcmp(s1, s2)) printf("Строки равны\n");

	  strcat(s1, s2);
	  printf("%s\n", s1);

	  strcpy(s1, "Проверка.\n");
	  printf(s1);
	  if(strchr("Алло", 'e')) printf(" л есть в Алло\n");
	  if(strstr("Привет", "ив")) printf(" найдено ив ");

	  return 0;
	}

	Если эту программу выполнить и ввести в s1 и в s2 одну и ту же строку "Алло!", то на экран будет выведено следующее:
	Длина: 5 5
	Строки равны
	Алло!Алло!
	Проверка,
	л есть в Алло
	найдено ив

	Следует помнить, что strcmp() принимает значение ЛОЖЬ, если строки совпадают (хоть это и несколько нелогично).
	Поэтому в тесте на совпадение нужно использовать логический оператор отрицания ! как в предыдущем примере.
	*/
	/*
	//ТЕСТЫ ЖЕНЯ
	char* m4; //это pointer(указатель) на символьный тип.
	char m2[80] = "Горные вершины спят во тьме ночной.";


	char s1[80], s2[80];

	gets(s1);
	gets(s2);

	printf("Длина: %d %d\n", strlen(s1), strlen(s2));

	if (!strcmp(s1, s2)) printf("Строки равны\n");

	strcat_s(s1, s2);
	printf("%s\n", s1);

	strcpy_s(s1, "Проверка.\n");
	printf(s1);
	if (strchr("Алло", 'e')) printf(" л есть в Алло\n");
	if (strstr("Привет", "ив")) printf(" найдено ив ");
	*/












	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0405.htm
	printf("\n\n\n/////////// Двухмерные массивы\n");
	/*
	Стандартом С определены многомерные массивы. Простейшая форма многомерного массива — двухмерный массив. Двухмерный
	массив — это массив одномерных массивов. Объявление двухмерного массива d с размерами 10 на 20 выглядит следующим
	образом:
	int d[10][20];

	Во многих языках измерения массива отделяются друг от друга запятой. В языке С каждое измерение заключено в свои
	квадратные скобки.
	Аналогично обращению к элементу одномерного массива, обращение к элементу с индексами 1 и 2 двухмерного массива d
	выглядит так:
	d[1][2]

	В следующем примере элементам двухмерного массива присваиваются числа от 1 до 12 и значения элементов выводятся на
	экран построчно:
	#include <stdio.h>

	int main(void)
	{
	  int t, i, num[3][4];

	  for(t=0; t<3; ++t)
		for(i=0; i<4; ++i)
		  num[t][i] = (t*4)+i+1;

	  //вывод на экран
		for (t = 0; t < 3; ++t) {
			for (i = 0; i < 4; ++i)
				printf("%3d ", num[t][i]);
			printf("\n");
		}

		return 0;
	}

	В этом примере num[0][0] имеет значение 1, num[0][1] — значение 2, num[0][2] — значение 3 и так далее. Наглядно
	двухмерный массив num можно представить так:

	num[t][i]
	  | 0  1  2  3
	--+-----------
	0 | 1  2  3  4
	2 | 5  6  7  8
	3 | 9  10 11 12

	Двухмерные массивы размещаются в матрице, состоящей из строк и столбцов. Первый индекс указывает номер строки, а
	второй — номер столбца. Это значит, что когда к элементам массива обращаются в том порядке, в котором они размещены
	в памяти, правый индекс изменяется быстрее, чем левый. На рис. 4.2 показано графическое представление двухмерного
	массива в памяти.

	Рис. 4.2.Двухмерные массивы

					  Объявление массива char ch[3][4]
					 Левый индекс определяет номер строки
					Правый индекс определяет номер столбца
						  |          |          |
	   о				  V          V          V
	   п		+ ---------- + ---------- + ---------- +
	Л  р    -> | ch [0]  [0] | ch [0]  [1] | ch [0]  [2] |
	е  е		+ ---------- + ---------- + ---------- +
	в  д
	ы  е		+ ---------- + ---------- + ---------- +
	й  л  с -> | ch [1]  [0] | ch [1]  [1] | ch [1]  [2] |
	   я  т		+ ---------- + ---------- + ---------- +
	и  е  р
	н  т  о		+ ---------- + ---------- + ---------- +
	д     к -> | ch [2]  [0] | ch [2]  [1] | ch [2]  [2] |
	е  н  и		+ ---------- + ---------- + ---------- +
	к  о
	с  м		+ ---------- + ---------- + ---------- +
	   е	-> | ch [3]  [0] | ch [3]  [1] | ch [3]  [2] |
	   р		+ ---------- + ---------- + ---------- +


	Объем памяти в байтах, занимаемый двухмерным массивом, вычисляется по следующей формуле:
	количество_байтов =
	= размер_1 - го_измерения × размер_2 - го_измерения × sizeof(базовый_тип)
	Например, двухмерный массив 4 - байтовых целых чисел размерностью 10×5 занимает участок памяти объемом
	10×5×4
	то есть 200 байтов.

	Если двухмерный массив используется в качестве аргумента функции, то в нее передается только указатель на начальный
	элемент массива. В соответствующем параметре функции, получающем двухмерный массив, обязательно должен быть указан
	размер правого измерения[1], который равен длине строки массива. Размер левого измерения указывать не обязательно.
	Размер правого измерения необходим компилятору для того, чтобы внутри функции правильно вычислить адрес элемента
	массива, так как для этого компилятор должен знать длину строки массива. Например, функция, получающая двухмерный
	массив целых размерностью 10×10, должна быть объявлена так:

	void func1(int x[][10])
	{
		// ... //
	}
	Компилятор должен знать длину строки массива, чтобы внутри функции правильно вычислить адрес элемента массива. Если
	при компиляции функции это неизвестно, то невозможно определить, где начинается следующая строка, и вычислить,
	например, адрес элемента
	x[2][4]


	В следующем примере двухмерные массивы используются для хранения оценок студентов. Предполагается, что преподаватель
	ведет три класса, в каждом из которых учится не более 30 студентов. Обратите внимание на то, как происходит обращение
	к массиву grade в каждой функции.
	//Простая база данных оценок студентов.
	#include <stdio.h>
	#include <ctype.h>
	#include <stdlib.h>

	#define CLASSES  3
	#define GRADES  30

	int grade[CLASSES][GRADES];

	void enter_grades(void);
	int get_grade(int num);
	void disp_grades(int g[][GRADES]);

	int main(void)
	{
		char ch, str[80];

		for (;;) {
			do {
				printf("(В)вод оценок студентов\n");
				printf("В(ы)вод оценок студентов\n");
				printf("Вы(х)од\n");
				gets(str);
				ch = toupper(*str);
			} while (ch != 'В' && ch != 'ы' && ch != 'х');

			switch (ch) {
			case 'В':
				enter_grades();
				break;
			case 'ы':
				disp_grades(grade);
				break;
			case 'х':
				exit(0);
			}
		}

		return 0;
	}

	//Занесение оценок студентов в массив
	void enter_grades(void)
	{
		int t, i;

		for (t = 0; t < CLASSES; t++) {
			printf("Класс № %d:\n", t + 1);
			for (i = 0; i < GRADES; ++i)
				grade[t][i] = get_grade(i);
		}
	}

	//Ввод оценок
	int get_grade(int num)
	{
		char s[80];

		printf("Введите оценку студента № %d:\n", num + 1);
		gets(s);
		return(atoi(s));
	}

	//Вывод оценок
	void disp_grades(int g[][GRADES])
	{
		int t, i;

		for (t = 0; t < CLASSES; ++t) {
			printf("Класс № %d:\n", t + 1);
			for (i = 0; i < GRADES; ++i)
				printf("Студент № %d имеет оценку %d\n", i + 1, g[t][i]);
		}
	}






	///////////Массивы строк
	В программах на языке С часто используются массивы строк. Например, сервер базы данных сверяет команды пользователей
	с массивом допустимых команд. В качестве массива строк в языке С служит двухмерный символьный массив. Размер левого
	измерения определяет количество строк, а правого — максимальную длину каждой строки.Например, в следующем операторе
	объявлен массив из 30 строк с максимальной длиной 79 символов:
	char str_array[30][80];

	Чтобы обратиться к отдельной строке массива, нужно указать только левый индекс. Например, вызов функции gets() с
	третьей строкой массива str_array в качестве аргумента можно записать так:
	gets(str_array[2]);

	Этот оператор эквивалентен следующему:
	gets(&str_array[2][0]);

	Из этих двух форм записи предпочтительной является первая.
	Для лучшего понимания свойств массива строк рассмотрим следующую короткую программу, в которой на основе применения
	массива строк создан простой текстовый редактор:
	// Очень простой текстовый редактор.
	#include <stdio.h>

	#define MAX 100
	#define LEN 80

	char text[MAX][LEN];

	int main(void)
	{
		register int t, i, j;

		printf("Для выхода введите пустую строку.\n");

		for (t = 0; t < MAX; t++) {
			printf("%d: ", t);
			gets(text[t]);
			if (!*text[t]) break; //выход по пустой строке
		}

		for (i = 0; i < t; i++) {
			for (j = 0; text[i][j]; j++) putchar(text[i][j]);
			putchar('\n');
		}

		return 0;
	}
	Пользователь вводит в программу строки текста, заканчивая ввод пустой строкой. Затем программа выводит текст
	посимвольно.
	----------

	[1]Размер правого измерения указывать не нужно, если в вызывающей функции массив объявлен как** х и размещен
	динамически(см.главу 5)
	*/



	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0406.htm
	printf("\n\n\n/////////// Многомерные массивы\n");
	/*
	В языке С можно пользоваться массивами, размерность которых больше двух. Общая форма объявления многомерного массива
	следующая:
	тип имя_массива [Размер1][Размер2]...[РазмерN];

	Массивы, у которых число измерений больше трех, используются довольно редко, потому что они занимают большой объем
	памяти. Например, четырехмерный массив символов размерностью 10x6x9x4 занимает 2160 байтов. Если бы массив содержал
	2-байтовые целые, потребовалось бы 4320 байтов. Если бы элементы массива имели тип double, причем каждый элемент
	(вещественное число двойной точности) занимал бы 8 байтов, то для хранения массива потребовалось бы 17280 байтов.
	Объем требуемой памяти с ростом числа измерений растет экспоненциально. Например, если к предыдущему массиву
	добавить пятое измерение, причем его толщину по этому измерению сделать равной всего 10, то его объем возрастет
	до 172800 байтов.

	При обращении к многомерным массивам компьютер много времени затрачивает на вычисление адреса, так как при этом
	приходится учитывать значение каждого индекса. Поэтому доступ к элементам многомерного массива происходит
	значительно медленнее, чем к элементам одномерного.

	Передавая многомерный массив в функцию, в объявлении параметров функции необходимо указать все размеры измерений,
	кроме самого левого. Например, если массив m объявлен как
	int m[4] [3] [6] [5];

	то функция, принимающая этот массив, должна быть объявлена примерно так:
	void func1(int d[][3][6][5])
	{
	  // ... //
	}
	Конечно, можно включить в объявление и размер 1-го измерения, но это излишне.
	*/








	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0407.htm
	printf("\n\n\n/////////// Индексация указателей\n");
	/*
	Указатели и массивы тесно связаны друг с другом. Имя массива без индекса — это указатель на первый элемент массива.
	Рассмотрим, например, следующий массив:
	char p[10];

	Следующие два выражения идентичны:
	p
	&p[0]

	Выражение
	p == &p[0]
	принимает значение ИСТИНА, потому что адрес 1-го элемента массива — это то же самое, что и адрес массива.

	Как уже указывалось, имя массива без индекса представляет собой указатель. И наоборот, указатель можно 
	индексировать как массив. Рассмотрим следующий фрагмент программы:
	int *p, i[10];
	p = i;
	p[5] = 100;     //в присваении используется индекс
	*(p + 5) = 100; //в присвоении используется адресная арифметика
	Оба оператора присваивания заносят число 100 в 6-й элемент массива i. Первый из них индексирует указатель p, во
	втором применяются правила адресной арифметики. В обоих случаях получается один и тот же результат.

	Можно также индексировать указатели на многомерные массивы. Например, если а — это указатель на двухмерный массив
	целых размерностью 10×10, то следующие два выражения эквивалентны:
	a
	&a[0][0]
	Более того, к элементу(0, 4) можно обратиться двумя способами: либо указав индексы массива: а[0][4], либо с
	помощью указателя: *((int*)а + 4). Аналогично для элемента(1, 2): а[1][2] или *((int*)а + 12). В общем виде для
	двухмерного массива справедлива следующая формула:
	a[j][k] эквивалентно* ((базовый_тип*)а + (j * длина_строки) + k)

	Правила адресной арифметики требуют явного преобразования указателя на массив в указатель на базовый тип(см.главу 5).
	Указатели используются для обращения к элементам массива потому, что часто операции адресной арифметики выполняются
	быстрее, чем индексация массива.

	Двухмерный массив может быть представлен как указатель на массив одномерных массивов. Добавив еще один указатель,
	можно с его помощью обращаться к элементам отдельной строки массива. Этот прием демонстрируется в функции pr_row(),
	которая печатает содержимое конкретной строки двухмерного глобального массива num:

	int num[10][10];
	// ... //

	void  pr_row(int j)
	{
		int* p, t;
		p = (int*)&num[j][0];    //вычисление адреса 1-го элемента строки номер j
		for (t = 0; t < 10; ++t) printf("%d ", *(p + t));
	}


	Эту функцию можно обобщить, включив в список аргументов номер строки, длину строки и указатель на 1-й элемент:

	void pr_row(int j, int row_dimension, int* p)
	{
		int t;
		p = p + (j * row_dimension);

		for (t = 0; t < row_dimension; ++t)
			printf("%d ", *(p + t));
	}

	// ... //

	void f(void)
	{
		int num[10][10];

		pr_row(0, 10, (int*)num); //печать 1-й строки
	}
	Такой прием "понижения размерности" годится не только для двухмерных массивов, но и для любых многомерных.Например,
	вместо того, чтобы работать с трехмерным массивом, можно использовать указатель на двухмерный массив, причем вместо
	него в свою очередь можно использовать указатель на одномерный массив.В общем случае вместо того, чтобы обращаться
	к n - мерному массиву, можно работать с указателем на(n - 1) - мерный массив.Причем этот процесс понижения
	размерности кончается на одномерном массиве.
	----------

	[1]Так обозначается элемент, у которого первая координата равна 0, а вторая — 4.
	*/










	printf("\n\n\n/////////// Инициализация массивов\n");
	/*
	В языке С массивы при объявлении можно инициализировать. Общая форма инициализации массива аналогична инициализации
	переменной:
	тип имя_массива[размер1]...[размер№] = {список_значений};

	Список_значений представляет собой список констант, разделенных запятыми. Типы констант должны быть совместимыми с
	типом массива. Первая константа присваивается первому элементу массива, вторая — второму и так далее. После
	закрывающейся фигурной скобки точка с запятой обязательна.
	На заметку	В С99 локальные массивы можно инициализировать не константами, а переменными, однако в С89 все массивы
	инициализируются только константами.

	В следующем примере массив целых из 10 элементов инициализируется числами от 1 до 10:
	int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Здесь элементу i[0] присваивается 1, a i[9] — 10.

	Символьные массивы, содержащие строки, можно инициализировать строковыми константами:
	char имя_массива[размер] = "строка";

	В следующем примере массив str инициализируется фразой "Язык С":
	char str[9] = "Язык C";

	Это объявление можно записать так:
	char str[9] = {'Я', 'з', 'ы', 'к', ' ', 'C', '\0'};

	Строка кончается нулевым символом, поэтому при объявлении необходимо задавать размер массива, достаточный для того,
	чтобы этот символ поместился в нем. В предыдущем примере размер строки задан равным 7, хотя во фразе "Язык С"
	содержится 6 символов. Если строка инициализируется строковой константой, компилятор автоматически добавляет нулевой
	символ в конец строки.

	Многомерные массивы инициализируются так же, как и одномерные. В следующем примере массив sqrs инициализируется
	числами от 1 до 10 и их квадратами:
	int sqrs[10][2] = {
	  1, 1,
	  2, 4,
	  3, 9,
	  4, 16,
	  5, 25,
	  6, 36,
	  7, 49,
	  8, 64,
	  9, 81,
	  10, 100
	};

	Инициализируя многомерный массив, для улучшения наглядности элементы инициализации каждого измерения можно заключать
	в фигурные скобки. Этот способ называется группированием подагрегатов (subaggregate grouping). С использованием
	этого приема предыдущий пример может быть записан так:
	int sqrs[10][2] = {
	  {1, 1},
	  {2, 4},
	  {3, 9},
	  {4, 16},
	  {5, 25},
	  {6, 36},
	  {7, 49},
	  {8, 64},
	  {9, 81},
	  {10, 100}
	};
	При такой записи, если внутри группы недостаточно констант инициализации, то оставшиеся элементы группы автоматически
	заполняются нулями.




	///////////Инициализация безразмерных массивов
	Предположим, что необходимо создать таблицу сообщений об ошибках, используя инициализацию массивов:
	char e1[12] = "Ошибка чтения\n";
	char e2[13] = "Ошибка записи\n";
	char e3[18] = "Нельзя открыть файл\n";

	Для задания размера массива пришлось бы вручную подсчитывать количество символов в каждом сообщении. Однако в языке
	С есть конструкция, благодаря которой компилятор автоматически определяет необходимую длину строки. Если в
	операторе инициализации массива не указан размер массива, компилятор создает массив такого размера, что в нем
	умещаются все инициализирующие элементы. Таким образом создается безразмерный массив. Используя этот метод,
	предыдущий пример можно записать так:
	char e1[] = "Ошибка чтения\n";
	char e2[] = "Ошибка записи\n";
	char e3[] = "Нельзя открыть файл\n";

	Тогда оператор
	printf("%s имеет длину %d\n",  e2,  sizeof e2);
	выведет на экран следующее:
	Ошибка записи имеет длину 15

	Кроме уменьшения трудоемкости, инициализация безразмерных массивов полезна тем, что позволяет изменять длину любого
	сообщения, не заботясь о соблюдении границ массивов.

	Инициализация безразмерных массивов поддерживается не только для одномерных массивов. В многомерном массиве размер
	самого левого измерения также можно не указывать. Размеры по остальным измерениям обязательно должны быть указаны,
	так как это нужно компилятору для определения длины подмассивов, составляющих массив. Таким способом можно
	создавать таблицы изменяемого размера, компилятор автоматически выделит требуемую для них память. Например,
	объявление sqrs как безразмерного массива выглядит так:

	int sqrs[][2] = {
	  {1, 1},
	  {2, 4},
	  {3, 9},
	  {4, 16},
	  {5, 25},
	  {6, 36},
	  {7, 49},
	  {8, 64},
	  {9, 81},
	  {10, 100}
	};
	Преимущество безразмерного объявления массива состоит в том, что можно изменять длину таблицы, не заботясь о размере
	массива.
	*/






	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0409.htm
	printf("\n\n\n/////////// Массивы переменной длины\n");
	/*
	Как уже упоминалось, в С89 размер массива должен быть объявлен с помощью константных выражений. Поэтому компилятор
	С89 устанавливает фиксированный размер массива, не изменяющийся в процессе выполнения программы. Однако это не
	относится к С99, в котором определено новое мощное средство: массивы переменной длины. Стандарт С99 позволяет в
	объявлении размера массива использовать любые выражения, в том числе такие, значение которых становится известным
	только во время выполнения. Объявленный таким образом массив называется массивом переменной длины. Однако переменную
	длину могут иметь только локальные массивы (т.е. видимые в блоке или в прототипе). Приведем пример массива
	переменной длины:

	void f(int dim)
	{
	   char str[dim]; //символьный массив переменной длины
	   // ... //
	}
	Здесь размер массива str определяется значением переменной dim, которая передается в функцию f() как параметр. Таким
	образом, при каждом вызове f() создается массив str разной длины.
	Массивы переменной длины добавлены в С99 главным образом для поддержки численных методов обработки данных. В
	программировании это средство распространено достаточно широко. Однако следует помнить, что стандарт С89(и некоторые
	компиляторы C++) не поддерживает массивы переменной длины. Более подробно этот вопрос рассматривается в части II.
	*/






	// http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/04/0410.htm
	printf("\n\n\n/////////// Приемы использования массивов и строк на примере игры в крестики-нолики\n");
	/*
	Представленный длинный пример иллюстрирует большое количество приемов использования строк. Рассматривается простая
	программа игры в крестики-нолики. Двухмерный массив используется в качестве матрицы, изображающей игральную доску.

	Компьютер играет в очень простую игру. Когда наступает очередь хода компьютера, функция get_computer_move()
	просматривает матрицу в поиске незанятых ячеек. Если функция находит незанятую ячейку, она помещает туда символ O.
	Если незанятой ячейки нет, то функция выводит сообщение об окончании игры и прекращает работу программы. Функция
	get_player_move() спрашивает играющего, где он хочет поместить символ X. Верхний левый угол имеет координаты (1, 1),
	а нижний правый — (3, 3).

	Массив matrix, содержащий матрицу игры, инициализирован символами пробела. Каждый ход, сделанный игроком или
	компьютером, заменяет символ пробела символом X или O. Это позволяет легко отобразить матрицу на экране.

	После каждого хода вызывается функция check(), которая возвращает пробел, если победителя еще нет, или X, если
	победил игрок, или O, когда победил компьютер. Эта функция просматривает строки, столбцы и диагонали в поиске трех
	одинаковых символов (X или O) подряд.

	Функция disp_matrix() отображает на экране текущее состояние игры. Обратите внимание на то, как существенно упрощает
	эту функцию инициализация матрицы пробелами.

	Функции получают доступ к массиву matrix различными способами. Их стоит внимательно изучить для лучшего понимания
	приемов работы с массивами.

	//Простая игра в крестики-нолики.
	#include <stdio.h>
	#include <stdlib.h>

	char matrix[3][3];  //матрица игры

	char check(void);
	void init_matrix(void);
	void get_player_move(void);
	void get_computer_move(void);
	void disp_matrix(void);

	int main(void)
	{
		char done;

		printf("Это игра в крестики-нолики.\n");
		printf("Вы будете играть против компьютера.\n");

		done = ' ';
		init_matrix();

		do {
			disp_matrix();
			get_player_move();
			done = check();    //проверка, есть ли победитель
			if (done != ' ') break; //есть победитель
			get_computer_move();
			done = check();    //проверка, есть ли победитель
		} while (done == ' ');

		if (done == 'X') printf("Вы победили!\n");
		else printf("Победил компьютер!!!!\n");
		disp_matrix();    //показ финальной позиции

		return 0;
	}

	//Инициализация матрицы игры
	void init_matrix(void)
	{
		int i, j;

		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) matrix[i][j] = ' ';
	}

	//Ход игрока
	void get_player_move(void)
	{
		int x, y;

		printf("Введите координаты X,Y Вашего хода: ");
		scanf("%d%*c%d", &x, &y);

		x--; y--;

		if (matrix[x][y] != ' ') {
			printf("Неверный ход, попытайтесь еще.\n");
			get_player_move();
		}
		else matrix[x][y] = 'X';
	}

	//Ход компьютера
	void get_computer_move(void)
	{
		int i, j;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++)
				if (matrix[i][j] == ' ') break;
			if (matrix[i][j] == ' ') break;
			//Второй break нужен для выхода из цикла по i
		}

		if (i * j == 9) {
			printf("Конец игры\n");
			exit(0);
		}
		else
			matrix[i][j] = 'O';
	}

	//Вывод матрицы на экран
	void disp_matrix(void)
	{
		int t;

		for (t = 0; t < 3; t++) {
			printf(" %c | %c | %c ", matrix[t][0],
				matrix[t][1], matrix[t][2]);
			if (t != 2) printf("\n---|---|---\n");
		}
		printf("\n");
	}

	//Определение победителя
	char check(void)
	{
		int i;

		for (i = 0; i < 3; i++)  //проверка строк
			if (matrix[i][0] == matrix[i][1] &&
				matrix[i][0] == matrix[i][2]) return matrix[i][0];

		for (i = 0; i < 3; i++)  //проверка столбцов
			if (matrix[0][i] == matrix[1][i] &&
				matrix[0][i] == matrix[2][i]) return matrix[0][i];

		//проверка диагоналей
		if (matrix[0][0] == matrix[1][1] &&
			matrix[1][1] == matrix[2][2])
			return matrix[0][0];

		if (matrix[0][2] == matrix[1][1] &&
			matrix[1][1] == matrix[2][0])
			return matrix[0][2];

		return ' ';
	}

	Пояснение к программе. В функции get_player_move() с помощью библиотечной функции scanf() считываются с клавиатуры
	два целых числа x и y. Функция scanf() при считывании чисел предполагает, что во входном потоке они разделены
	пробелами(или пробельными символами), другие разделительные символы не допускаются.Однако многие пользователи
	привыкли к тому, что числа можно разделять, например, запятыми. (Собственно говоря, именно так и предлагается
	в подсказке, выдаваемой программой.) В приведенном примере символ, следующий непосредственно после первого числа,
	просто игнорируется, именно для этого в функции scanf() используется спецификатор формата%* c. Звездочка означает,
	что символ считывается из потока, но в память не записывается.

	*/




	return 0;
}  //конец main





/////////// Передача одномерного массива в функцию
// В функцию всегда передаем адрес в памяти, никогда не передаем значения!!!
void func1(int* x, size_t n) //указатель(pointer) и кол-во эл. массива.
{
	for (int i = 0; i != n; i++)
		printf("%d ", x[i]);
	printf("\n");
}

void func2(int x[10]) //массив определенного размера
{
	for (int i = 0; i != 4; i++)
		printf("%d ", x[i]);
	printf("\n");
}

void func3(int x[]) //массив без определенного размера
{
	for (int i = 0; i != 4; i++)
		printf("%d ", x[i]);
	printf("\n");
}

/*
// ////////////Строки
char gets(char* x)
{
	x = "Алло!";
	return x;
}
*/
/*
char* gets(char* buffer);
char* fgets(char* buffer, int size, FILE* stream);
*/

