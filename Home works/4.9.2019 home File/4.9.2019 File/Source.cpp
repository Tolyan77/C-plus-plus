#include <iostream>
#include <ctime>
#include "Masuv.h"
#include "Menu.h"
#include "AddElementArr.h"
#include "DeleteElem.h"
#include "AddElemChoise.h"
using namespace std;
//Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Функція повертає адресу створеного масиву.
//Виводу масиву
//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//Видалення елемента за вказаною позицією.
//Вставка нового елемента у довільну допустиму позицію у масиві
//Меню
//(розбити проект на файл основної програми(.cpp), файл реалізації функцій(.cpp) та заголовочний файл(.h)).
int Siize()
{
	int size = 0;
	cout << "\n\tEnter size : ";
	cin >> size;
	return size;
}
int main(){
	srand(unsigned(time(NULL)));
	int Size = Siize();
	int *arr = new int[Size];
	bool exit = true;
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 200;
	}
	while (exit == true)
	{
		MasuvVu(Size, arr);
		int choise = Menu();
		if (choise == 1)
		{
			Size = AddOneElem(arr, Size);
		}
		else if (choise == 0)
		{
			cout << "\n\t\t\tBAY!" << endl;
			exit = false;
		}
		else if (choise == 2)
		{
			Size = DeleteElem(arr, Size);
		}
		else if (choise == 3)
		{
			Size = ArrChoise(arr, Size);
		}
	}

	system ("pause");
	return 0;
}