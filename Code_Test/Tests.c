#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "file3.h"

//Тесты по шпоргале

//Глобальные переменные
//Пример с использованием глоб. пер. с extern, но без файла .h .
int g_age1 = 35;  //глобальная переменная, определена.
void SetAge1(void);
void SetAge2(void);

//Пример с использованием глоб. пер. БЕЗ extern, с файлом .h .

//Локальные переменные
int localTest(int a);



// Static
//Глобальный static
 static int gs_health;  //определил глоб. пер.

//Локальный static (объявлен в функции)
 int staticTest(int a);



//Глобальные переменные
int count;  //глобальная переменная count
void func1(void);
void func2(void);


//Аргументы функции
int Sqr(int x);  //прототип функции
void Swap(int* x, int* y);
void print_upper(char* string);
void print_upper2(char* array);
char* xgets(char* s);

///////////Возвращаемые указатели
char* match(char c, char* s);  //прототип


///////////Функция типа void
void print_vertical(char* str);  //прототип


///////////Структуры
struct Soccer
{
    char name[80];
    char lastName[80];
    int age;
    int skill;
    char teamName[80];
};




//Чтение и запись строк
char* dic[][40] = {     //список слов и их значений
  "атлас", "Том географических и/или топографических карт.",
  "автомобиль", "Моторизоравонное средство передвижения.",
  "телефон", "Средство связи.",
  "самолет", "Летающая машина.",
  "", ""                //нули, завершающие список
};




//Препроцессор
#define ABS(a)  (a) < 0 ? -(a) : (a)
#define MAX 100

#define US 0 
#define ENGLAND 1
#define FRANCE 2
#define ACTIVE_COUNTRY US

#define TED 10



//#line 100000                  //установить счетчик строк

#define mkstr(s)  # s
#define concat(a, b)  a ## b





//Пузырьковая сортировка
int bubbleSort(int* a, int b);





