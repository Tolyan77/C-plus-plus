/*1. �������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ���� ���������. 
��������� ������ ������� ��� ����������� ������ ������� 10 �� ������� 7.
������� Fill(), ��� �������� ����������� ����� ����������� ���������� � ������� [-26..54] 
������� Print(), ��� �������� �������� ������ �� ����� 
������������ �������:
- ��� ����������� ���� �������� ������
- ��� ����������� ���������� �������� ������ �� ������� ������� ��� ������� (�� ������� �� ��������� �������) 
*/
#include<iostream>
#include<ctime>
using namespace std;
int Fill(int arr[], int SIZE);
int Print(int arr[], int SIZE);
int Overloaded(int arr[], int SIZE);
int Overloaded(int arr[], int SIZE, int limit);

int main()
{
	const int NUM1 = 10, NUM2 = 7;
	int arr[NUM1], size = 0, choise = 0, limit = 0;
	cout << "\n\t\tDimension 1 - (10)\t2 - (7) \n\t\t\t\tEnter : ";
	cin >> choise;
	Fill(arr, NUM1);
	if (choise == 1)
	{
		Print(arr, NUM1);
		Overloaded(arr, NUM1);
		cout << "\n\tEnter limit : ";
		cin >> limit;
		if (limit <= NUM1)
		{
			Overloaded(arr, NUM1, limit);
		}
		else
		{
			cout << "\n\tERROR :(" << endl;
		}
	}
	else if (choise == 2)
	{
		Print(arr, NUM2);
		Overloaded(arr, NUM2);
		cout << "\n\tEnter limit : ";
		cin >> limit;
		Overloaded(arr, NUM2, limit);
		if (limit <= NUM2)
		{
			Overloaded(arr, NUM1, limit);
		}
		else
		{
			cout << "\n\tERROR :(" << endl;
		}
	}
	else
	{
		cout << "\n\tERROR :(" << endl;
	}
	system("pause");
	return 0;
}
int Fill(int arr[], int SIZE)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 80 + (-26);
	}
	return 0;
}
int Print(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
	return 0;
}
int Overloaded(int arr[], int SIZE)
{
	int summa = 0;
	for (int i = 0; i < SIZE; i++)
	{
		summa += arr[i];
	}
	cout << "\n\tSumma masuva : " << summa << endl;
	return 0;
}
int Overloaded(int arr[], int SIZE, int limit)
{
	int min = arr[0];
	for (int i = 0; i < limit; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\n\tMIN : " << min << endl;
	return 0;
}