#include<iostream>
#include<ctime>
using namespace std;
//Дано три числа. Оголосити посилання на ці числа. Отримати добуток трьох заданих чисел,
//середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через посилання). 
/*
inline int Product(int &One, int &Two, int &Three)
{
	return One + Two + Three;
}
inline int Average(int &One, int &Two, int &Three)
{
	return (One + Two + Three) / 3;
}
inline int Least(int &One, int &Two, int &Three)
{
	int min = One;
	if (One < Two&&One < Three)
	{
		min = One;
	}
	else if (Two < Three&&Two < One)
	{
		min = Two;
	}
	else
	{
		min = Three;
	}
	return min;
}
int main()
{/*
	int A = 10;
	cout << "\n\tA valve = " << A << "\tA adress = " << &A << endl;
	cout << "============================================>" << endl;
	int *pA = &A;
	cout << "\n\t*pA valve = " << *pA << "\tpA adress = " << pA << endl;
	cout << "============================================>" << endl;
	int &RA = A;
	cout << "\n\tRA valve = " << RA << "\t&RA adress = " << &RA << endl;
	cout << "============================================>" << endl;
	int num1 = 0, num2 = 0, num3 = 0;
	cout << "\n\tEnter number one = ";
	cin >> num1;
	cout << "\n\tEnter number two = ";
	cin >> num2;
	cout << "\n\tEnter number three = ";
	cin >> num3;
	int &ROne = num1, &RTwo = num2, &RThree = num3;
	int product = Product(ROne, RTwo, RThree), average = Average(ROne, RTwo, RThree), least = Least(ROne, RTwo, RThree);
	cout << "\n\tProduct = " << product << endl;
	cout << "\n\tAverage = " << average << endl;
	cout << "\n\tLeast = " << average << endl;
	system("pause");
	return 0;
}
//Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву. 
//За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву. 
int Least(int Arr[], const int SIZE)
{
	int min = Arr[0], j = 0;
	cout << "\n\tArr : ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << Arr[i];
		if (Arr[i] < min)
		{
			min = Arr[i];
			j = i;
		}
	}
	cout << endl;
	cout << "\n\tMIN : " << min << "\tmin x2 = " << min * 2 << endl;
	return j;
}
void Rand(int Arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 100 + 0;
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 7;
	int Arr[SIZE];
	Rand(Arr, SIZE);
	int i = Least(Arr, SIZE);
	int *PArr = &Arr[i];
	cout << "\n\tArr min adress = " << PArr << endl;
	system("pause");
	return 0;
}*/
//Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.
//Примітка!Функція повинна повертати ссилку на відємний елемент
void Rand(int Arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 200 + (-50);
	}
}
void Null(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
	}
}
void Vuvestu(int arr[], const int SIZE)
{
	cout << "\n\tArr = ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 7;
	int arr[SIZE];
	Rand(arr, SIZE);
	Vuvestu(arr, SIZE);
	Null(arr, SIZE);
	cout << "\n=====================================>" << endl;
	Vuvestu(arr, SIZE);
	cout << "\n=====================================>" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == 0)
		{
			cout << "\tAdress [" << i << "] = " << &arr[i] << endl;
		}
	}
	system("pause");
	return 0;
}