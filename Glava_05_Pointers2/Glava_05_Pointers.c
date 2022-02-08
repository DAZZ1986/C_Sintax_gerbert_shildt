#include <locale.h>
#include <stdio.h>



int main(void)
{
    char* locale = setlocale(LC_ALL, "");



    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/05/05.htm
    printf("///////// ����� 05. ���������\n");
    /*
    ���������� ��������� � ������������� ���������� �������� ���������� ��� ����������� ������� �������� �� ����� �.
    � ��� ������:
      - ��-������, ��������� �������� ���������, � ������� �������� ������� ����� �������� �������� ������������ � ���
        ����������.
      - ��-������, � ������� ���������� ����������� ������������ ������������� ������.
      - �-�������, ��������� ��������� �������� ������������� ������ ��������.
      - � �������, ��� ������������ ��������� ������������ �������� ������, ��������, �������� �������, ������� ������.

    ����� �������, ��������� �������� ������ ������ ��������� ����� �. �� � ������ �������. ��������, ���� ���������
    �������� ������������ ��������, ��������� ����� ��������� ����. ��������� ������ ������ ��� � ������, ��� �����
    ��������� ��� �� �������������. � ���� �� ������, ��������� � ������������� ���������� ����������, ����� ����� ������.

    ����������:
    ��� ����� ���������
    ������������ ����������
    �������� ��� ������ � �����������
    ������������ ���������
    ��������� � �������
    �������������� ���������
    ������������� ����������
    ��������� �� �������
    ������� ������������� �������������
    ��������� � �������������� restrict
    ��������� ��� ������ � �����������
    */





    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/05/0501.htm
    printf("\n\n\n/////////// ��� ����� ���������\n");
    /*
    ��������� � ��� ����������, ��������� ������� �������� ����� ���������� �������(������ ������ ����������) � ������
    ����������. ��������, ���� ���� ���������� �������� ����� ������ ����������, �� �������, ��� ������ ����������
    ���������(���������) �� ������. ��� �������������� � ������� ���. 5.1.

    �����     ��������
    ������  ���������� �
    ������     ������
            +----------+
    1000    |   1003   |--.
            +----------+  |
    1001    |          |  |
            +----------+  |
    1002    |          |  |
            +----------+  |
    1003    |          |<-'
            +----------+
    1004    |          |
            +----------+
    1005    |          |
            +----------+
    1006    |          |
            +----------+
                 .
                 .
                 .
               ������

    ���. 5.1.���� ���������� ��������� �� ������
    */





    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/05/0502.htm
    printf("\n\n\n/////////// ������������ ����������\n");
    /*
    ��� ��������, ����������, ���������� ����������, ����� ��������������� ������� ��������. ���������� ���������
    ������� �� ����� �������� ����, ������� * � ����� ����������. ����� ����� ���������� ��������� ���������:
    ���* ���;

    ����� ��� � ��� ������� ��� ���������, �� ����� ���� ����� ���������� ���. ��� ���������� ��� ����������-���������.
    ������� ��� ��������� ���������� ��� �������, �� ������� ��������� ����� ���������. ���������� ��������� ������ ����
    ����� ��������� �� ����� ����� � ������. ������ ����������� � ���������� �������� ����������� ������� �� ��� ����.
    ��������, ���� �������� ��������� ���� int*, ���������� ������������, ��� ����� �����, �� ������� �� ���������,
    �������� ���������� ���� int, ���� ��� ����� ���� � �� ���. �������������, �������� ���������, ���������� ���������,
    ��� ��� ��� ��������� � ����� �������, �� ������� �� ����� ���������.
    */




    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/05/0503.htm
    printf("\n\n\n/////////// �������� ��� ������ � �����������\n");
    /*
    �������� ��� ������ � ����������� ��������������� � ����� 2. �������� �� �����. � ����� � ���������� ��� ��������
    ��� ������ � �����������: * � &. �������� & � ��� ������� ��������, ������������ ����� ������ ��������. (��������,
    ��� ������� �������� ����� ���� �������). ��������, ��������

    int *m;
    m = &count;

    ����������� ���������� m ����� ���������� count. ����� �������, ��� ����� � ��� ����� ������� ����� ������� ������,
    � ������� �������� ����������. ����� � �������� ���������� � ��� ���������� ������ �������. �������� & �����
    ����������� ���� ��� ��������, ������������ ����� �������. �������������, ���������� ������ ����� �������� ���:
    "���������� m ������������� ����� ���������� count".

    �����������, ���������� count �������� � ������ ������ ��� ������� 2000, � �� �������� ����� 100. ����� ����������
    m ����� ��������� �������� 2000.

    ������ �������� ��� ������ � ����������� (�� ����, �.�. ��������, *) ��������� ��������, �������� �� ��������� � &.
    �������� * � ��� ������� ��������, ������������ �������� ����������, ������������� �� ���������� ������. ��������,
    ���� m �������� ����� ���������� count, �� ��������

    q = *m;

    ����������� ���������� q �������� ���������� count. ����� �������, q ������� �������� 100, ������ ��� �� ������ 2000
    ����������� ���������� count, ������� ����� �������� 100. �������� ��������� * ����� �������� ������� "�������� ��
    ������", ����� ���������� �������� ����� ���� �������� ���: "q �������� �������� ����������, ������������� �� ������
    m".
    */
    //�����
    int a, c;
    int* b;

    a = 2222;
    b = &a;

    c = *b;

    printf("%d \n", c);









    printf("\n\n\n/////////// 000\n");
    /*

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



    printf("\n\n\n/////////// 000\n");
    /*

    */
    return 0;
}
