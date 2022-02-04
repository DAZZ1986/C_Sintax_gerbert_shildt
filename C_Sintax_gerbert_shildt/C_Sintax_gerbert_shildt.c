#include <stdio.h>        // ���������� ������������ ���� stdio.h
#include <locale.h>





int main(void)
{
    char* locale = setlocale(LC_ALL, "");
    printf("///////// C_Sintax_gerbert_shildt\n");









    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/02/0204.htm
    printf("\n\n\n/////////// ����������\n\n");
    // ������������� - ��� ����������
    int i, j, k; //���������� ����������
    i = 30;      //������������� ����������

    printf("\n\n\n/////////// ��� ����������� ����������\n");
    /* 
    ���������� ���������� ����� ���� ����������� � ���� ������: 
    - ������ ������� - ���������
    - � ����������� ���������� ������� - ����������
    - � ��� ���� �������. ��� ����� ���������� ������������� ���������, ���������� ���������� ������� � 
    ���������� ����������. 
    */

    printf("\n\n\n/////////// ��������� ����������\n");
    /* 
    ����������, ����������� ������ �������, ���������� ���������� �����������. � ��������� ������ �� � ���
    ���������� ������������� �����������[2]. � ���� ����� ������������ ����� ���������������� ������ 
    ��������� ����������. ��������� ���������� ����� ������������ ������ ������ �����, � ������� ��� 
    ���������. ����� �������, ��������� ���������� �������� �� ��������� ������ �����. (���� ��������� � 
    ��� �������� � ����������, ������������ � ���� ����������� ����� ���������� �� � �������� ������.)

    ��������� ���������� ���������� ������ �� ����� ���������� ������������ �����, � ������� ��� 
    ���������, ��������� ��� ��� ����� � ����, � ����������� � ��� ������ �� ����. ����� ����, ����������,
    ����������� � ����� �����, �� ����� �������� ��������� � ���������� � ��� �� ������, ����������� � 
    ������ �����.

    ���� ����� ������ ���������, � ������� ��������� ��������� ����������, �������� �������. ����������,
    ��������, ��������� ��� �������:
    void func1(void)
    {
        int x = 10;   //���������� �� ��������
    }

    void func2(void)
    {
        int x = -199;   //���������� �� ��������
    }
    ����� ���������� � ��������� ������: ���� ��� � func1() � ������ � � func2(). ��� ���� ���������� � 
    � ����� ������� ����� �� ������� � ����� �� ������ �� ���������� � ��� �� ������ � ������ �������. 
    ��� ���������� ������, ��� ��������� ���������� ������ ������ ������ �����, � ������� ��� ���������,
    �� ��������� ����� ����� ��� ��������.

    � ����� � ���� �������� ����� auto (������������ ������ ������), ������� ����� ������������ � 
    ���������� ��������� ����������. ������ ��� ��� �� ��������� ��������������, ��� ��� ����������, �� 
    ���������� �����������, �������� �������������, �� �������� ����� auto ����� ������� �� ������������,
    � ������� � �������� � ������ ����� �����������.

    �� ����������� �������� � � ���� ����������� �������� ��� ��������� ���������� ������� ���� ����� 
    ����������� � ����� ������ �������, ����� ����� ������������� �������� ������. ������ ����� ��������
    ��������� ���������� � ������ ����� ��������� (���� ������� � ��� ������� ������ ����� ���������). 
    ��������:
    void f(void)
    {
          int t;

          scanf("%d%*c", &t);

          if(t==1) {
            char s[80];  // ��� ���������� ��������� ������ ��� ����� � ���� ���� 
            printf("������� ���:");
            gets(s);
            //��������� ��������� ... 
        }

        //����� ���������� s �������� 
    }

    � ���� ������� ��������� ���������� s ��������� ��� ����� � ���� if � ����������� ��� ������ �� ����.
    �������������, ���������� s ������ ������ ������ ����� if � �� ����� ���� ������������ �� � ����� 
    ������ ������, ���� ���� ��� ��������� ������ �������, ���������� ���� ����.

    ���������� ���������� ������ ����� ��������� �������� �������� ������������� �������� ��������.
    ���������� �� ���������� ��� �����, � ������� ��� ���������, �������������, "�����������" ������� 
    ��������� �� ������ �������� �������� �� ��������.

    ���� ����� ����������, ����������� �� ���������� � ������� ������ ���������,  �� ���������� 
    ����������� ����� ������ ���������� �������� �����. ���������� ��������� ������:

    int main(void)
    {
      int x = 10;    // ������� x

      if(x == 10) {
        int x;      // ��� x ������ ������� x

        x = 99;
        printf("���������� x: %d\n", x);
    }

    printf("������� x: %d\n", x);
    return 0;
    }

    ��������� ���������� ��������� ��������� :
    ���������� � : 99
    ������� � : 10





    � ��������� �89 ��� ��������� ���������� ������ ���� ��������� � ������ �����, �� ������ �����������
    ���������. ��������: (������� ������� ������ ���������� � �89)

    void f(void)
    {
      int i;  //�������� ����������
      i = 10; //���������������� ����������

      int j;  //��� ������, �� ��� �� �������� ����������, ����� ���� ���, ��� ���� ����������������, 
              //� ��� �� �����, ���� �� ��������������� ���������� i. ������ ������� ����� �� ��������
              //� ������� ����� ����������������.
      j = 20; //���������������� ����������
    }
    � � �99 (� � C++) ��� ������� ����� ��������, ��� ��� ��� ������� ����� ���������� �������������� 
    ����� �� ����������. � �� ����� ������������������ �� ����� ����� ���� ������ ����������, �������,
    ����� �� ���������� � ������� �� �������� ���� ��������� �� �� �������������.


    Static
    ��� ��� ��������� ���������� ��������� � ������������ ��� ������ ����� � ������ �� �����, �� 
    �������� �������� ������ ���, ����� ��������� ������� �� �����. ��� ���������� ��������� ��� ������
    �������. ��������� ���������� ��������� ��� ����� � ������� � ����������� ��� ������ �� ���. 
    ��� ������, ��� ��������� ���������� �� ��������� ���� �������� � ������ ����� �������� (������ 
    ����� ���� �������� ����������� ��������� �������� ��������� ����������, ��� ����� ����� �������� 
    �� � ������������� static).

    �� ��������� ��������� ���������� �������� � �����. ���� � ����������� ������������ ������� ������. 
    ��� ������ � ����� ������ ��������� ���������� �� ��������� ���� �������� � ������ ����� �������� 
    �������.

    ��������� ���������� ����� ���������������� �����-���� ������� �������� ���������. ��� �������� 
    ����� ��������� ���������� ������ ��� ��� ����� � ��� ���� ���������, � ������� ��� ���������. 
    ��������, ��������� ��������� ���������� ����� 10 ������ ���:

    #include <stdio.h>

    void f(void);

    int main(void)
    {
      int i;
      for(i=0; i<10; i++)  f();
      return 0;
    }

    void f(void)
    {
      int j = 10;
      printf("%d ", j);
      j++;  // ���� �������� �� ������ �� ���������
    }
    */





    printf("\n\n\n/////////// ���������� ��������� �������\n");
    /*
    ���� ������� ����� ���������, ������ ������ ���� ��������� ����������, ������� ������ �� ��������. 
    ��� ���������� ���������� ����������� ����������� �������. ������ ������� ��� ���������� ��� �������
    ��������� ����������. ��� �������� � ��������� ��������� ���������, ��� ����������� ����� ����� 
    ������� ������ ������� ������.

    // ���������� 1, ���� � ������ s ���������� ������ c, � ��������� ������ ���������� 0
    int is_in(char* s, char c)
    {
        while (*s)
            if (*s == c) return 1;
            else s++;

        return 0;
    }

    ������� is_in() ����� ��� ���������: s � �, ��� ���������� 1, ���� ������, ���������� � ���������� �,
    ������ � ������ s, � ��������� ������ ��� ���������� 0.

    ������ ������� ���������� ��������� ����� �� ���������� �� ������� ��������� ����������, ������������
    �� ������� ������� � ���, ��� ��� ����� � ������� ��� �������� �������� ����������. �����, ��������,
    ����������� ��������� �����-���� �������� ��� ������������ ��� � ���������. ���������� �������, 
    ���, ��� � ��������� ����������, ���������� ��������� ���� �������� ������������� ����������� �, 
    �������������, ����������� ��� ������ �� �������.
    */





    printf("\n\n\n/////////// ���������� ����������\n");
    /*
    � ������� �� ���������, ���������� ���������� ������ � ����� �������������� � ����� ����� ���������. 
    ��� ��������� ���� �������� �� ���������� ���� ������ ���������. ����� ������� ���������� ����������,
    �� ���������� �������� �� ��������� �������. ���������� ���������� ����� ���� ������������ � ����� 
    ���������, ���������� �� ����, � ����� ����� ��� ��������� ������������.

    � ��������� ������� ���������� count ��������� ��� ����� �� �� �� ���� �������. �� ���������� 
    ����������� ����� main(), ������, ��� ����� ���������� � ����� ����� ����� ������ �������������� 
    ���� ����������, �� ������ �� ������ �������! ��������� ���������� ���������� ������������� � �������
    ����� ���������!

    #include <stdio.h>
    int count;  //���������� ���������� count

        void func1(void);
        void func2(void);

        int main(void)
        {
            count = 100;
            func1();
            return 0;
        }

        void func1(void)
        {
            int temp;
            temp = count;
            func2();
            printf("count ����� %d", count); // ���������� 100
        }

        void func2(void)
        {
            int count;
            for (count = 1; count < 10; count++)
                putchar('.');
        }

        ����������� ���������� �� ��� ���������. �������� �������� �� ��, ��� func1(), � func2() ����� 
        ������������ ���������� ���������� count. ��, � func2() ���������� ���������� count ������������ 
        �� ���������, ��� ��� � ��� ��������� ��������� ���������� � ��� �� ������. ����� ������ func2()
        ���������� ��������� � ���������� count, �� ���������� ��������� � ��������� ����������, � �� �  
        ����������. ����� �������, ����������� ��������� �������: ���� ��������� � ���������� ����������
        ����� ���� � �� �� ���, �� ��� ��������� � ��� ������ �����, � ������� ��������� ��������� 
        ����������, ���������� ������ �� ��������� ����������, � �� ���������� ���������� ��� ����� �� 
        ������.

        ���������� ���������� �������� � ��������� ������������� ������� ������, ��������� ������������ 
        ���������� ��� �����. ���������� ���������� ������������ � ��� �������, ����� ������ ������� 
        ��������� ���������� ���� � �� �� ������. ������ ������������� �������� ��������� ������������� 
        ���������� ����������, ������ ��� ��� �������� ������ � ������� ����� ������� ���������� 
        ���������, � �� ������ �����, ����� ��� ����������. ����� ����, � ��� ��� ����� �����, 
        ������������� ���������� ���������� ������ ������� ����� �������������, ������ ��� � ���� ������
        ������� ���������� �����, ������������ ��� ��. � ���� �� ������� ���������� ���������� ����������
        ����� �������� � ������� � ��������� ��-�� ������������� �������� ��������. ��� ���������� 
        ������� ��������� ��������� ��������� ���������� ��������� ��������� �������� ���������� ���-��
        � ������ ����� ���������, � ����� ���������� ���������� �����, ������������� ��� ����� ������.
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/02/0205.htm
    printf("\n\n\n/////////// ������ ���� �������� ���������\n");
    /*
    �������� � ���������� ������ ���� �������� ���������[1] ���������������:

    1. ������� �������� - ���� (���, ����������� ��� ���� ������ � �������, ����� ������������ � 
    ������������� �����, ���������� ��� ����������; ����� ����� ���������� ����������� (global)).
    ������� ���������
    ���������� � ������ ����� (������� ����������) � ��������� � ����� �����. ����� ������� ��������� 
    ����� ������ ��������������, ����������� ��� �������. ��� �������������� ������ � ����� ����� �����. 
    ���������� � ���� �������� ��������� �������� �����������.

    2. ������� �������� - ����.
    ������� ���������
    ���������� ������������� �������� ������� "{" ����� � ��������� � ��� ��������� ������� "}". ��� 
    ������� ��������� ����� ����� ��������� �������. ����������, ������� ����� ������� ���������, 
    �������� ���������� � ����� �����.

    3. ������� �������� - �������� �������.
    ������� ���������
    ��������������, ����������� � ��������� �������, ������ ������ ���������.


    4. ������� �������� - ������� (����� ����������� � �������, ����� ���� ������������ ������ � ���� 
    �������).
    ������� ���������
    ���������� ������������� �������� ������� "{" ������� � ��������� � �� ��������� ������� "}". 
    ����� ������� ��������� ����� ������ �����. ����� ������������ ���������� goto � ������ ��������� 
    ������ ��� �� �������.

    [1]������� ��������� ���������� ����� ���������� ��� �������� ��������(����.)
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/02/0206.htm
    printf("\n\n\n/////////// ������������ ���� (����������� � ���������������� ����������(const, volatile, restrict))\n");
    /*
    � ����� � ������������ ������������� ����[1], ����������� �� ����������� � ���������������� 
    ����������. �������� �89 ���������� ��� �������������: const � volatile. (C99 ��������� ������, 
    restrict, ��������� � ����� II.) ������������ ���� ������ �������������� ����� ����, ������� �� 
    ������������� (��������). 

    [1]���������� ����� ����������������, �����������, ���������������.
    */

    printf("\n\n\n/////////// ������������ const\n");
    /*
    �Ψ - ��������� �������� ������ ��� ������� �����������, ��� � ����������� ������������ const. 
    
    ����������, � ������� � ���������� (����������) �������� ������������ const, �� ����� �������� ���� 
    ��������. �� ����� ������ ����������������, �� ���� ��������� �� �������� � ������ ���������� 
    ���������. ���������� ����� ��������� ���������� ����� ���� � ���������� ������������ ����������, 
    ��� ���������� ��� (ROM, read-only memory). ��������, � ����������
    const int a=10;
    ��������� ���������� � ������ �, ������ �� ������������� ��������� �������� 10, ������� � ���������� 
    � ��������� �������� ����� ������.

    ������������ const ����� ������������ ��� ����, ����� ������������� ��������� �������� �������, �� 
    ������� ��������� �������� �������. ��� ���� ��� �������� � ������� ��������� ��� ������� ����� 
    �������� ������, �� ������� �� ���������. ������ ���� � ���������� ���������-��������� �������� 
    ������������ const, ������� �� ������ �������� ���� ������. � ��������� ������� ������� sp_to_dash()
    �������� ����� ������ ������� ������� � ������, ������������ �� ��� ��������. �� ���� ������ 
    "�������� ������" ����� ���������� ��� "��������-������". ���������� ������������� const � ����������
    ��������� ������� �����������, ��� ������ ������� ������, �� ������� ��������� �������� �������, ��
    ����� �������.

    #include <stdio.h>

    void sp_to_dash(const char *str);   //��� �������� �������

    int main(void)
    {
      sp_to_dash("�������� ������");
      return 0;
    }

    void sp_to_dash(const char *str)
    {
      while(*str) {
        if(*str== ' ') printf("%c", '-');
        else printf("%c", *str);
        str++;
      }
    }

    ���� �������� sp_to_dash() ����� �������, ��� ������ ������� ������ ����������, �� ��� �� ����� 
    ���������� � ��������� ����� ���������� ������. ��������, �� ����� ���������� ��������� ������, 
    ���� �������� ���:

    // ������������ ������:
    void sp_to_dash(const char* str)
    {
        while (*str) {
            if (*str == ' ') *str = '-'; // ��� �� ��������� - �� �� �� ����� � ������ ��� ���� 
                                         //�����������/�������������� �� ��� �� ���������.
            printf("%c", *str);
            str++;
        }
    }

    ������������ const ������������ � ����������� ���������� ������ ������� ����������� ����������.
    ��������, �������� ������� strlen() �������� ���:
    size_t strlen(const char* str);

    ���������� ������������� const � ���������� str �����������, ��� ������� �� ������� ������, �� 
    ������� ��������� str. ���� ������� ����������� ���������� �� ������������� ��� ��������� ���������, 
    �� ����������� ������ � ���������� ��������� �� �������� ����������� ������������ const.

    ����������� ���� ����� ��������� ������������ const ��� ����, ����� ������������� ����������� �������.
    �� ������� �������, ��� ����������, ���� ���� � ��� �������� ������������ const, ����� ���� ��������
    � ���������� ������ - ������ �������� �� ��������� � ��������� �����������. ��������, �� ����� ����
    ��������� �������� ����� ���� �����������. ������ ���������� ������������� const � ���������� 
    ���������� �����������, ��� �� ��������� ����� ��������� ������ � ���� �������� �� ��������� � 
    ��������� �������.
    */


    printf("\n\n\n/////////// ������������ volatile\n");
    /*
    �Ψ - volatile 
    1. ������� �����������, ��� ������ �������� ����� ���������� � ����� ������ ��� ����������, ��� � 
    ���������, ����� ������ � ������� ���������� �� ����� ����� �� �����������, ��������� ��������������,
    ������ ��� ����������� ����� �������� �� � ����� ������. ������ volatile ��������� ������������
    ��������� ������ � ��� ���� � ��� ������ ���������� �� ���������.
    2. ���� �� ��������� ����������
    �/� ���� �� �� �������� � ���������� �������, ��� � ���� ������ volatile ������� �� �����������, ���
    ����� �������� ��������� � ������ ���������� � ����� �� ������ ������� �� �����������, ������ ���
    ������ ������������ ���������� �� � ������ ���������� � �������� �� ���������� ��, � � ��� �� ������ 
    ��������� ���������� ��������.
    

    �����
    ������������ volatile ��������� ����������� �� ��, ��� �������� ���������� ����� ���������� ����������
    �� ���������, �.�. ���������� ����������� ��� ����-����, �� ����������� ���������� ���������. 
    ��������, ����� ���������� ���������� ����� �������� � ������������ ������������ �������, �������� 
    �� ��������, � ����� ��� ���������� ����� ��������� ��������� �����. � ���� ������ �������� 
    ���������� ����� ���������� ��� ������� ������-���� ��������� ���������. 
    
    ������ ����� ������������ ����� ������, ��� ����������� ������������ � ������������� ������������ 
    ��������� ���������, ����������� ��� ���� ������������ ����������, ���� ��� �� ����������� � ����� 
    ����� ��������� ������������. � ���� ������ ��� ��������� ������ �� ���������� ����� �������������� 
    �� ���������� ��������. ��������� ����������� �������� ������� ���������� � ����������, ��� ����� 
    �������� � ������, ���� � ��������� ������������ ����������, ����������� ��� ���������. ������������ 
    volatile ������������� ����� ��������� ���������.

    ������������� const � volatile ����� ����������� � ���������. ��������, ���� 0x30 � ����� �����, 
    �������� � ������� ����� ���������� ������ �����, �� ��������� ���������� ������������ ������ 
    ����������� ������������� �������� ��������:

    const volatile char *port = (const volatile char *) 0x30;//������ ��� �� ���������� ����� �����, 
                                                             //�������� � �� ���, ���� ��� volatile �����
                                                             //������ �������� ���������, ����� � 
                                                             //����������. ������� ��?
    */






    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/02/0207.htm
    printf("\n\n\n/////////// ������������� ������ ������\n");
    /*
    �������� � ������������ ������ ������������� ������ ������:
    extern - ������� ����������, ������ �� ���� ���������. ���������� extern �������� �����������, ��� 
             ���������� ���������� � ������ �����. � ��� ��� ���������� ����� ��������� � ����� �����.
             extern ��������� �������� ����������, �� ��������� ��.
    static - ������� ��������� ����������, ������ ������ ������ �����.
    register - 
    auto - ������.


    ��� ������������� �������� �����������, ��� �� ������ ���������� ��������������� ���������� � ������. 
    ����� ����� ���������� ���������� ��� ���� ������:
    ���������:  ������������_������_������   ���   ���_���������;
    ������������ ������ ������ � ���������� ������ ������ ������ ������.

    ���������� - �� ��������� ��� ������� ���������� int i, ����������� ������� ����������, ������ ������
    �� ������ ������.
    � ����� �, ��� �������������� ������, � ���������� ����� ����������� ���� �� ���� ����������: 
    ����������, ������� ��� �� ���������� �� �����������.
    1. ������� ���������� - ����� �������� ������ �� ������ ������. ����������� � ������ ������� � 
    ���������� ����������, �� ����������� ����������� ��� extern!!!! ����� ���������� ��� ����� �������� �� 
    ���� ������, ������������ ���������.
    2. ���������� ���������� - ����������� � ���������, ����������� �� �������������� static � ������ 
    ������ .� �����(�� ������� .h). ������ � ������ ����� ������� ����������, ��� ���� �� ��������.
    ����� ���������� ��� ����� �������� ������ ������ �����, � ������� ��� ���������. 
    3. ���������� �� ����������� - � ��������� ����������, ������� ��� �������� ������ ������ ����� ������.
    */


    printf("\n\n\n/////////// ������������ extern\n");
    /*
    ������������ extern ��������� �� ��, ��� � ������� ����������� ������� ����������, ������ ������� ���
    ����� �������� �� ���� ���������. 
    ����� ��� ����������� ����������� ������ ������� ���������� � �����������: 
     -���������� (����������) - ��������� ��� � ��� �������. 
     -�����������(��������, �������������) - �������� ��� ������� ������� ������, ��� �� ����� ����������. 
    ���� � ��� �� ������ ����� ���� �������� ������������ � ������ ������ � ������ �� �������������� 
    extern, �� ��������� �� ����� ���� ������ ���� ���!!!

    � ����������� ������� ���������� ���������� �������� � �� �� ����� � �� ������������. ������, ���� 
    ����� ������ ���������� ����� ������������ extern, �� ���������� ���������� ����� � �� ���� �� 
    ������������. ����� �������, ���� ����� ��������� �� ����������, ������������ � ������ ����� 
    ��������� (� ������ ����� ��� � ��� ��), ���������� �������� �� ��� ������� (extern).

    �������� ������ ������������� ������������� extern. �������� ��������, ��� ���������� ����������
    first � last ��������� ����� main().

    #include <stdio.h>

    int main(void)
    {
      extern int first, last; // ������������ ���������� ����������
      printf("%d %d", first, last);
      return 0;
    }

    // �������� ���������� ���������� first � last
    int first = 10, last = 20;  

    ��������� ���������� 10, 20. ���������� extern �������� �����������, ��� ���������� first � last 
    ���������� � ������ �����, ������� ��������� ������������� ��� ������, �������� ���� �� ��, ��� 
    first � last ������������ �� ������ ��������(�����������).

    �������� ��������, � ���� ������� ���������� ���������� �� �������������� extern ���������� ������
    ������, ��� ��� �� ���� ��������� �� main(). ���� �� �� ���������� ����������� ����� main(), �� �
    ���������� �� �������������� extern �� ���� �� �������������.
    _____________________________________________________________
    ��� ���������� ����������� ��������� �������. ���� ���������� ������� ����������, �� �����������
    ������ �����, �� ���� �� ���������� �� ������� ������. ���� �� ������� �� � ���, �� ���� �����
    ���������� ���������� ����������. � ���������� �������, ���� �� �� ���� ���������� extern, ����������
    �� ����� �� first � last ����� ���������� ����������, ������ ��� ��� ��������� ����� main(), � ��� 
    �� �����, ���������� ���������� ����������� � ������ �����! ����� ������������ extern ��������
    �����������, ��� ��� ���������� ����� ��������� � ����� �����.

    ��� ������� ����, ������������ extern ��������� �������� ����������, �� ��������� ��. �� ���� �
    ���������� �� �������������� extern ���������� ����������, �� ��� ���������� ���������� �����
    � ������������. ��� ���� ����������� ����������� ������ ���������, ��� ������ ����� ����� �����
    ����������, �� ���� ���� �����������(��������).

    ������������ extern ������ ������� ���� � ����������, ��������� �� ������ ������. � ����� � ���������
    ����� ���� �������� � ���������� ������, ������� ������������� ���������, � ����� ����������� � ����
    �����. � ���� ������ ���������� ���-�� �������� ���� ������ � ���������� ���������� ���������. �����
    ������ ������ ������� ��� � ����������(�������) ��� ���������� ���������� � ����� ����� � �������� ��
    �� �������������� extern � ��������� ������, ��� �������� �� ���. 2.1.

    �� ���� - ������ ������� int playerAge, �� ���������� �� ��������� ����� ������� ����������, � �����
    � ������ ����� ��� ������������ ��� ������ � �� ������� extern int playerAge, ��� ����� ������ 
    ����������� �� ����� �������� ����� ������� ������, � ��� ��� ��� ���������� ��� ���������� � ���
    ���������� ��������� � ��� �� ������ ������, ����� ������ �� ����������, ���������� �� ����������,
    �� ���� ���������� � ��� �� ����� ����������.
    ����������: � ����� 1 �� ������� � ���������, � ����� 2 �������� �������.
    ������� ���� �� �������� ���������� ������������ ����! � ���� 
    Extern � ������ ������ �� ����� ��� ���� ����� �� �� ������� ����� ���������� � ����� �� ������ � 
    ������ �����,� ���������� � ���������� ������� �� ������� ��� ������� �����!!!!!!!!!!!!!!!!!!!!!!!!
    � ������ ����. ���������� extern ������ ���� ���������� ������ 1 ���!!!!!!!!!!!!!!!!!!!

    ���. 2.1.������������� ���������� ���������� � ��������� ������������� �������

    ���� 1                    ���� 2
    int playerAge, y;         extern int playerAge, y;
    char ch;                  extern char ch;

    int main(void)            void func22(void)
    {
        {
            // ... //                 playerAge = y / 10;
        }
    }

    void func1(void)          void func23(void)
    {
        {
            playerAge = 123;           y = 10;
        }
    }

    �� ������ ����� ������������ extern �������� �����������, ��� ��� ���������� ������� � ������
    ������. ����� ������� ���������� ������ ����� � ���� ����������, ����������� � ������ �����, � �����
    �������� ������������� ������ ����, ������ �� ���� � ������. ��� ���������� ���� ���� ������� ���
    ������ �� ���������� ���������� ����� ���������.  

    �� �������� ������������ ������ �������� ���������� extern � ������������ �����, ������� ������
    ������������ � ������� ����� ��������� ������ ���������. ��� ����� ������ ����, ������� � ���� ��
    �������� � �������� ���������� ������, ��� ���������� ���� ���������� ������� � ������ �����.
    */


    printf("\n\n\n/////////// ������������ static\n");
    /*
    ����������, ����������� �� �������������� static, �������� ��������� ������ ����� ������� ��� �����.
    � ������� �� ���������� ���������� ��� �������� �� ��������� ����� ������� ��� �����, �� ��� 
    ��������� ���� �������� ����� ��������. ��� ����������� ������ �� ��������� � ����� �������� � 
    ������������ ��������, ������� ����� �������������� ������� ��������������. 
    ������������ static ������������ �� ��������� � ���������� ���������� �� �������.
    
    
    
    ��������� ����������� ����������

    ��� ��������� ����������, ��������� �� �������������� static, ���������� �������� � ���������� 
    ����������� ������� ������, ����� ��� ��, ��� � ��� ���������� ����������. �������� ������� 
    ����������� ��������� �� ���������� ���������� ����������� � ���, ��� ����������� ��������� 
    ���������� ����� ������ ������ �����, � ������� ��� ���������. ������ �������, ����������� ��������� 
    ���������� � ��� ��������� ����������, ����������� ���� �������� ����� �������� �������.

    ����������� ��������� ���������� ����� ����� ��� �������� �������, ���������� ��������, ��� ��� 
    ������ ��������� ������� ���������� ��������� �������� ����� ��������. ���� �� �� ���� ����������� 
    ����������, ������ ��� �������� �� ������������ ����������, ��������� �� ����� ����������������� 
    ��������� ������� ��������� ���������. ���������� ������ �������, � ������� �������� ������� 
    ���������� ����������� ��������� ����������. ��� � ��������� ������������������ �����, ������ �� 
    ������� ������� ������ �� �����������. ��� �������� ����� ����� �������� ����� ������������ ����������
    ����������. ������ ����� ��� ������ ������������� ������� �������� ��������� ��� ���������� �, ��� 
    �������� ��������, ��������� ������� �� ���, ����� �� ���������� �� ������������� � ������������ 
    ������ ���������� ����������. ����������� ������ ������� � �������� ��� ���������� �� �������������� 
    static:

    int series(void)
    {
        static int series_num;
        series_num = series_num + 23;
        return series_num;
    }

    � ���� ������� ���������� series_num ���������� ������������ ����� �������� �������, � �� ����� ��� 
    ������� ��������� ���������� ��������� ������ ��� ������ ������, � ����� ������������. ������� � 
    ������ ������� ������ ����� series() ���������� ����� �����, ��������� �� �����������, ������ �������
    �������� ��� ���������� ����������.

    ����������� ��������� ���������� ����� ����������������. ��� �������� ������������� �� ������ ���� ���
    � � ������ ������ ���� ���������, �� �� ��� ������ ����� � ���� ���������, ��� � ������� ��������� 
    ����������. � ��������� ������ ������� series() ����������� ��������� ���������� ���������������� 
    ������ 100:

    int series(void)
    {
        static int series_num = 100;
        series_num = series_num + 23;
        return series_num;
    }
    ������ ��� ������� ������ ����� ������������ ������������������, ������������ � ����� 123. ������ �� 
    ������ ������� ���������� ���� ������������ ��������� ����������� ������ ������ ����� �������. ��� 
    ����� ���������� series_num ����� ������� ���������� � ������������� ����������� ������� ���������� 
    ��������. ���� �� ���������� �� ���������� ���������� series_num � �������� ����������, �� ���������� 
    �� �������� �� �������������� static.
    
    
    
    ���������� ����������� ����������

    ������������ static � ���������� ���������� ���������� ���������� ���������� ������� ���������� 
    ����������, ������� ������ � ��� �����, � ������� ��� ���������. ����������� ���������� ����������, 
    ����� �������, ������������ ����������� ����������, ��� ������� ����� � ������� "������������ extern".
    ��� ������, ��� ���� ��� ���������� � ����������, ��� �� ����� ��������� � ������ ������ �� ������ ��
    � �� ������ �������� �������� �� ��������. ���� ��������� ���� ������������� �������� ��������. � � 
    ��� ������������ ������ �������, ����� ��� ���������� ������ ����������� ��������� ���������� �� 
    ��������, ����� ������� ��������� ��������� ����, ������� �������� ������ �������, � ������� 
    ������������ ��� ����������� ���������� ����������. ����� ���� ���� ���������� ��������������� 
    ��������; ����� ����� ���� ���������, ��� �������� �������� �� �����.

    � ��������� ������� �������������� ���������� ����������� ���������� ����������. ����� ��������� 
    ������������������ ����� ��������� ���, ��� ��������� ����� �������� ������� ������ �������, 
    series_start():
    //��� ������ ���� � ����� ����� �������� �� ����� ����������.

    static int series_num;
    void series_start(int seed);
    int series(void);

    int series(void)
    {
        series_num = series_num + 23;
        return series_num;
    }

    // ������������� ���������� series_num
    void series_start(int seed)
    {
        series_num = seed;
    }

    ����� ������� series_start() � ��������� ����� ������ � �������� ��������� �������������� ��������� 
    series(). ����� ����� ����� ������������ ������������������ ����� ����� ������������� ������ series().

    �����: ����� ��������� ����������� ���������� ������ ������ ������ �����, � ������� ��� ���������; 
    ����� ���������� ����������� ���������� ������ ������ ������ �����, � ������� ��� ���������.

    ���� ��������� ������� series() � series_num() � ����������, �� ��� ������ ����� ��������� �� 
    ���������� series_num, ��� ��������� ���������� �� ����� ���������� ���� ��������� ���������. ��� 
    ���� � ���������(�������, � ������ ������) ����� �������� � ������������ ������ ���������� ��� ������
    series_num. ����� �������, ������������ static ��������� ������� ����������, ������� ������ ��� 
    �������, � ������� ��� �����, ��� ��������� ������������� �������� �������.

    ����� �������, ��� ���������� ������� � ������� �������� ��� "��������" ���������� ����� ��������� 
    ������������ static.
    */


    printf("\n\n\n/////////// ������������ register (����������)\n");
    /*
    ������������� ������������ ������ ������ register ���������� ������ � ���������� ���� int, char � ���
    ����������. ������ �������� � �������� ������������� ������������� register, ������ �� ����� 
    ����������� � ���������� ����� �����.

    � ������ ������� ������������ � ������������ register ������� �����������, ��� ���������� ������ 
    ��������� � �������� ����������, � �� � ����������� ������, ��� ��� ��������� ����������. ��� 
    �������� � ����, ��� �������� � ���������� register �������������� ������� �������, ��� � �������� 
    �����������, ������ ����� ���������� ��� ��������� � ���������� � �� ����� ������� ����� �� ������� 
    �� �������� �� ����������� ������ (� �� ������ � ������).

    � ��������� ����� ����������� ������������� register ����������� ���������. ��������� �89 � �99 
    �������� ����������� "������ � ������� ��� ������, ��� ������ ��������". ����������� ��� ���� 
    ���������� � ����� ���������� ��-�������� ����������� � ��������� ����������. �������, ������� 
    ������� (��������, �������) �� ����� ����������� � �������� ����������, ������ ���������� �������� 
    �������� "������������" � �������������� �������� � ����. � ����������� �� ���������� ���������� 
    ����������� � ������������ ������� ���������� register �������������� ��-�������. ������ ������������
    register �������� ������������, � ���������� �������������� ��� �������, ������ �� �������� ��� 
    ������ �����.

    ������������ register ����� ��������� ������ � ��������� ���������� � ���������� ���������� �������. 
    � ���������� ���������� ���������� ���������� ������������� register �� �����������. ���� �������� 
    ������ ������������� ����������, � ���������� ������� �������� ������������ register; ��� ����������
    ������������ � ������� ���������� ������ ����� m � �������. (������� � ����������� ����� � 
    ������������ ��������������� �.)

    int int_pwr(register int m,  register int e)
    {
      register int temp;
      temp = 1;
      for(; e; e--) temp = temp * m;
      return temp;
    }

    � ���� ������� � ����������� � ���������� �, m � temp �������� ������������ register ������, ��� ��� 
    ������������ ������ �����. ���������� register �������� �������� ��� ����������� �������� ������ 
    �����. ��� �������, ���������� register ������������ ���, ��� �� ��� ������ ����� ������, � ������, 
    ����� ������� ����������� ���������� � ����� � ��� �� ����������. ��� ����������� ������, ��� � 
    ���������� ����� ��������� ������������ register � ����� ����������, �� �������� ����������� 
    �������������� ����� ���� ��������� ������ �� �� ���� ���������� � ������ �������.

    ������������ ���������� ���������� register, ���������������� �� ��������������, ������� �� ����� 
    ���������������� � ���������� ���������� �����������. ���� ����� ���������� �������� ������� �����, 
    �� ���������� ������������� ����������� ����������� ���������� � �������������. ���� ��������������
    ������������� ��������� � ������� ��������� �����������.

    ������ � �������� ���������� ����� ��������� ��� ������� ��� ���������� ���� char ��� int. ������ �
    ��������� ������ ���������������� ������ ����������� ����� ����� ����������, ������� ����� ������ 
    ����������� ���������� ������������ � ������ ������������ ����������� �����������.

    � ����� � � ������� ��������� & (��������������� � ���� ����� ����) ������ �������� ����� �����������
    ����������, ������ ��� ��� ����� ��������� � �������� ����������, ������� ������ �� ����� ������.

    ���� � ��������� ����� ���������� ������������� register � ������������ ���� ����� �� ��� ������������
    �����, ����������� �������� ������ �� ��� ���������� ��-�������� ����� ���� ������� ������ ��� 
    ���������� ������ � ����������� ����. �� ������� ������� ��������� ��������� �������� �� ���������� 
    ������������ ���������� ������ �����.
    */


    


    printf("\n\n\n/////////// ������������� ����������\n");
    /*
    ��� ���������� ���������� ��� ����� ���� ����������������. ��� ����� ����� ����� �� ���������� ��������� ���� 
    ��������� � ���������, �.�. ����� ����� ������������� ����� ��������� ���:
    ��� ���_���������� = ���������;

    �������� ��������� �������� ������������� ����������:
    char ch = 'a';
    int first = 0;
    double balance = 123.23;

    ����������, ����������� ����������??? � ����������� ��������� ���������� ���������������� ������ ���� ��� � 
    ������ ������ ���������. 
    �������������������� ����������, ����������� ����������??? � ����������� ��������� ���������� � ������ ������
    ��������� ������������� ����������.

    ��������� ���������� (�������� ����������� ���������) ���������������� ������ ��� ��� ����� � ����, � ������� ��� 
    ���������. 
    �������������������� ��������� ���������� �� ������� ���������� ����� ������������ ��������. 
   */


    /*
    ���� ����������:
        ���������� - ����������� ��� ������{}, ��������� � ������ ���������, �� ���� ������.
        ��������� - ����������� � �����{}(�������, if ����������� ���), ��������� � ������ �����.
        ���������� ����������� - ����������� ��� ������{}, ��������� � ������ �����.
        ��������� ����������� - ����������� � �����{}, ��������� � ������ �����.
    */















    printf("\n\n\n/////////// 000\n");
    /*

    */
    printf("\n\n\n/////////// 000\n");
    /*

    */










    printf("\n\n\n/////////// 000\n");
    /*
    
    */
    return 0;
}





// ��������� ����������
void func1(void)
{
    int x = 10;
}

void func2(void)
{
    int x = -199;
}