int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");


    printf("\n\n\n/////////// Тесты по шпоргале\n");

    //Глобальные переменные
    //Пример с использованием глоб. пер. С extern, но без хедера .h .
    printf("\n\n\n/////////// g_age1 изменена в рамках файла!\n");
    printf("Вывод глобальной переменной ДО изменений g_age1: %d \n", g_age1);
    SetAge1(); //изменили в этом файле
    printf("Вывод глобальной переменной ПОСЛЕ изменений g_age1: %d \n", g_age1);

    printf("\n/////////// g_age1 изменена в рамках программы(другой файл)!\n");
    printf("Вывод глобальной переменной ДО изменений g_age1: %d \n", g_age1);
    SetAge2();  //изменили в другом файле
    printf("Вывод глобальной переменной ПОСЛЕ изменений g_age1: %d \n", g_age1);
    
    printf("\n");

    //Пример с использованием глоб. пер. С extern, с хедером .h .
    printf("\n\n\n/////////// g_skill изменена в рамках программы(другой файл)!\n");
    printf("Вывод глоб. пер. g_skill ДО изменений в функции: %d \n", g_skill);
    SetSkill();
    printf("Вывод глоб. пер. g_skill ПОСЛЕ изменений в функции: %d \n", g_skill);

    printf("\n/////////// g_skill изменена в рамках файла(напрямую)!\n");
    g_skill = 200;
    printf("Вывод глоб. пер. ПОСЛЕ изменений g_skill напрямую: %d \n", g_skill);

    printf("\n");

    //Пример с использованием глоб. пер. БЕЗ extern, но с хедером .h .

    //Локальные переменные
    for (int i = 0; i < 10; i++)
    {
        localTest(5);
    }




    printf("Static \n");
    //Глобальный static
    printf("Глобальный static = %d \n", gs_health); //после установки спецификатора static, тут будет 0, а не 20, как мы 
    //переприсвоили в файле file2.c


    //Локальный static
    printf("Локальный static \n");

    for (int i = 0; i < 10; i++)
    {
        staticTest(5);
    }













    printf("\n\n\n/////////// Глава 02. Выражения\n");
    /*
    printf("\n\n\n/////////// Глобальные переменные\n");
    count = 100;   //глобальная переменная count
    func1();
    */
    /*
    int x = 5 / 2;
    prinf("%d \n", 5 / 2);
    */









    printf("///////// Глава 03. Операторы\n");
    /*
    Оператор ? является тернарным, потому что он имеет три операнда. Его общая форма следующая:
    Выражение1 ? Выражение2 : Выражение3;
    */
    /*
    int b22 = 17;
    int i22 = 7 > b22 ? printf("7 bolshe %d\n", b22) : printf("7 menshe %d\n", b22);
    */

    /*
    //Квадрат числа
    int isqrd, i;
    printf("Введите число: ");
    scanf_s("%d", &i);
    isqrd = i > 0 ? i * i : -(i * i);
    printf("%d число в квадрате %d", i, isqrd);
    */

    /*
    int a, b;

    printf("Введите два числа: ");
    scanf_s("%d%d", &a, &b);

    if (b) printf("%d\n", a / b);
    else printf("Делить на нуль нельзя.\n");
    */





    printf("\n\n\n///////// Глава 05. Указатели\n");

    printf("/////////// Трудности при работе с указателями\n");
    /*
    char* p1; //указатель типа char
    char s[80]; //строка из 79 символов, последний 0.

    printf("Enter a string : ");
    do {
        p1 = s;   //установка p1 в начало строки s

        gets(s);  //чтение строки с клавиатуры

        //печать десятичного эквивалента каждого символа
        while (*p1) printf(" %d", *p1++);

    } while (strcmp(s, "выполнено"));
    */



    /*
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
    char str[50];

    printf("Enter a string : ");
    gets(str);

    printf("You entered: %s", str);
    */







    printf("\n\n\n/////////// Аргументы функции\n");
    /*
    //Аргументы функции - параметры по значения
    int t = 10;
    printf("%d %d\n", Sqr(t), t);

    //Аргументы функции - параметры по ссылке
    int p1 = 10;
    int p2 = 2000;
    printf("p1 и p2 перед обменом значениями: %d %d\n", p1, p2);
    Swap(&p1, &p2); //передать адреса переменных p1 и p2
    printf("p1 и p2 после обмена значениями: %d %d\n", p1, p2);



    char s[80]; //это строка (массив)
    
    printf("\nprint_upper\n");
    printf("Введите строку символов: ");
    gets(s);
    printf("\ns в нижнем регистре: %s\n", s);
    print_upper(s);
    printf("\ns теперь на верхнем регистре: %s\n", s);

    printf("\nprint_upper2\n");
    printf("Введите строку символов: ");
    gets(s);
    print_upper2(s);
    printf("\ns не изменялась: %s", s);
    

    printf("\nxgets\n");
    printf("Введите строку символов: ");
    *xgets(s);  //ЖЕНЯ, какая разница вызывать функцию с указателем или без??
    printf("\nxgets: %s", s);
    */

    /*
    ///////////Возвращаемые указатели
    char ss[80], *p, ch;

    gets(ss);  //тут считывается строка
    ch = getchar(); //тут считывается символ
    p = match(ch, ss);  //тут в функции ищется символ на совпадение в строке, и если символ найден, то в указатель "p"
                        //запишется адрес данного символа.

    if (*p)  //символ найден
        printf("%s ", p);
    else
        printf("Символа нет.");
    */


    ///////////Функция типа void
    //if (argc > 1) print_vertical(argv[1]);







    printf("\n\n\n/////////// Структуры\n");
    /*
    struct Soccer   //объявление структуры в шапке файла (тут просто для наглядности)
    {
        char name[80];
        char lastName[80];
        int age;
        int skill;
        char teamName[80];
    };
   */
    /*
    struct Soccer player; //определение структуры (тоесть создали переменную тип которой является структура Soccer)

    strcpy_s(player.name, sizeof(player.name), "Di maria"); //инициализация члена/поля name, в структуре player.
    printf("Name: %s \n", player.name);

    player.age = 33; //инициализация члена/поля age, в структуре player.
    printf("Age: %d \n", player.age);
    */


    printf("\n\n\n/////////// Массивы структур\n");
    /*Мой коммент:
    Все структуры в массиве являются безимянными, если нужно сделать имя, то можно создать структуру с именем и пробросить
    через указатель из массива. И структуры с одинаковыми именем создавать нельзя.*/
    /*
    struct Soccer playerList[100];  //тут создали массив структур, тоесть 100 структур с наборами переменных    
    playerList[2].age = 20;         //инициализировали поле age в структуре под номером 3
    printf("Player 3 age: %d\n", playerList[2].age);
    */






    printf("\n\n\n/////////// Чтение и запись символов\n");
    /*
    char ch;
    printf("Введите какой-нибудь текст (для завершения работы введите точку).\n");
    do {
        ch = getchar();

        if (islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);

        putchar(ch);
    } while (ch != '.');
    */


    /*
    char ch2;
    printf("Введите какой-нибудь текст 2 (для завершения работы введите точку).\n");
        do {
            ch2 = getch();

            if (islower(ch2)) ch2 = toupper(ch2);
            else ch2 = tolower(ch2);

            putchar(ch2);
        } while (ch2 != '.');
        */


    
    printf("\n\n\n/////////// Чтение и запись строк\n");
    
    /*
    //int getchar(void);    int putchar(int c);
    printf("Введите какой-нибудь текст (для завершения работы введите точку).\n");
    char sss;
    do {

        sss = getchar();
        putchar(sss);

    } while (sss != '.');
    */

    /*
    //int getch(void);    int getche(void);
    char ch;
    printf("Введите какой-нибудь текст (для завершения работы введите точку).\n");
        do {
            ch = _getch();

            if (islower(ch)) ch = toupper(ch);
            else ch = tolower(ch);

            putchar(ch);
        } while (ch != '.');
    */

    /*
    char str[80];
    gets(str);
    puts(str);
    printf("Длина в символах равна %d", strlen(str));
    */


    /*
    char* dic[][40] = {     //список слов и их значений
      "атлас", "Том географических и/или топографических карт.",
      "автомобиль", "Моторизоравонное средство передвижения.",
      "телефон", "Средство связи.",
      "самолет", "Летающая машина.",
      "", ""                //нули, завершающие список
    };
    */
    /*
    char word[80], ch;
    char** p;
    do {
        puts("\nВведите слово: ");
        scanf_s("%s", word);
        p = (char**)dic;

        do { //поиск слова в словаре и вывод его значения
            if (!strcmp(*p, word)) {
                puts("Значение:");
                puts(*(p + 1));
                break;
            }
            if (!strcmp(*p, word)) break;
            p = p + 2;  // продвижение по списку
        } while (*p);
        if (!*p) puts("Слово в словаре отсутствует.");
        printf("Будете еще вводить? (y/n): ");
        scanf_s(" %c%*c", &ch);
    } while (toupper(ch) != 'N');
    */




    printf("\n\n\n/////////// printf() \n");
    /*
    printf("Мне нравится язык %c %s", 'C', "и к тому же очень сильно! \n \n");

    double f;
    for (f = 1.0; f < 1.0e+10; f = f * 10)
        printf("%g ", f);

    unsigned num;
    for (num = 0; num < 16; num++) {
        printf("%o ", num);
        printf("%x ", num);
        printf("%X\n", num);
    }

    int sample;
    printf("\nВывод адреса переменной sample: %p \n", &sample);
    */
    /*  тут ОШИБКА
    int count;
    printf("this%n is a test\n", &count);
    printf("%d", count);
    */
    /*
    printf("%10.5f\n", 123.1234567); //тут первая цифра означает что ширина поля вывода будет не менее 10 символов, а вторая
                                     //цифра определяет сколько цифр будет выведено после точки.
    printf("%10.15s\n", "Это простая проверка."); //диапазон (минимум 10, максимум 15 символов на вывод).
    printf("%10.8d\n", 1000); //тут первая цифра ознгачает сколько вообще символов будет занимать строка, а вторая цифра говорит
                              //сколько цифр выводить, и если число меньше этих цифр, то перед числом они добьются нулями.
    */
    /*
    printf("%x %#x\n", 10, 10); //если вы поставите # непосредственно перед x или X, то шестнадцатеричное число будет выведено
                                //с префиксом 0x.
    printf("%*.*f", 10, 4, 1234.34); //минимальная ширина поля будет равна 10 символам, точность — 4, а отображение кол-во
                                     //чисел после точки.(тоесть точность числа).   
    */



    printf("\n\n\n/////////// scanf_s()\n");
    /*
    int i, j;
    scanf_s("%o%x", &i, &j);
    printf("%o %x", i, j);
    */
    /* тут ОШИБКА ЖЕНЯ - во второй символ щаписывает какуюто "М"
    char a, b, c;
    scanf_s("%c%c%c", &a, &b, &c);
    printf("%c%c%c", a, b, c);
    */
    /* тут ОШИБКА ЖЕНЯ
    char name[50];
    int age = 0;
    printf("Введите name: ");
    scanf_s("%s", name);
    printf("Введите age: ");
    scanf_s("%d", &age);
    printf("Вы ввели - name: %s, age:  \n", name);
    */
    /* тут ОШИБКА ЖЕНЯ
    char str[80];
    printf("Введите строку: ");
    scanf_s("%s", str);
    printf("Вот Ваша строка: %s", str);
    */
    

    ///////////Использование набора сканируемых символов
    /* тут ОШИБКА, ЖЕНЯ
    int i;
    char str[80], str2[80];

    scanf_s("%d%[abcdefg]%s", &i, str, str2);
    printf("%d %s %s", i, str, str2);
    */

    /* ОШИБКА ЖЕНЯ
    int x, y;
    scanf_s("%d% c%d", &x, &y);
    printf("%d% c%d", x, y);
    */




    printf("\n\n\n/////////// Препроцессор\n");

    printf("\n\n\n/////////// Директива #define\n");

