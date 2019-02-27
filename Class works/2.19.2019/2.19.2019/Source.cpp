#include<iostream>
using namespace std;
/*int main()
{
	int a = 10, b = 20, temp;
	int *pA = &a, *pB = &b;
	cout << "\n\t*pA number = " << *pA << "\tpA adress = " << pA << "\n\t*pB number = " << *pB << "\tpB adress = " << pB << endl;
	temp = *pA;
	*pA = *pB;
	*pB = temp;
	cout << "\n\t*pA number = " << *pA << "\tpA adress = " << pA << "\n\t*pB number = " << *pB << "\tpB adress = " << pB << endl;
	system("pause");
	return 0;
}*/
/*Дано три числа. Оголосити вказівники на ці числа. 
Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через вказівники). */
/* template < class T>
void Product(T *pA, T *pB, T *pC, T &dobytok)
{
	dobytok = *pA * *pB * *pC;
}
template < class T>
void Seredne(T *pA, T *pB, T *pC, T &seredne)
{
	seredne = (*pA + *pB + *pC) / 3;
}
template < class T>
void MIN(T *pA, T *pB, T *pC, T &min)
{
	if (*pA < *pB)
	{
		if (*pA < *pC)
		{
			min = *pA;
		}
	}
	if (*pB < *pC)
	{
		if (*pB < *pA)
		{
			min = *pB;
		}
    }
	else
	{
		min = *pC;
	}
}
int main()
{
	float numA = 0, numB = 0, numC = 0, dobytok = 0, seredne = 0, min = 0;
	cout << "\n\t\tEnter number one :";
	cin >> numA;
	cout << "\n\t\tEnter number two :";
	cin >> numB;
	cout << "\n\t\tEnter number three :";
	cin >> numC;
	float *pA = &numA;
	float *pB = &numB;
	float *pC = &numC;
	Product(pA, pB, pC, dobytok);
	cout << "\n\t\tDobytok : " << dobytok << endl;
	Seredne(pA, pB, pC, seredne);
	cout << "\n\t\tSeredne : " << seredne << endl;
	MIN(pA, pB, pC, min);
	cout << "\n\t\tMIN : " << min << endl;
	system("pause");
	return 0;
}*/
//Написать  калькулятор, пользуясь только указателями.
template < class T>
void Minus(T numOne, T numTwo, T &result)
{
	result = numOne - numTwo;
}
template < class T>
void Plus(T numOne, T numTwo, T &result)
{
	result = numOne + numTwo;
}
template < class T>
void Multiplication(T numOne, T numTwo, T &result)
{
	result = numOne * numTwo;
}
template < class T>
void Multiplication(T numOne, T numTwo, T &result)
{
	result = numOne * numTwo;
}
template < class T>
void Division(T numOne, T numTwo, T &result)
{
	int g = 0;
	if (numOne < numTwo)
	{
		g = numOne;
		numOne = numTwo;
		numTwo = g;
	}
	result = numOne / numTwo;
}
int main()
{
	int choise = 0, numOne = 0, numTwo = 0, result = 0;
	cout << "\n\t\t\tWELCOME TO KALKULATOR\n\t1 - ( + )\t2 - ( - )\t3 - ( * )\t4 - ( / )\n\t\t\tEnter :";
	cin >> choise;
	cout << "\n\t\tEnter number one : ";
	cin >> numOne;
	cout << "\n\t\tEnter number two : ";
	cin >> numTwo;
	if (choise == 1)
	{
		Minus(numOne, numTwo, result);
	}
	else if (choise == 2)
	{
		Plus(numOne, numTwo, result);
	}
	else if (choise == 3)
	{
		Multiplication(numOne, numTwo, result);
	}
	else if (choise == 4)
	{
		Division(numOne, numTwo, result);
	}
	else
	{
		cout << "\n\t\tERROR :(" << endl;
	}
	cout << "\n\t\tResult : " << result << endl;
}