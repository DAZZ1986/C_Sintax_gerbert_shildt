#include <stdio.h>  // ���������� ������������ ���� stdio.h
#include <locale.h>


static int statGlob_num;	//����������� ���������� ����������. ��������� � ������ ����� ��� ��� ���������!
void series_start(int seed); //������������� ���������� statGlob_num
int series(void);



int main()
{
	char* locale = setlocale(LC_ALL, "");


	printf("����������� ���������� ���������� \n");
	series_start(100);
	int resSG = series();
	printf("�����: %d \n", resSG);




	printf("\n\n/////////////////////\n\n\n");




	printf("����������� ��������� ���������� \n");
	int resSL;
	resSL = StaticLocalTest();
	printf("�����: %d \n", resSL); //2
	resSL = StaticLocalTest();
	printf("�����: %d \n", resSL); //4
	resSL = StaticLocalTest();
	printf("�����: %d \n", resSL); //6

	//printf("�����: %d \n", statLoc_num);//�� ��� ����������� ��������� ���������� ����������� � ������������
										  //� �������, ��� ���������� ������ ������, �� �� ������� ��������� �
										  //������ ������ �����{} ��� ��� ���� ���������, � ��������� ��� � 
										  //������� StaticLocalTest().


}



//����������� ��������� ����������
int StaticLocalTest(void)
{
	static int statLoc_num; //��� ����������� ��������� ����������, ������� ������ � ������ ������ �����{} � �������
						//��� ���������. number1 ����� ��������� ���� �������� ����� �������� ������� � �����
						//�� ������� ���������� ���������� ����� �� ���(2)!     ������: 2; 4; 6. 
						//�� ���� �� ������ static, �� ����� ��� ���������� ��� ������ �� ������� ����� 
						//����������� � ��� ����� � ��� ����� ������ ����������� � ��� ��������� �������� 
						//������� �� ����� ����������� ����� �������� �������!  ������: 2; 2; 2.
	statLoc_num += 2;
	return statLoc_num;
}




//����������� ���������� ����������
void series_start(int seed)
{
	statGlob_num = seed; //������������� ���������� statGlob_num, ��� ����� ������������ �� ������������ 
						 //�� ����� �����!
}

int series(void)
{
	statGlob_num = statGlob_num + 23;  //� ����. �����. statGlob_num ���������� 23, ��� ����� ������������ ��
	return statGlob_num;			   //������������ �� ����� �����!
}

