#include <locale.h>
#include <stdio.h>



int main(void)
{
    char* locale = setlocale(LC_ALL, "");

    printf("///////// ����� 05. ���������\n");

    printf("\n\n\n/////////// ��������� ��� ������ � �����������\n");

    char* p1; //��������� ���� char
    char s[80]; //������ �� 79 ��������, ��������� 0.

    printf("Enter a string : ");
    do {
        p1 = s;   //��������� p1 � ������ ������ s

        gets(s);  //������ ������ � ����������

        //������ ����������� ����������� ������� �������
        while (*p1) printf(" %d", *p1++);

    } while (strcmp(s, "���������"));
    



    /*
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
    char str[50];

    printf("Enter a string : ");
    gets(str);

    printf("You entered: %s", str);
    */

    return 0;
}