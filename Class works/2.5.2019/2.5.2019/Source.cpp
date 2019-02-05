#include <iostream>
using namespace std;
/*double Sum(double a, double b)
{
	cout << "#1 :";
	return a + b;
}
int Sum(int a, int b)
{
	cout << "#2 :";
	return a + b;
}
int Sum(int a, int b, int c)
{
	cout << "#3 :";
	return a + b + c;
}
int main()
{
	cout << Sum(5.4, 10.8) << endl;
	cout << Sum(5, 10) << endl;	
	cout << Sum(5, 22, 1) << endl;

	system("pause");
	return 0;
}*/
int Plus(int a, int b, int c)
{
	return a + b + c;
}
int Plus(int a, int b)
{
	return a + b;
}
double Plus(double a, double b, double c)
{
	return a + b + c;
}
double Plus(double a, double b)
{
	return a + b;
}

int Minus(int a, int b, int c)
{
	return a - b - c;
}
int Minus(int a, int b)
{
	return a - b;
}
double Minus(double a, double b, double c)
{
	return a - b - c;
}
double Minus(double a, double b)
{
	return a - b;
}

int Multiplication(int a, int b, int c)
{
	return a * b * c;
}
int Multiplication(int a, int b)
{
	return a * b;
}
double Multiplication(double a, double b, double c)
{
	return a * b * c;
}
double Multiplication(double a, double b)
{
	return a * b;
}

int Division(int a, int b, int c)
{
	return a / b / c;
}
int Division(int a, int b)
{
	return a / b;
}
double Division(double a, double b, double c)
{
	return a / b / c;
}
double Division(double a, double b)
{
	return a / b;
}



int main()
{
	bool Kalkul = true;
	double choise, amount = 0, num1 = 0, num2 = 0, num3 = 0, result = 0, contine, save = 0;
	cout << "\n\tHello!\tWelcome to kalkulator\ :)" << endl;

	while (Kalkul)
	{
		cout << "\n\t\t1 - ( + )\t2 - ( - )\t3 - ( * )\t4 - ( / )\n\t\t\t\t\tEnter :";
		cin >> choise;
		cout << "Specify the number of numbers :";
		cin >> amount;
		
		if (choise == 1)
		{
			if (amount == 2)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				result = Plus(num1, num2);
			}
			else if (amount == 3)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				cout << "\n\tEnter number 3 :";
				cin >> num3;
				result = Plus(num1, num2, num3);
			}
			else
			{
				cout << "\n\t\tERROR :(" << endl;
			}
		}
		else if (choise == 2)
		{
			if (amount == 2)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				result = Minus(num1, num2);
			}
			else if (amount == 3)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				cout << "\n\tEnter number 3 :";
				cin >> num3;
				result = Minus(num1, num2, num3);
			}
			else
			{
				cout << "\n\t\tERROR :(" << endl;
			}
		}
		else if (choise == 3)
		{
			if (amount == 2)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				result = Multiplication(num1, num2);
			}
			else if (amount == 3)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				cout << "\n\tEnter number 3 :";
				cin >> num3;
				result = Multiplication(num1, num2, num3);
			}
			else
			{
				cout << "\n\t\tERROR :(" << endl;
			}
		}
		else if (choise == 4)
		{
			if (amount == 2)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				if (num1 == 0 || num2 == 0)
				{
					cout << "\n\tERROR!" << endl;
				}
				else
				{
					result = Division(num1, num2);
				}
			}
			else if (amount == 3)
			{
				cout << "\n\tEnter number 1 :";
				cin >> num1;
				cout << "\n\tEnter number 2 :";
				cin >> num2;
				cout << "\n\tEnter number 3 :";
				cin >> num3;
				if (num1 == 0 || num2 == 0 || num3 == 0)
				{
					cout << "\n\tERROR!" << endl;
				}
				else
				{
					result = Division(num1, num2, num3);
				}
			}
			else
			{
				cout << "\n\t\tERROR :(" << endl;
			}
		}
		else
		{
			cout << "\n\t\tERROR :(" << endl;
		}
		cout << "\n\t\tResultat :" << result << "\t\tSaves number :" << save << "\n\t\t\tEnter 0 to exit\n\t\t\tEnter 1 to save result\n\t\t\tEnter to contine\n\t\t\tEnter :";
		cin >> contine;
		if (contine == 0)
		{
			Kalkul = false;
		}
		else if (contine == 1)
		{
			save = result;
			result = 0;
		}
}
cout << "\n\t\t\tBAY" << endl;
	system("pause");
	return 0;
}
