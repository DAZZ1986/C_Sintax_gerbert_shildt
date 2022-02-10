#include <locale.h>
#include <stdio.h>


//��������� �������
int Sqr(int x);  //�������� �������
void Swap(int* x, int* y);
void print_upper(char* string);
void print_upper2(char* array);
char* xgets(char* s);

///////////������������ ���������
char* match(char c, char* s);  //��������


///////////������� ���� void
void print_vertical(char* str);  //��������





int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");

    printf("///////// ����� 05. ���������\n");

    printf("\n\n\n/////////// ��������� ��� ������ � �����������\n");
    /*
    char* p1; //��������� ���� char
    char s[80]; //������ �� 79 ��������, ��������� 0.

    printf("Enter a string : ");
    do {
        p1 = s;   //��������� p1 � ������ ������ s

        gets(s);  //������ ������ � ����������

        //������ ����������� ����������� ������� �������
        while (*p1) printf(" %d", *p1++);

    } while (strcmp(s, "���������"));
    */



    /*
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
    char str[50];

    printf("Enter a string : ");
    gets(str);

    printf("You entered: %s", str);
    */







    printf("\n\n\n/////////// ��������� �������\n");
    /*
    //��������� ������� - ��������� �� ��������
    int t = 10;
    printf("%d %d\n", Sqr(t), t);

    //��������� ������� - ��������� �� ������
    int p1 = 10;
    int p2 = 2000;
    printf("p1 � p2 ����� ������� ����������: %d %d\n", p1, p2);
    Swap(&p1, &p2); //�������� ������ ���������� p1 � p2
    printf("p1 � p2 ����� ������ ����������: %d %d\n", p1, p2);



    char s[80]; //��� ������ (������)
    
    printf("\nprint_upper\n");
    printf("������� ������ ��������: ");
    gets(s);
    printf("\ns � ������ ��������: %s\n", s);
    print_upper(s);
    printf("\ns ������ �� ������� ��������: %s\n", s);

    printf("\nprint_upper2\n");
    printf("������� ������ ��������: ");
    gets(s);
    print_upper2(s);
    printf("\ns �� ����������: %s", s);
    

    printf("\nxgets\n");
    printf("������� ������ ��������: ");
    *xgets(s);  //����, ����� ������� �������� ������� � ���������� ��� ���??
    printf("\nxgets: %s", s);
    */

    /*
    ///////////������������ ���������
    char ss[80], *p, ch;

    gets(ss);  //��� ����������� ������
    ch = getchar(); //��� ����������� ������
    p = match(ch, ss);  //��� � ������� ������ ������ �� ���������� � ������, � ���� ������ ������, �� � ��������� "p"
                        //��������� ����� ������� �������.

    if (*p)  //������ ������
        printf("%s ", p);
    else
        printf("������� ���.");
    */


    ///////////������� ���� void
    if (argc > 1) print_vertical(argv[1]);





    return 0;
}    





//��������� ������� - ��������� �� ��������
int Sqr(int x)  //�������� �������
{
    x = x * x;
    return(x);
}

//��������� ������� - ��������� �� ������
void Swap(int* x, int* y)
{
    int temp;

    temp = *x;  //��������� �������� �� ������ x
    *x = *y;    //��������� y � x
    *y = temp;  //��������� x � y
}


//�������� ������ �� ������� �������� - � ���������� � ����� ������
void print_upper(char* array)
{
    register int t;

    for (t = 0; array[t]; ++t) {
        array[t] = toupper(array[t]); //���������� ���� ������ ������ ��� ��� ��������� ������� ������� � ������
        putchar(array[t]);
    }
}

//�������� ������ �� ������� �������� - ������ ������� ��� ��������� � ����� ������
void print_upper2(char* array)
{
    register int t;

    for (t = 0; array[t]; ++t)
        putchar(toupper(array[t]));
}


//���������� ������ ����������� ������������ ������� gets()
char* xgets(char* s)  //��� ������� � ������� ������������ �������� �������� ����������
{
    char ch, *p;
    int t;

    p = s;  //xgets() ���������� ��������� s

    for (t = 0; t < 80; ++t) {
        ch = getchar();

        switch (ch) {
        case '\n':
            s[t] = '\0'; //��������� ������
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


///////////������������ ���������
char* match(char c, char* s)
{
    while (c != *s && *s) s++;
    return(s);
}


///////////������� ���� void
void print_vertical(char* str)
{
    while (*str)
        printf("%c\n", *str++);
}










