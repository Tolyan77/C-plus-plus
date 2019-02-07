#include <iostream>
#include <ctime>
using namespace std;
const int   ROW = 3, COL = 4;
/*
template < typename T1,typename T2>
T1 Sum(T1 a, T2 b)
{
	return a + b;
}
template < typename T1, typename T2>
T1 Sum(T1 a, T2 b, T1 c)
{
	return a + b + c;
}
int main()
{
	cout << Sum(2.5, 5,6.3) << endl;
	system("pause");
	return 0;
}*/
/*1 Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності.
Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні[1..30]
шаблонну функцію Print(), яка виводить елементи масиву на екран в вигляді матриці
функцію, яка заміняє всі парні елементи нулями*/
template < class T1>
T1 Fill(T1 arr[ROW][COL])
{
	srand(unsigned(time(0)));
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 30 + 1;
		}
	}

	return 0;
}
template < class T1>
T1 Print(T1 arr[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		cout << "\n\t  Col #" << i << endl;
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t" ;
		}
		cout << endl;
	}

	return 0;
}
template < class T1>
T1 Null(T1 arr[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				arr[i][j] = 0;
			}
		}
	}

	return 0;
}

int main()
{
	int arr[ROW][COL];
	srand(unsigned(time(0)));
	Fill(arr);
	Print(arr);
	cout << "==================================>" << endl;
	Null(arr);
	Print(arr);
	system("pause");
	return 0;
}