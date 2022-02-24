#include <locale.h>
#include <stdio.h>



int main(void)
{
    char* locale = setlocale(LC_ALL, "");



    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/10.htm
    printf("\n\n\n/////////// ������������ � �����������\n");
    /*
    � �������� ��� ��������� �� ����� � ����� ��������� ��������� ���������� �����������. ��� ���������� ����������� 
    ������������� � ��������� ����������� ����� ����������������. ����� ���, � ���� ����� ��� �������������� � ������������.
    
    ����������:
        ������������
        ��������� #define
        ��������� #error
        ��������� #include
        ��������� �������� ����������
        ��������� #undef
        ������������� defined
        ��������� #line
        ��������� #pragma
        ��������� ������������� # � ##
        ����� ���������������� �����������
        �����������
    */





    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1001.htm
    printf("\n\n\n/////////// ������������\n");
    /*
    ������� ��������� ��������� �������������:
    #define - ����������� ������ �����
    #error - ���������� ���������� ���������� ���������� � ��� ��������� ������������ � �������� ��� �������.
    #include - ������� ����������� ��� ���������� ������������ �����

    ��������� �������� ����������:
        #if - ������ �������� �����������
        #elif - ����� �������� �����������
        #else - ����� �������� �����������
        #endif - ����� �������� �����������

        #ifdef - ������������� ���� ��� ������� ���������� � ��������� #define
        #ifndef - ������������� ���� ��� ������� ��� �� ���������� � ��������� #define

    #undef - ������� ����� �������� ����������� ����� �������

    #defined - ������ ������ ������, ���������� �� ��� ������� ����� #ifdef.
    #line - ��������� ��������� ������ ����, ��� �� ����������� ��� ������� ���.
    #pragma - ��������� ���������� ����������� ��������� ����������. ��������, ���������� ����� ������������ �����������
    ���������� ���������.


    ��� ����� ��������, ��� ��� ���������� �� ����� #. ����� ����, ������ ��������� ������������� ������ �������� ���������
    ������. ��������, ������
    #include <stdio.h>   #include <stdlib.h>
    ��������������� ��� ������������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1002.htm
    printf("\n\n\n/////////// ��������� #define\n");
    /*
    ��������� #define ���������� ������������� � ������������������ ��������, ������� ����� ������������� ������ 
    �������������� ������ ���, ����� �� ���������� � �������� �����. ������������� ���������� ������ �������, � ��� �������
    ������ � ������������[1]. � ����� ���� ��������� �������� ����� �������:

    #define ���_������� ������������������_��������

    �������� ��������, ��� � ���� ��������� ��� ����� � �������. ����� ��������������� � ������������������� �������� 
    ������������������_�������� ����� ���� ����� ���������� ��������, �� ��������� ����� ������������������ �������� �����
    ���� ������ ����������� �����.

    �����������, ��������, ��� ������ �������� 1 ����� ������������ ����� LEFT (�����), � ������ �������� 0 � ����� RIGHT
    (������). ����� ����� ������� ��������� ���������� � ������� ��������� #define:
    #define LEFT 1          // !!!!!!!!!!!!!!!!!!!!!!!!!
    #define RIGHT 0         // !!!!!!!!!!!!!!!!!!!!!!!!!

    � ���������� ���������� ����� ����������� 1 ��� 0 ������ ���, ����� � ����� ����� ��������� ���� ����������� �������������
    �������������� LEFT ��� RIGHT. ��������, ��������� ��� ������� �� ����� 0 1 2:
    printf("%d %d %d", RIGHT, LEFT, LEFT+1);

    ����� ����������� ��� ������� ����� ������������ � ������������ ������ ���� ��������. ���, ��������, ���, ������������
    �������� ONE (����), TWO (���) � three (���):   // !!!!!!!!!!!!!!!!!!!!!!!!!
    #define ONE    1
    #define TWO    ONE+ONE
    #define THREE  ONE+TWO

    ���������������� � ��� ������ ������ ������-���� �������������� ��������� � ��� ������������������� ��������. ������� 
    ���� ��������� ���������� ����������� ��������� �� ������, �� ����� �������� �������� ���������:
    #define E_MS "����������� ������ ��� �����\n"           // !!!!!!!!!!!!!!!!!!!!!!!!!
    // ... //
    printf(E_MS);

    ������ ������ ���, ����� ���������� ������������� E_MS, ���������� ����� ��� �������� ������� "����������� ������ ���
    �����\n". ��� ����������� ��������� printf() �� ����� ���� ����� ��������� ����� �������:
    printf("����������� ������ ��� �����\n");

    // !!!!!!!!!!!!!!!!!!!!!!!!!
    ���� ������������� ��������� ������ ������, ����������� � �������, �� ������ �� �����. ��������, ��� ���������� ����:
    #define XYZ ��� ��������
    printf("XYZ");
    ������ ��������� "��� ��������" ����� ���������� ������������������ �������� XYZ.

    // !!!!!!!!!!!!!!!!!!!!!!!!!
    ���� ������������������_�������� �� ���������� � ����� ������, �� ��� ������������������ ����� ���������� �� ���������
    ������, �������� � ����� ����������, ��� �������� ����, �������� ����� �����:
    #define LONG_STRING "��� ����� ������� \
    ������, ������������ � �������� �������"

    // !!!!!!!!!!!!!!!!!!!!!!!!!
    ������������, ������� ��������� �� ����� �, � ������ ������������ ��������������� ����� ���������� ����� ��������
    ��������. ���� ������������ �������� ������� ����� �������, �� ���, ��� ����� ������ �� ���������, � ������� ������� 
    ������, ��� ����� ����������� �����������. ����� ����, ��� ��������� #define ������ ����� ����� �������� � ����� ������
    ����� ��� � ��������� ������������ �����, � �� ������������ �� ���� ���������.

    ����� �������� ����� ������������ ��� ����������� ���� ��� ���������� "���������� �����" (������������� � ���������).
    ��������, ������� ���������, � ������� ������������ ������ � ��������� ��������, ���������� ������ � ����� �������.
    ������ ���� ����� ������ ������� "�������� � ���" � ���� ���������, ���� ������ ����� ���������� � ������� ���������
    #define, � ����� ������������ ��� ��� ������� �����, ��� ��������� ������ �������. ����� �������, ���� ��������� 
    �������� ���� ������, �� ����������� �������� ������ ��������������� �������� #define, a ����� ����������������� 
    ���������. ����������, ��������, �������� ���������

    #define MAX_SIZE 100            // !!!!!!!!!!!!!!!!!!!!!!!!!
    // ... //
    float balance[MAX_SIZE];
    // ... //
    for (i = 0; i < MAX_SIZE; i++) printf("%f", balance[i]);
    // ... //
    for (i = 0; i < MAX_SIZE; i++) x = +balance[i];

    ������ ������� balance ������������ ������ ������� MAX_SIZE, � ������� ���� ���� ������ ����������� � ������� ��������, 
    �� ���� ����� �������� ������ ����������� MAX_SIZE. � ���������� ��� �������������� ��������� ��� ��������� � ����� 
    ����� �������, ����������� ����� ����������� �����������, ����� ������������� ��������.
    
    
    
    
    
    
    
    ///////////����������� �������� � ����������� �����������
    � ��������� #define ������� ��� ���� ������� �����������: ��� ������� ����� ������������ � ����������� �����������.
    ����� ������ ���, ����� � ��������� ����������� ��� �������, �� ������������ � ��� ����������� ���������� ���������
    ���������� ���� �����������, ������� ����������� � ���������. ������ ���� ������� ���������� ��������� � �����������
    �����������[2]. ��������,
    #include <stdio.h>

    #define ABS(a)  (a) < 0 ? -(a) : (a)            // ����          // !!!!!!!!!!!!!!!!!!!!!!!!!

    //����
    int main(void)
    {
        printf("������ ����� -1 � 1 ����� �������������� %d � %d", ABS(-1), ABS(1));

        return 0;
    }

    �� ����� ���������� ���� ��������� ������ ����������� ��������� "�" �� ����������� ������� ����� ������������� 
    �������� -1 � 1. ������, � ������� ��������� "�", ��������� � ����� ������ ������� ���������� ������. ��������, ���� 
    ������, ������� ������ "�", �������, �� ���������
    ABS(10 - 20)
    ����� ����������� ����� ������������� �
    10 - 20 < 0 ? -10 - 20 : 10 - 20
    � ����� �������� � ������������� ����������.

    ������������� ������ ��������� ������� �������� � ����������� ����������� ���� ���� ������������ ������������: 
    ������������� �������� ���������� ����, ������ ��� � ����� ������� �� ���� ������� ������� �� ����� �������. ������ 
    ���� � ������� � ����������� ����������� ����� ������� �������, �� ����� ��-�� ������������ ���� ���������� ��������
    ����������� �� ���� ���������� �������� ���������.

    � ��� ��� ���: ���� ������� � ����������� ����������� �������� �������� ���������, �� � �99(� � C++) ���� ��� ����� 
    ����������� ������ �������� �������� ��������� � � �������������� ��������� ����� inline.
    �� �������: � �99 ����� ���������� ������ � ���������� ����������� ���������� ����������; �� ���� �������������� �
    ����� II ���� �����.

    ----------
    [1]� ����� ����������������, ��������������� � �����������������.����������� ������� ����� �������� �����������������, 
    � ��������� � ������� � ������������ ��� �������������.�������, ������ ���������������� ����� ���������� �������������.
    [2]� ����� ������������������ � ����������� � ���������, ������������� �������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1003.htm
    printf("\n\n\n/////////// ��������� #error\n");
    /*
    ��������� #error ���������� ���������� ���������� ����������. ��� ��������� ������������ � �������� ��� �������. � 
    ����� ���� ��������� #error �������� ����� �������:
    #�rr�r ���������-��-������
    ���������-��-������ � ������� ������� �� �����������. ����� ����������� ��������� #error, �� ��������� ��������� �� 
    ������, ��������, ������ � ������ �����������, ������������ ������������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1004.htm
    printf("\n\n\n/////////// ��������� #include\n");
    /*
    // !!!!!!!!!!!!!!!!!!!!!!!!!
    ��������� #include ���� �������� ����������� ������ ��� ���� �������� ���� � � ���������� � ���� �����, � ������� 
    ��������� ���� ��� ���������. ��� ��������� ����� ������ ���� ��������� � ������� ������� ��� � ������� ������. 
    ��������, ��� ���������
    #include "stdio.h"
    #include <stdio.h>
    ���� ����������� �������� ������ � ������������� ��������� ��� ������������ ������� ������� �����/������.

    �����, ����� ������� ��������� � ���������� #include, ����� � ���� ������� ��������� ������ ��������� #include. ��� 
    ���������� ���������� ����������� #include. ���������� ���������� ������� ����������� � ������ ������������ ����� ���� 
    ������. ������ � ��������� �89 �������������, ��� ����������� ������ ��������� �� ����� 8 ����� �������. � � ��������� 
    �99 ������������� ��������� �� ����� 15 ������� �����������.

    ������ ������ ����� ������� �� ����, ��������� �� ��� ��� � ������� ������� ��� �� � ������� ������. ���� ��� ��������� 
    � ������� ������, �� ����� ����� ���������� ��� ��������, ������� ��������� � �����������. ����� ��� �������� ����� 
    ������������� ��������, ���������� ���������������� ��� �������� ����� ������. ���� ��� ��������� � �������, �� �����
    ����� ���������� ������ ��������. �� ������ ������������ ��� �������� ����� ����� � ������� ������� ��������. ���� �� 
    ���� �� ������, �� ����� ����������� ��� ���, ��� ����� ��� ����� ��������� � ������� ������.

    ������ ����������� ������������� ����� ����������� ������������ ������ ��������� � ������� ������. � ������������� 
    ������� ������ ������������� ��� ���� ����������� ������, ����������� � ���������� ���������. �������, �������� � 
    �������� �������, �� �������� ������� ��������� ������������ ������ ����� �������, �� ����������.

    � �-��������� ��������� #include ����� ������������ �� ������ ��� �������� ����� �����, ����������� ������� �������� 
    ����� ���������, �� � ��� �������� ���������. � ����� � ��������� ����� ����������� ����������, ���������� �����������
    ���������� � ��������� ����������� ����� �����. ��������� � ��� ����������� �������������, ������� ����� ���������������
    ����� �����, � ����� � �� ��������������� ���. ����� �������, ��������� �������� ������ �����������, ������� �����������
    ������� ��������� ����������. ������ �� �������� � ����� � ��������� ����� ������ �������� ������� ������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1005.htm
    printf("\n\n\n/////////// ��������� �������� ����������\n");
    /*
    ������� ��������� ��������, ������� ���� ����������� ��������� ������������� ����� ��������� ���� ����� ���������. 
    ���� ������� ���������� �������� ����������� � ������ ������������ �������, �������� �� ���� ������������� ������������
    ����������� � ����, ������� ���������� � ������������ ������ ����������� ������ ����� ���������.
    
    
    
    
    
    ///////////��������� #if, #else, #elif � #endif
    ��������, ������ ����������������� ����������� �������� ���������� �������� #if, #else, #elif � #endif. ��� ���� 
    ����������� � ����������� �� �������� ������������ ��������� �������� ��� ��������� �� ��� ���� ����� ����. // !!!!!!!!!!!!!!!!!!!!!!!!!

    � ����� ���� ��������� #if �������� ����� �������:
    #if ����������� ���������
        ������������������ ����������
    #endif

    ���� ����������� �� #if ����������� ��������� �������, �� ������������� ���, ������� ��������� ����� ���� ���������� 
    � #endif. � ��������� ������ ���� ������������� ��� ������������. ��������� #endif ���������� ����� ����� #if. ��������,

    //������� ������ #if
    #include <stdio.h>

    #define MAX 100

    int main(void)
    {
    #if MAX>99
            printf("����������� ��� �������, ������ �������� ������ 99.\n");        // !!!!!!!!!!!!!!!!!!!!!!!!!
    #endif

        return 0;
    }

    ��� ��������� ������� ��������� �� �����, ������ ��� ��� ������ 99. � ���� ������� �������� ����� ����� ������.
    �������� ���������, ������������ �� ���������� #if, ������ ���� ��������� �� ����� ����������. ������� � ���� ��������� 
    ����� ���������� ������ ����� ������������ �������������� � ���������, � �� �� ����������!!!!!!

    ��������� #else �������� � �������� ���, ��� else � �������� ����� ����� �: ������ ������������ �� ��� ������, ���� ��
    ��������� ������� #if. ���������� ������ ����� ��������� ��������� �������:

    //������� ������ #if/#else
    #include <stdio.h>

    #define MAX 10

    int main(void)
    {
    #if MAX>99
            printf("����������� ��� �������, ������ �������� ������ 99.\n");
    #else
            printf("����������� ��� ���������� �������.\n");
    #endif 

        return 0;
    }
    � ���� ������ ����������, ��� ��� ������ 99, ������� ����� ����, ����������� � #if, �� �������������. ������ 
    ������������� �������������� ���, ����������� � #else, � ����������������� ��������� ����� ���������� ��������� 
    ������������� ��� ���������� �������.

    // !!!!!!!!!!!!!!!!!!!!!!!!!
    �������� ��������, ��� ��������� #else ������������ ��� ����, ����� ���������� � ����� ����� #if, � ������ ����� #else.
    ��� �����������, ��������� ����� ��������� #if ����� ��������������� ������ ���� ��������� #endif.

    ��������� #elif �������� "else if" � ������������� ��� ��������� ��������� ���������� ������� if - else - if.
    ����� #elif ��������� ����������� ���������. ���� ��� ��������� �������, �� ������������� ����������� �� ��� ���� ����,
    � ������ �� ����������� ������� ������ ��������� #elif. � ��������� �� ������ ����������� ��������� ���� ���� 
    ������������������. � ����� ���� #elif �������� ����� �������:

    #if ���������
        ������������������ ����������
    #elif ��������� 1
        ������������������ ����������
    #elif ��������� 2
        ������������������ ����������
    #elif ��������� 3
        ������������������ ����������
    #elif ��������� 4
        .
            .
            .
    #elif ��������� N
        ������������������ ����������
    #endif

    ��������, � ��������� ��������� ��� ����������� ����� �������� ������� ������������ �������� ACTIVE_COUNTRY(��� 
    ����� ������):

    #define US 0 
    #define ENGLAND 1
    #define FRANCE 2

    #define ACTIVE_COUNTRY US

    #if ACTIVE_COUNTRY == US
            char currency[] = "dollar";
    #elif ACTIVE_COUNTRY == ENGLAND
            char currency[] = "pound";
    #else
            char currency[] = "franc";
    #endif

    � ������������ �� ���������� �89 � �������� #if � #elif ����� ���� �� ����� 8 ������� �����������. � � ������������ 
    �� ���������� �99 ������������� ����������� ������������ �� ����� 63 ������� �����������. ��� ����������� ������ 
    ��������� #endif, #else ��� #elif ��������� � ��������� ��������� #if ��� #elif. ��������, ���������� ���������� 
    �������� ��������� �������� ����:

    #if MAX>100
        #if SERIAL_VERSION
            int port = 198;
        #elif
            int port = 200;
        #endif
    #else
        char out_buffer[100];
    #endif






    ///////////��������� #ifdef � #ifndef
    ������ ������ �������� ���������� � ��� ������������� �������� #ifdef � #ifndef, ������� �������������� �������� 
    "if defined" (���� ����������) � "if not defined" (���� �� ����������). 
    
    � ����� ���� #ifdef �������� ����� �������:
    #ifdef ���_�������
        ������������������ ����������
    #endif
    ���� ���� ����� ���������������, ���� ��� ������� ���� ���������� ����� � ��������� #define.   // !!!!!!!!!!!!!!!!!!!!!!!


    � ����� ���� �������� #ifndef �������� ����� �������:
    #ifndef ���_�������
        ������������������ ����������
    #endif
    ���� ���� ����� ���������������, ���� ��� ������� ��� �� ���������� � ��������� #define.
    � � #ifdef, � � #ifndef ����� ������������ �������� #else ��� #elif.��������,


    #include <stdio.h>

    #define TED 10          // !!!!!!!!!!!!!!!!!!!!!!!!!

    int main(void)
    {

    #ifdef TED              // !!!!!!!!!!!!!!!!!!!!!!!!!
            printf("������, ���\n");
    #else
            printf("������, ���-������\n");
    #endif

    #ifndef RALPH           // !!!!!!!!!!!!!!!!!!!!!!!!!
            printf("� RALPH �� ���������, �.�. ������ �� �������.\n");
    #endif

        return 0;
    }
    ������� ������, ���, � ����� A RALPH �� ���������, �.�.������ �� �������.       // !!!!!!!!!!!!!!!!!!!!!!!!!

    � ������������ �� ���������� �89 ����������� �� ����� 8 ������� #ifdef � #ifndef. � �������� �99 �������������, ���
    ������ �������������� �� ����� 63 ������� �����������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1006.htm
    printf("\n\n\n/////////// ��������� #undef\n");
    /*
    ��������� #undef ������� ����� �������� ����������� ����� �������, �� ���� "����������" ��� �����������; ���� ���
    ������� ������ ���������� ����� ���������. � ����� ���� ��������� #undef �������� ����� �������:

    #undef ���_�������

    ��� ���, ��������, ����� ������������ ��� ���������:
    #define LEN 100
    #define WIDTH 100

    char array[LEN][WIDTH];

    #undef LEN
    #undef WIDTH
    //� ����� � LEN � WIDTH ��� �� ����������

    � LEN, � WIDTH ����������, ���� �� ���������� �������� #undef.
    ��������� #undef ������������ � �������� ��� ����, ����� ������������ ����� �������� � ��� �������� ����, ��� ��� �����.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1007.htm
    printf("\n\n\n/////////// ������������� defined\n");
    /*
    ����� ���������� #ifdef, ���� ��� ������ ������ ������, ���������� �� ��� �������. ����� ������������ ��������� #if �
    ��������� � ���������� ������� ���������� defined!!!!!!!!!!!
    � ����� ���� �������� defined �������� ����� �������:
    defined ���_�������

    ���� ���_������� ����������, �� ��������� ��������� ��������; � ��������� ������ � ������. // !!!!!!!!!!!!!!!!!!!!!!!
    
    // !!!!!!!!!!!!!!!!!!!!!!!
    ��������, ����� ������, ���������� �� ��� ������� MYFILE, ����� ������������ ���� �� ���� ������ �������������:
    #if defined MYFILE
    ���
    #ifdef MYFILE

    // !!!!!!!!!!!!!!!!!!!!!!!
    ����� ����� ������ ��������������� �������, �������� ! ����� ����� defined. ��������, ��������� �������� ������������� 
    ������ �����, ����� ��� ������� DEBUG �� ����������:
    #if !defined DEBUG
      printf("������������� ������!\n");
    #endif

    ������������ �������, �� ������� ������������ �������� defined, ������� � ���, ��� � ��� ������� � #elif ����� ������, 
    ���������� �� ��� �������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1008.htm
    printf("\n\n\n/////////// ��������� #line\n");
    /*
    ��������� #line �������� ���������� __LINE__ � __FILE__, ������� �������� ������������������ ���������������� � 
    �����������:
        - � ������ �� ��� ���������� ����� ������������� � ������ ������ ������ ����. 
        - � ������ ������������� � ��� ������, ���������� ��� �������������� ��������� �����. 
    
    � ����� ���� ��������� #line �������� ����� �������:
    #line ����� "���_�����"

    ��� ����� � ��� ������������� ����� �����, ������� ���������� ����� ��������� __LINE__, � �������������� ���_����� � 
    ��� ����� ���������� ������������� �����, ������������ ����� ��������� __FILE__. 
    ��������� #line � �������� ������������ ��� ������� � ����������� ����������.

    ��������, ��������� ��� ����������, ��� ������� ����� ����� ���������� � 100, � �������� printf() ������� ����� 102, 
    ������ ��� �� ���������� � ������� ������ ��������� ����� ��������� #line 100:
    #include <stdio.h>

    #line 100                  //���������� ������� �����
    int main(void)             //������ 100
    {                          //������ 101
        printf("%d\n", __LINE__); //������ 102

        return 0;
    }
    */







    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1009.htm
    printf("\n\n\n/////////// ��������� #pragma\n");
    /*  //����
    ��������� #pragma � ��� ������������ ����������� ���������, ������� ��������� ���������� ����������� ��������� ����������. 
    ��������, ���������� ����� ������������ ����������� ���������� ���������. ����� ����������� ����������� ����� ��������� �
    ��������� #pragma. ����������� ���� ��������� � ����������� � ��� ����������� ������ ���� ������� � ������������ �� 
    �����������.

    �� �������: � ��������� �99 ��������� #pragma ���� ������������ � �������� _Pragma. � ��� �������������� � ����� II ����
    �����.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1010.htm
    printf("\n\n\n/////////// ��������� ������������� # � ##\n");
    /*  //����
    ������� ��� ��������� �������������: # � ##. ��� ����������� � ��������� � ���������� #define.
    �������� #, ������� ������ �������� ���������� ����������� � ������ (stringize), ���������� ��������, ����� ������� 
    �����, � ������, ����������� � �������. ����������, ��������, ��������� ���������:
    #include <stdio.h>

    #define mkstr(s)  # s

    int main(void)
    {
      printf(mkstr(��� �������� C));

      return 0;
    }

    ������������ ���������� ������
    printf(mkstr(��� �������� C));
    �
    printf("��� �������� C");


    �������� ##, ������� �������� ���������� ���������� (pasting), ��� ������������ ������������� ��� �������. ����������, 
    ��������, ���������
    #include <stdio.h>

    #define concat(a, b)  a ## b

    int main(void)
    {
      int xy = 10;

      printf("%d", concat(x, y));

      return 0;
    }

    ������������ �����������
    printf("%d", concat(x, y));
    �
    printf("%d", xy);

    ���� ��� ��������� ��������� ��� �����������, �� ���� ������� ��� � ���: ��� �� �������� ������������ � �� ������������
    � ����������� ��������. � �����-��, ��� ��������� ������������� ��� ������ ������������� � ��������� ������ �������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1011.htm
    printf("\n\n\n/////////// ����� ���������������� �����������\n");
    /*  //����
    � ����� � ���������� ���� ����������, ���������������� ���� �����������. ��� ���:
    __LINE__
    __FILE__
    __DATE__
    __TIME__
    __STDC__

    � ����� �� ������������������ � ��� ����� � ������ ����.
    �� ������ �������� __LINE__ � __FILE__ ��������������, ����� ���������� � ��������� #line. ������ ������, ��� �������� 
    �������������� ����� ������ � ��� ����� ������������� ���������.

    � ����� ������� __DATE__ ���������� ������ � ���� �����/����/���, �� ���� ���� �������� ��������� ���� � ���������.
    � ����� ������� __TIME__ ���������� ����� ���������� ���������. ��� ����� ������������ �������, �������
    ��� ���:������:c������.

    ���� __STDC__ ���������� ��� 1, �� ����� ���������� ��������� ���������� � ������������ �� ���������� �. � ��� 
    �������� �99, �� � ���� �������� ���������� ��� ��� ����� ��������:
    __STDC_HOSTED__
    __STDC_VERSION__

    __STDC_HOSTED__ ��������� 1 ��� ��� ����, � ������� ���������� ���������� ��� ����������� ������������ �������,
    � 0 � � ��������� ������. __STDC_VERSION__ ����� ����� ��� ������� 199901 � ����� ������������� � ������ ����� 
    ������� ����� �. (� �99 ����� ���� ���������� � ������ ����� ��������, � ��� �������������� � ����� II.)
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/10/1012.htm
    printf("\n\n\n/////////// �����������\n");
    /* */
    //


    return 0;
}
