#include <locale.h>
#include <stdio.h>



int main(void)
{
    char* locale = setlocale(LC_ALL, "");


    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/06/06.htm
    printf("\n\n\n/////////// �������\n");
    /*
    ������� � ��� ������������ �������� ����� � � �� �����, � ������� ����������� ��� ������ ���������. � ���� ����� ���������
    �������� �������, � ��� ����� �� ���������, ������������ ��������, ���������, � ����� ��������.

    ����������:
        ����� ��� �������
        ��� ����� ������� �������� �������
        ��������� �������
        ��������� ������� main(): argv � argc
        �������� return
        ��� ���������� ������� main()?
        ��������
        �������� �������
        ���������� ������� ���������� ���������� �����
        ������� "�������� int"
        ����������� � ����������� ���������� ���������� �������
        �������� ����� inline
    */





    // http://paulfertser.info/polnyy_spravochnik_po_c_gerbert_shildt/06/0601.htm
    printf("\n\n\n/////////// ����� ��� �������\n");
    /*
    � ����� ���� ������� �������� ��������� �������:

    �����-��� ���-�������(������ ����������)
    {
      ���� �������
    }
    �����-��� ���������� ��� �������, ������������� ��������[1]. ������� ����� ���������� ����� ��� ������, �� ����������� 
    �������� ������ ���������� � ��� ������, �������� �������� ���������� ���� �� ����� ��������. ������ ����� ������� �������
    �� ����� ���������� � �� ���� ������. ��� ������ ������� ��������� ��������� �������� ����������. ������� ����� ���� � ���
    ����������, ����� �� ������ ����� ������. ����� ������ ������ ����� ������� � ����� ����, �������� ��� ����� ������ ������ 
    �������� ����� void.

    � ����������� (�����������) ���������� ����� �������� (�������������) ��������� ���������� ������ � ���� �� ����, ���������
    ��� ����� ������ ����� ������ ����, �������� �������� �������� ���� �� ����� ��������. � ��� ��������� �������, ��������, 
    ������ ����������� ��������, ������ ��� ������� �� ��� ���� ��������� � ���, � ���. �� ���� � ����� ���� ������ ����������
    ���������� ������ ��������� ��������� �������:
    f(��� ���_����������1, ��� ���_����������2,..., ��� ���_����������N)

    ���, ��������, ��� ���������� ���������� �������, ������ �� ������� ����������, � ������ � ���:
    f(int i, int k, int j) //����������
    f(int i, k, float j)   //������������, � ���������� k ������ ���� ����������� ������������ ����
    ----------

    [1]������, ������������ ��������, ���������� ����� �����������.��������������, ������������ ��� ����� ���������� �����
    ����� ����������.
    */













    printf("\n\n\n/////////// 000\n");
    /*

    */
    printf("\n\n\n/////////// 000\n");
    /*

    */

    return 0;
}
