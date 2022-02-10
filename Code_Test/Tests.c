#include <locale.h>
#include <stdio.h>


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
    if (argc > 1) print_vertical(argv[1]);





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










