/*Дано два масива : А[n] и B[m].Утворити третій масив мінімального можливого розміру, у якому зібрати :
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).*/
#include<iostream>
#include<ctime>
using namespace std;
void Arr(int arr[], int SIZE);
void Breeding(int arr[], int SIZE);
void Ordering(int arr[], int SIZE);
void TaskOne(int *ArrOne, int *ArrTwo, int const SIZE);
void TaskTwo(int *ArrTwo, int *ArrOne, int const SIZE);
int main()
{
	srand(unsigned(time(NULL)));
int const SIZE = 5;
int arrA[SIZE], arrB[SIZE], arrC[SIZE * 2]; \
cout << "\nArrA = ";
Arr(arrA, SIZE);
cout << "\n--------------------->" << endl;
cout << "\nArrB = ";
Arr(arrB, SIZE);
for (int i = 0; i < SIZE * 2; i++)
{
	if (i < SIZE)
	{
		arrC[i] = arrA[i];
	}
	else if (i >= SIZE)
	{
		arrC[i] = arrB[i - 5];
	}
}
int *pArrC = arrC, *pArrA = arrA, *pArrB = arrB;
cout << "\n--------------------->" << endl;
cout << "\nArrA = ";
Breeding(pArrC, SIZE * 2);
cout << endl;
TaskOne(pArrA, pArrB, SIZE);
TaskTwo(pArrB, pArrA, SIZE);
system("pause");
return 0;
}
void TaskOne(int *ArrOne, int *ArrTwo, int const SIZE)
{
	cout << "\n\tElements of an array A that do not occur in B :" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			int v = 0;
			for (int j = 0; j < SIZE; j++)
			{
				if (*(ArrOne + i) != *(ArrTwo + j))
				{
					v++;
				}
			}
			if (v == SIZE)
			{
				cout << *(ArrOne + i) << endl;
			}
		}
}
void TaskTwo(int *ArrTwo, int *ArrOne, int const SIZE)
{
	cout << "\n\tElements of an array B that do not occur in A :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		int v = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (*(ArrTwo + i) != *(ArrOne + j))
			{
				v++;
			}
		}
		if (v == SIZE)
		{
			cout << *(ArrTwo + i) << endl;
		}
	}
}
/*
void Ordering(int *pArr,const int SIZE)
{
	int temps = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(pArr + i) < *(pArr + j))
			{
				temps = *(pArr + i);
				*(pArr + i) = *(pArr + j);
				*(pArr + j) = temps;
			}
		}
	}
}*/
void Breeding(int *pArr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << *(pArr + i);
	}
}
void Arr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 0;
		cout << "\t" << arr[i];
	}
}