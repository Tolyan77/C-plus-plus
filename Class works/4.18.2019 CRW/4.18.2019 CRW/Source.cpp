#include <iostream>
#include <ctime>
using namespace std;/*
Задача на динамическое выделение памяти.Изначально есть указатель на массив с одним элементом.
Пользователь вводит число.Если оно больше 0 записываем его в массив.Далее пользователь вводит второе число, тут уже, если оно больше 0,
надо пере выделять память для 2 - х элементов массива и записать в массив второе число.И так далее…
для 3 - х элементов, для 4 - х…  пока пользователь не введет отрицательное число.*/
//int PlusNum(int *&arr)
//{
//	bool exit = false;
//	int i = 0;
//	int number = 0, *arrA = new int[i];
//	while (exit == false)
//	{
//		cout << "\n\tEnter number : ";
//		cin >> number;
//		if (number > 0)
//		{
//			arrA[i] = number;
//			i++;
//		}
//		else
//		{
//			exit = true;
//		}
//	}
//	delete[]arr;
//	arr = new int[i];
//	arr = arrA;
//	return i;
//}
//void Print(int *arr, int size)
//{
//	cout << "\n\tArr : ";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << arr[i];
//	}
//	cout << endl;
//}
//int main()
//{
//	int size = 0;
//	int *arr = new int[size];
//	size = PlusNum(arr);
//	Print(arr, size);
//	system("pause");
//	return 0;
//}






//Составить программу - тест  на экране по очереди появляются вопросы(вопросы выбираются программистом), 
//с вариантами ответов.В конце работы программа выдает количество заработанных баллов по результатам ответа.
//int Izi()
//{
//
//}
//int main()
//{
//	int choise = 0;
//	cout << "\n\t1 - IZI\t2 - Average\t3 - Hard\n\tEnter : ";
//	cin >> choise;
//
//	system("pause");
//	return 0;
//}



//
//Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.
//void Rand(int size, int *arr)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % +300;
//		cout << "\t" << arr[i] << endl;
//	}
//}
//void Odd(int size, int *arr)
//{
//	cout << "\n\t\t\tODD : " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			cout << "\t" << arr[i] << endl;
//		}
//	}
//}
//int main()
//{
//	int size = 0;
//	cout << "\n\tEnter size : ";
//	cin >> size;
//	int *arr = new int[size];
//	Rand(size, arr);
//	Odd(size, arr);
//	system("pause");
//	return 0;
//}


////Дана строка символов, которая обязательно заканчивается символом точки.Удалить из строки первые буквы каждого слова.
int main()
{
	char str[255] = "";
	cout << "\n\tEnter sentence :";
	cin.getline(str, 255);
	int stop = 0;
	for (int i = 0; i < 255; i++)
	{
		if ((char(str[i]) == 36))
		{
			str[i + 1] = ' ';
			str[i + 2] = ' ';
			str[i + 3] = ' ';
		}
		
	}
	for (int i = 0; i < 255; i++)
	{
		cout << str[i];
	}
	system("pause");
	return 0;
}



//Составить программу, которая будет генерировать случайные числа в интервале[a; b] и заполнять ими двумерный массив размером 10 на 10.
//В массиве необходимо найти номер строки с минимальным элементом.Поменять строки массива местами, строку с минимальным элементом и 
//первую строку массива.Организовать удобный вывод на экран.
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int Col = 10, Row = 10;
//	int arr[Col][Row], number = 0, ROW;
//	for (int i = 0; i < Col; i++)
//	{
//		cout << "\n\tArr : " << i << endl;
//		for (int j = 0; j < Row; j++)
//		{
//			arr[i][j] = rand() % 300;
//			cout << "\t" << arr[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < Col; i++)
//	{
//		number = arr[i][0];
//		for (int j = 0; j < Row; j++)
//		{
//		    if (arr[i][j] < number)
//			{
//				number = arr[i][j];
//				ROW = j;
//			}
//		}
//		arr[i][ROW] = arr[i][0];
//		arr[i][0] = number;
//    }
//	cout << "===============================================================================================" << endl;
//	for (int i = 0; i < Col; i++)
//	{
//		cout << "\n\tArr : " << i << endl;
//		for (int j = 0; j < Row; j++)
//		{
//			cout << "\t" << arr[i][j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
