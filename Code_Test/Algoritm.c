

int bubbleSort(int* a, int b);
int bubbleSort2(int* a, int b);






//Возврат в тот же массив через указатель
int bubbleSort(int* a, int b)
{
	
	//нужно в цикле переставлять значения по возростанию до тех пор пока это делается, тоесть true
	for (int i = 0; i < 10; i++)
	{

		if (a[i] > a[i + 1])
		{
			int temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}


	//int arrRes[10];



	printf("\n After \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", a[i]);
	}
	return a;
}

















//Возврат в новый массив
int bubbleSort2(int* a, int b)
{
	printf("\nFrom func \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", a[i]);
	}
	return a;
}