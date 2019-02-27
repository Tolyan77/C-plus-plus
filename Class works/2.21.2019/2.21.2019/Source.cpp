#include<iostream>
#include<ctime>
using namespace std;
void Arr(int arr[], int SIZE);
void Breeding(int arr[], int SIZE);
void Ordering(int arr[], int SIZE);
void TaskOne(int *pArrOne, int *pArrTwo, int const SIZE);
void TaskTwo(int *pArrTwo, int *pArrOne, int const SIZE);


int main()
{
	srand(unsigned(time(0)));
	/*const int SIZE = 5;
	int arr[SIZE] = { 0,8,16,27,92 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\tArr[" << i << "] = " << arr[i] << endl;
	}
	cout << "\n\tArr adress = " << arr << endl;
	cout << "===============================>" << endl;
	int *pArr = arr;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\tArr [" << i << "] = " << pArr[i] << endl;
	}
	cout << "\n\t*pArr adress = " << pArr << endl;
	cout << "===============================>" << endl;
	cout << "\n\tArr [1] adress = " << (pArr + 1) << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\tArr adress [" << i << "] = " << &arr[i] << endl;
	}
	cout << "<====================Class work==========1=======>" << endl;	*/
	//Дано цілочисельний одновимірний масив.Заповнити його, вивести на екран у прямому та 
	//зворотньому порядку та порахувати суму елементів з використанням вказівників.
	/*const int SIZE = 5;
	int arr[SIZE], summa = 0;
	cout << "\nArr = ";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 + 0;
		cout << "\t" << arr[i];
	}
	cout << "\nArr = ";
	for (int i = 4; i >= 0; i--)
	{
		cout << "\t" << arr[i];
	}
	int *pArr = arr;
	for (int i = 0; i < SIZE; i++)
	{
		summa += *(pArr + i);
	}
	cout << "\n\t\tSumma = " << summa << endl;*/
	/*cout << "<====================Class work==========2=======>" << endl;
	// Дано одновимірний масив.Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями.
	//Вивести перетворений масив на екран
	const int SIZE = 7;
	int arr[SIZE], min, max, mi, ma, temps = 0;
	cout << "\nArr = ";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 + 0;
		cout << "\t" << arr[i];
	}
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			mi = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			ma = i;
		}
	}
	cout << endl;
	cout << "\n\t\tMax = " << max << "\tMin = " << min << endl;
	temps = arr[ma];
	arr[ma] = arr[mi];
	arr[mi] = temps;
	cout << "\nArr = ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;*/
	/*cout << "<====================Class work==========3=======>" << endl;
	//Дано два масиви, впорядкованих по зростанню : .Сформуйте третій масив, який складається з елементів масивів А і В, впорядкованих по зростанню.
	const int SIZE = 5;
	int arrOne[SIZE], arrTwo[SIZE], arrThree[SIZE * 2];
	cout << "\nArrOne = ";
	Arr(arrOne, SIZE);
	cout << "\nArrTwo = ";
	Arr(arrTwo, SIZE);
	int *pArrOne = arrOne, *pArrTwo = arrTwo;
    Ordering(pArrOne, SIZE);
	Ordering(pArrTwo, SIZE);
	cout << "\n--------------------->" << endl;
	cout << "\nArrOne = ";
	Breeding(pArrOne, SIZE);
	cout << "\nArrTwo = ";
	Breeding(pArrTwo, SIZE);
	for (int i = 0; i < SIZE * 2; i++)
	{
		if (i < SIZE)
		{
			arrThree[i] = arrOne[i];
		}
		else if (i >= SIZE)
		{
			arrThree[i] = arrTwo[i - 5];
		}
	}
	cout << "\n--------------------->" << endl;
	int *pArrThree = arrThree;
	cout << "\nArrThree = ";
	Breeding(pArrThree, SIZE * 2);
	Ordering(pArrThree, SIZE * 2);
	cout << "\nArrThree = ";
	Breeding(pArrThree, SIZE * 2);
	cout << endl;*/
/*Дано два масива: А[n] и B[m]. Утворити третій масив мінімального можливого розміру, у якому зібрати: 
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).*/
int const SIZE = 5;
int arrA[SIZE], arrB[SIZE], arrC[SIZE * 2];\
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
void TaskOne(int *pArrOne, int *pArrTwo, int const SIZE)
{
	cout << "\n\tElements of an array A that do not occur in B :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(pArrOne + j) != *(pArrTwo + i))
			{ 
				cout << "\t" << *(pArrOne + j);
			}
		}
	}
}
void TaskTwo(int *pArrTwo, int *pArrOne, int const SIZE)
{
	cout << "\n\tElements of an array B that do not occur in A :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(pArrTwo + i) != *(pArrOne + i))
			{
				cout << "\t" << *(pArrTwo + i);
			}
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
void Breeding(int *pArr,const int SIZE)
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
		arr[i] = rand() % 20 + 0;
		cout << "\t" << arr[i];
	}
}