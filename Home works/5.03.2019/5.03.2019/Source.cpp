#include<iostream>
using namespace std;
//Створити 3 динамічних змінних різного типу.Заповнити їх деякими значеннями.
//Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних
int main()
{
	int a, choise = 0;
	double b;
	bool c, gg = true;
	int *pa = &a;
	double *pb = &b;
	bool *pc = &c;
	cout << "\n\tEnter int : ";
	cin >> *pa;
	cout << "\n\tEnter double : ";
	cin >> *pb;
	while (gg == true)
	{
		cout << "\n\tEnter bool 1 - true 2 - false\tenter : ";
		cin >> choise;
		if (choise == 1)
		{
			*pc = true;
			gg = false;
		}
		else if (choise ==2)
		{
			*pc = false;
			gg = false;
		}
	}
	cout << "\n\tDobytok = " << a + b + c << endl;
	cout << "\n\tA = " << a << "  B = " << b << "  C = " << c << endl;
	system("pause");
	return 0;
}