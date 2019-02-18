/*1. Даний масив чисел.Написати функцію, яка сортує масив по зростанню або по спаданню, в залежності від третього параметра функції.
Якщо він рівний 0, сортування йде по спаданню, якщо 1, тоді по зростанню.*/
#include<iostream>
#include<ctime>
using namespace std;
/*int Fill(int arr[], int SIZE);
int Decrease(int arr[], int  SIZE);
int Growth(int arr[], int  SIZE);
int main()
{
	const int SIZE = 7;
	int arr[SIZE], choise = 0;
	Fill(arr, SIZE);
	cout << "\n\t\t0 - decrease\t1 - growth\n\t\t\tEnter :";
	cin >> choise;
	if (choise == 0)
	{
		Decrease(arr, SIZE);
	}
	else if (choise == 1)
	{
		Growth(arr, SIZE);
	}
	else
	{
		cout << "\n\t\tERROR :(" << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
int Fill(int arr[], int SIZE)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 0;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
int Decrease(int arr[], int  SIZE)
{
	int exchange = 0;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				exchange = arr[i];
				arr[i] = arr[j];
				arr[j] = exchange;
			}
		}
	}
return 0;
}
int Growth(int arr[], int  SIZE)
{
	int exchange = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (arr[i] < arr[j])
			{
				exchange = arr[i];
				arr[i] = arr[j];
				arr[j] = exchange;
			}
		}
	}
	return 0;
}
*/
/*2. Дано 2 паралельних одновимірних масиви : масив назв товарів(масив рядків) та масив цін товарів.Впорядкувати масиви за зростанням цін.
Вивести назви та ціни товарів за заростанням та спаданням цін.Використати алгоритм впорядкування методом бульбашки.*/
int Fill(int arr[], int SIZE)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 0;
	}
	return 0;
}
int FillTwo(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
	}
	return 0;
}
void Demonstration(int arr[], int arrA[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\t" << arrA[i] << " = " << arr[i];
	}
	cout << "\n============================>" << endl;
}
void Menu()
{
	cout << "\n\t1 - Milk\t2 - Bread\t3 - Meat\t4 - Chocolate\t5 - KOVBACA" << endl;
}
int Growth(int arr[], int arrA[], int  SIZE)
{
	int exchange = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (arr[i] < arr[j])
			{
				exchange = arr[i];
				arr[i] = arr[j];
				arr[j] = exchange;
				exchange = arrA[i];
				arrA[i] = arrA[j];
				arrA[j] = exchange;
			}
		}
	}
	return 0;
}
int Decrease(int arr[], int arrA[], int  SIZE)
{
	int exchange = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				exchange = arr[i];
				arr[i] = arr[j];
				arr[j] = exchange;
				exchange = arrA[i];
				arrA[i] = arrA[j];
				arrA[j] = exchange;
			}
		}
	}
	return 0;
}
int main()
{
	const int SIZE = 5;
	int arrCost[SIZE], arrProducts[SIZE];
	cout << "\n\t\t\t\tWELCOME TO SUPERMARKET  # Y Vas'i # " << endl;
	Menu();
	Fill(arrCost, SIZE);
	FillTwo(arrProducts, SIZE);
	Demonstration(arrCost, arrProducts, SIZE);
	Menu();
	cout << "\n\tGrowth" << endl;
	Growth(arrCost, arrProducts, SIZE);
	Demonstration(arrCost, arrProducts, SIZE);
	Menu();
	cout << "\n\tDecrease" << endl;
	Decrease(arrCost, arrProducts, SIZE);
	Demonstration(arrCost, arrProducts, SIZE);
	system("pause");
	return 0;
}

