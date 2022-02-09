#include <locale.h>
#include <stdio.h>



int main(void)
{
    char* locale = setlocale(LC_ALL, "");

    printf("///////// Глава 05. Указатели\n");

    printf("\n\n\n/////////// Трудности при работе с указателями\n");

    char* p1; //указатель типа char
    char s[80]; //строка из 79 символов, последний 0.

    printf("Enter a string : ");
    do {
        p1 = s;   //установка p1 в начало строки s

        gets(s);  //чтение строки с клавиатуры

        //печать десятичного эквивалента каждого символа
        while (*p1) printf(" %d", *p1++);

    } while (strcmp(s, "выполнено"));
    



    /*
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
    char str[50];

    printf("Enter a string : ");
    gets(str);

    printf("You entered: %s", str);
    */

    return 0;
}