/*
#define ABS(a)  (a) < 0 ? -(a) : (a)
*/
    printf("Модули чисел -1 и 1 равны соответственно %d и %d\n", ABS(-1), ABS(1));



/*    
#define MAX 100
*/
/*
#if MAX>99
    printf("Компилирует для массива, размер которого больше 99.\n");
#else
    printf("Компилирует для небольшого массива.\n");
#endif 
*/


/*
#define US 0 
#define ENGLAND 1
#define FRANCE 2

#define ACTIVE_COUNTRY US
*/

/*
#if ACTIVE_COUNTRY == US
    char currency[] = "dollar";
#elif ACTIVE_COUNTRY == ENGLAND
    char currency[] = "pound";
#else
    char currency[] = "franc";
#endif
*/


/*
#ifdef TED
    printf("Привет, Тед\n");
#else
    printf("Привет, кто-нибудь\n");
#endif

#ifndef RALPH
    printf("А RALPH не определен, т.ч. Ральфу не повезло.\n");
#endif



#ifdef TED
    printf("TED определен!\n");
#endif

#if !defined DEBUG
    printf("DEBUG не определен!\n");
#endif


    printf("Строка: %d\n", __LINE__); //строка 102
*/



/*
#define mkstr(s)  # s
*/
    printf(mkstr(Мне нравится C));  //ЖЕНЯ



