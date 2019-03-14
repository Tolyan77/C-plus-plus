/*1. 	Используя указатели и оператор разыменования, определить наибольшее из двух чисел
2.	Используя указатели и оператор разыменования, обменять местами значения 3 - x переменных.
3.	Написать примитивный калькулятор, пользуясь только указателями.*/
#include<iostream>
#include<ctime>
using namespace std;
template < class T>
void Minus(T *numOne, T *numTwo, T &result)
{
	result = *numOne - *numTwo;
}
template < class T>
void Plus(T *numOne, T *numTwo, T &result)
{
	result = *numOne + *numTwo;
}
template < class T>
void Multiplication(T *numOne, T *numTwo, T &result)
{
	result = *numOne * *numTwo;
}
template < class T>
void Division(T *numOne, T *numTwo, T &result)
{
	int g = 0;
	if (*numOne < *numTwo)
	{
		g = *numOne;
		*numOne = *numTwo;
		*numOne = g;
	}
	result = *numOne / *numTwo;
}
int main()
{/*
	srand(unsigned(time(NULL)));
	cout << "\n\t===============1============" << endl;
	int number1 = 0, number2 = 0;
	cout << "\n\tEnter number 1 :";
	cin >> number1;
	cout << "\n\tEnter number 2 :";
	cin >> number2;
	int *p1 = &number1, *p2 = &number2;
	if (*p1 > *p2)
	{
		cout << "\n\tThe first largest number - " << *p1 << endl;
	}
	else if (*p2 > *p1)
	{
		cout << "\n\tThe second largest number - " << *p2 << endl;
	}
	cout << "\n\t===============2============" << endl;
	int number1 = rand() % 100, number2 = rand() % 100, number3 = rand() % 100, exchange = 0;
	int *pOne = &number1, *pTwo = &number2, *pThree = &number3;
	cout << "\n\tpOne [" << pOne << "] = " << *pOne << "\n\tpTwo [" << pTwo << "] = " << *pTwo << "\n\tpThree [" << pThree << "] = " << *pThree << endl;
	exchange = *pOne;
	*pOne = *pTwo;
	*pTwo = *pThree;
	*pThree = exchange;
	cout << "\n\t============================" << endl;
	cout << "\n\tpOne [" << pOne << "] = " << *pOne << "\n\tpTwo [" << pTwo << "] = " << *pTwo << "\n\tpThree [" << pThree << "] = " << *pThree << endl;
	*/	cout << "\n\t===============3=============" << endl;
		int choise = 0, numOne = 0, numTwo = 0, result = 0;
		cout << "\n\t\t\tWELCOME TO KALKULATOR\n\t1 - ( + )\t2 - ( - )\t3 - ( * )\t4 - ( / )\n\t\t\tEnter :";
		cin >> choise;
		int *pChoise = &choise;
		cout << "\n\t\tEnter number one : ";
		cin >> numOne;
		int *pNumOne = &numOne;
		cout << "\n\t\tEnter number two : ";
		cin >> numTwo;
		int *pNumTwo = &numTwo;
		if (*pChoise == 1)
		{
			Plus(pNumOne, pNumTwo, result);
		}
		else if (*pChoise == 2)
		{
			Minus(pNumOne, pNumTwo, result);
		}
		else if (*pChoise == 3)
		{
			Multiplication(pNumOne, pNumTwo, result);
		}
		else if (*pChoise == 4)
		{
			Division(pNumOne, pNumTwo, result);
		}
		else
		{
			cout << "\n\t\tERROR :(" << endl;
		}
		cout << "\n\t\tResult : " << result << endl;
	system("pause");
	return 0;
}
