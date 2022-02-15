#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


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


///////////���������
struct Soccer
{
    char name[80];
    char lastName[80];
    int age;
    int skill;
    char teamName[80];
};




//������ � ������ �����
char* dic[][40] = {     //������ ���� � �� ��������
  "�����", "��� �������������� �/��� ��������������� ����.",
  "����������", "���������������� �������� ������������.",
  "�������", "�������� �����.",
  "�������", "�������� ������.",
  "", ""                //����, ����������� ������
};




//������������
#define ABS(a)  (a) < 0 ? -(a) : (a)
#define MAX 100

#define US 0 
#define ENGLAND 1
#define FRANCE 2
#define ACTIVE_COUNTRY US

#define TED 10



//#line 100000                  //���������� ������� �����

#define mkstr(s)  # s
#define concat(a, b)  a ## b





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
    //if (argc > 1) print_vertical(argv[1]);







    printf("\n\n\n/////////// ���������\n");
    /*
    struct Soccer   //���������� ��������� � ����� ����� (��� ������ ��� �����������)
    {
        char name[80];
        char lastName[80];
        int age;
        int skill;
        char teamName[80];
    };
   */
    /*
    struct Soccer player; //����������� ��������� (������ ������� ���������� ��� ������� �������� ��������� Soccer)

    strcpy_s(player.name, sizeof(player.name), "Di maria"); //������������� �����/���� name, � ��������� player.
    printf("Name: %s \n", player.name);

    player.age = 33; //������������� �����/���� age, � ��������� player.
    printf("Age: %d \n", player.age);
    */


    printf("\n\n\n/////////// ������� ��������\n");
    /*��� �������:
    ��� ��������� � ������� �������� �����������, ���� ����� ������� ���, �� ����� ������� ��������� � ������ � ����������
    ����� ��������� �� �������. � ��������� � ����������� ������ ��������� ������.*/
    /*
    struct Soccer playerList[100];  //��� ������� ������ ��������, ������ 100 �������� � �������� ����������    
    playerList[2].age = 20;         //���������������� ���� age � ��������� ��� ������� 3
    printf("Player 3 age: %d\n", playerList[2].age);
    */






    printf("\n\n\n/////////// ������ � ������ ��������\n");
    /*
    char ch;
    printf("������� �����-������ ����� (��� ���������� ������ ������� �����).\n");
    do {
        ch = getchar();

        if (islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);

        putchar(ch);
    } while (ch != '.');
    */


    /*
    char ch2;
    printf("������� �����-������ ����� 2 (��� ���������� ������ ������� �����).\n");
        do {
            ch2 = getch();

            if (islower(ch2)) ch2 = toupper(ch2);
            else ch2 = tolower(ch2);

            putchar(ch2);
        } while (ch2 != '.');
        */


    
    printf("\n\n\n/////////// ������ � ������ �����\n");
    
    /*
    //int getchar(void);    int putchar(int c);
    printf("������� �����-������ ����� (��� ���������� ������ ������� �����).\n");
    char sss;
    do {

        sss = getchar();
        putchar(sss);

    } while (sss != '.');
    */

    /*
    //int getch(void);    int getche(void);
    char ch;
    printf("������� �����-������ ����� (��� ���������� ������ ������� �����).\n");
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
    printf("����� � �������� ����� %d", strlen(str));
    */


    /*
    char* dic[][40] = {     //������ ���� � �� ��������
      "�����", "��� �������������� �/��� ��������������� ����.",
      "����������", "���������������� �������� ������������.",
      "�������", "�������� �����.",
      "�������", "�������� ������.",
      "", ""                //����, ����������� ������
    };
    */
    /*
    char word[80], ch;
    char** p;
    do {
        puts("\n������� �����: ");
        scanf_s("%s", word);
        p = (char**)dic;

        do { //����� ����� � ������� � ����� ��� ��������
            if (!strcmp(*p, word)) {
                puts("��������:");
                puts(*(p + 1));
                break;
            }
            if (!strcmp(*p, word)) break;
            p = p + 2;  // ����������� �� ������
        } while (*p);
        if (!*p) puts("����� � ������� �����������.");
        printf("������ ��� �������? (y/n): ");
        scanf_s(" %c%*c", &ch);
    } while (toupper(ch) != 'N');
    */




    printf("\n\n\n/////////// printf() \n");
    /*
    printf("��� �������� ���� %c %s", 'C', "� � ���� �� ����� ������! \n \n");

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
    printf("\n����� ������ ���������� sample: %p \n", &sample);
    */
    /*  ��� ������
    int count;
    printf("this%n is a test\n", &count);
    printf("%d", count);
    */
    /*
    printf("%10.5f\n", 123.1234567); //��� ������ ����� �������� ��� ������ ���� ������ ����� �� ����� 10 ��������, � ������
                                     //����� ���������� ������� ���� ����� �������� ����� �����.
    printf("%10.15s\n", "��� ������� ��������."); //�������� (������� 10, �������� 15 �������� �� �����).
    printf("%10.8d\n", 1000); //��� ������ ����� ��������� ������� ������ �������� ����� �������� ������, � ������ ����� �������
                              //������� ���� ��������, � ���� ����� ������ ���� ����, �� ����� ������ ��� �������� ������.
    */
    /*
    printf("%x %#x\n", 10, 10); //���� �� ��������� # ��������������� ����� x ��� X, �� ����������������� ����� ����� ��������
                                //� ��������� 0x.
    printf("%*.*f", 10, 4, 1234.34); //����������� ������ ���� ����� ����� 10 ��������, �������� � 4, � ����������� ���-��
                                     //����� ����� �����.(������ �������� �����).   
    */



    printf("\n\n\n/////////// scanf()\n");
    /*
    int i, j;
    scanf_s("%o%x", &i, &j);
    printf("%o %x", i, j);
    */
    /* ��� ������ ���� - �� ������ ������ ���������� ������� "�"
    char a, b, c;
    scanf_s("%c%c%c", &a, &b, &c);
    printf("%c%c%c", a, b, c);
    */
    /* ��� ������ ����
    char name[50];
    int age = 0;
    printf("������� name: ");
    scanf_s("%s", name);
    printf("������� age: ");
    scanf_s("%d", &age);
    printf("�� ����� - name: %s, age:  \n", name);
    */
    /* ��� ������ ����
    char str[80];
    printf("������� ������: ");
    scanf_s("%s", str);
    printf("��� ���� ������: %s", str);
    */
    

    ///////////������������� ������ ����������� ��������
    /* ��� ������, ����
    int i;
    char str[80], str2[80];

    scanf_s("%d%[abcdefg]%s", &i, str, str2);
    printf("%d %s %s", i, str, str2);
    */

    /* ������ ����
    int x, y;
    scanf_s("%d% c%d", &x, &y);
    printf("%d% c%d", x, y);
    */




    printf("\n\n\n/////////// ������������\n");

    printf("\n\n\n/////////// ��������� #define\n");

/*
#define ABS(a)  (a) < 0 ? -(a) : (a)
*/
    printf("������ ����� -1 � 1 ����� �������������� %d � %d\n", ABS(-1), ABS(1));



/*    
#define MAX 100
*/
/*
#if MAX>99
    printf("����������� ��� �������, ������ �������� ������ 99.\n");
#else
    printf("����������� ��� ���������� �������.\n");
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
    printf("������, ���\n");
#else
    printf("������, ���-������\n");
#endif

#ifndef RALPH
    printf("� RALPH �� ���������, �.�. ������ �� �������.\n");
#endif



#ifdef TED
    printf("TED ���������!\n");
#endif

#if !defined DEBUG
    printf("DEBUG �� ���������!\n");
#endif


    printf("������: %d\n", __LINE__); //������ 102
*/



/*
#define mkstr(s)  # s
*/
    printf(mkstr(��� �������� C));  //����



/*
#define concat(a, b)  a ## b
*/
    /*
    int xy = 1020;
    printf("\n %d \n", concat(x, y));
    */






    printf("\n\n\n");
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










