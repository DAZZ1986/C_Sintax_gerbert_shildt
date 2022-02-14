#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


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
#define MAX 10

#define US 0 
#define ENGLAND 1
#define FRANCE 2
#define ACTIVE_COUNTRY US

#define TED 10



#line 100000                  //установить счетчик строк

#define mkstr(s)  # s
#define concat(a, b)  a ## b





int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");

    printf("///////// Глава 05. Указатели\n");

    printf("\n\n\n/////////// Трудности при работе с указателями\n");
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
    char str[80];
    gets(str);
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

        //поиск слова в словаре и вывод его значения
        do {
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
    /*
    int count;
    printf("this%n is a test\n", &count);
    printf("%d", count);
    */
    /*
    printf("%x %#x\n", 10, 10); //если вы поставите # непосредственно перед x или X, то шестнадцатеричное число будет выведено с префиксом 0x
    printf("%*.*f", 10, 4, 1234.34); //минимальная ширина поля будет равна 10 символам, точность — 4, а отображаться будет число 123.3. 
    */




    printf("\n\n\n/////////// scanf()\n");
    /*
    int i, j;
    scanf_s("%o%x", &i, &j);
    printf("%o %x", i, j);
    */

    /*
    char name[50];
    int age = 0;
    printf("Введите name: ");
    scanf_s("%s", name);
    printf("Введите age: ");
    scanf_s("%d", &age);
    printf("Вы ввели - name: %s, age:  \n", name);
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
#if MAX>99
    printf("Компилирует для массива, размер которого больше 99.\n");
#else
    printf("Компилирует для небольшого массива.\n");
#endif 





    /*
#if ACTIVE_COUNTRY == US
    char currency[] = "dollar";
#elif ACTIVE_COUNTRY == ENGLAND
    char currency[] = "pound";
#else
    char currency[] = "franc";
#endif




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
    int xy = 1020;
    printf("\n %d \n", concat(x, y));







    printf("\n\n\n");
    return 0;
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