/*
#define concat(a, b)  a ## b
*/
    /*
    int xy = 1020;
    printf("\n %d \n", concat(x, y));
    */





    printf("\n\n\n");




    //Алгоритмы
    // 
    //Пузырьковая сортировка
    printf("\nBubble sort on C\n");
    //Возврат в тот же массив через указатель
    int arrBefore[10] = {3,1,7,5,4,9,8,0,2,6};

    printf("Before \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arrBefore[i]);
    }

    bubbleSort(arrBefore, 10);


    //Возврат в новый массив
    //int arrAfter[10];

    /*
    arrAfter[10] = bubbleSort(arrBefore, 10);

    printf("After \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arrAfter[i]);
    }
    */


    printf("\n\n\n");
    return 0;
}    












//Тесты по шпоргалке

//Глобальные переменные
void SetAge1(void)
{
    g_age1 += 20; //глобальная переменная
    printf("Глоб. пер. g_age1 изменена в функции SetAge1(текущий файл): %d \n", g_age1); // напечатает 55
}
//Локальные переменные
int localTest(int a)
{
    int wut = a;    //тут wut будет постоянно разрушаться каждый раз при вызове функции 
    printf("%d \n", wut);
    return 0;
}


//Static
//Локальный static
int staticTest(int a)
{
    static int wut; //объявили локальную статическую переменную
    wut += a;       //определили локальную статическую переменную
    printf("%d \n", wut); //получается что при каждом входе и выходе из функции wut не будет терять значение, а будет 
                          //его сохранять и изменять при каждом вызове.

    return 0;   //тут wut возвращать не обязательно
}







//____________________________________________________________________--
//Глобальные переменные
void func1(void)
{
    int temp;
    temp = count;
    func2();
    printf("count глобальная %d \n", count); // напечатает 100
}

void func2(void)
{
    int count;  //происходит обращение к локальной переменной count, а не к глобальной
    count = 1;
    printf("count локальная %d \n", count); // напечатает 1

}


//Аргументы функции - параметры по значения
int Sqr(int x)  //описание функции
{
    x = x * x;
    return(x);
}

//Аргументы функции - параметры по ссылке
void Swap(int* x, int* y)
{
    int temp;

    temp = *x;  //сохранить значение по адресу x
    *x = *y;    //поместить y в x
    *y = temp;  //поместить x в y
}


//Печатать строку на верхнем регистре - с изменением в самой строке
void print_upper(char* array)
{
    register int t;

    for (t = 0; array[t]; ++t) {
        array[t] = toupper(array[t]); //изменилась сама строка потому что тут присвоили верхний регистр в массив
        putchar(array[t]);
    }
}

//Печатать строку на верхнем регистре - просто выводом без изменения в самой строке
void print_upper2(char* array)
{
    register int t;

    for (t = 0; array[t]; ++t)
        putchar(toupper(array[t]));
}


//Упрощенная версия стандартной библиотечной функции gets()
char* xgets(char* s)  //это функция у которой возвращающее значение является указателем
{
    char ch, *p;
    int t;

    p = s;  //xgets() возвращает указатель s

    for (t = 0; t < 80; ++t) {
        ch = getchar();

        switch (ch) {
        case '\n':
            s[t] = '\0'; //завершает строку
            return p;
        case '\b':
            if (t > 0) t--;
            break;
        default:
            s[t] = ch;
        }
    }
    s[79] = '\0';
    return p;
}


///////////Возвращаемые указатели
char* match(char c, char* s)
{
    while (c != *s && *s) s++;
    return(s);
}


///////////Функция типа void
void print_vertical(char* str)
{
    while (*str)
        printf("%c\n", *str++);
}








