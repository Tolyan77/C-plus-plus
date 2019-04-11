#include <iostream>
#include <ctime>
#include "Masuv.h"
#include "Menu.h"
#include "AddOneElem.h"
#include "DeleteElem.h"
#include "ArrChoise.h"
using namespace std;
//int main()
//{
//	//=======================malloc======================
//	/*int *rtr = (int*)malloc(sizeof(int));
//	*rtr = 10;
//	cout << rtr << endl << *rtr << endl;
//	free(rtr);
//	cout << rtr << endl << *rtr << endl;*/
//
//
//
//	/*int *rtr = (int*)malloc(2 * sizeof(int));
//	rtr[0] = 10;
//	rtr[1] = 20;
//	cout << rtr << endl << rtr[0] << endl;
//	cout << rtr << endl << rtr[1] << endl;
//	free(rtr);*/
//
//
//	//=======================calloc======================
//	//int count = 2;
//	//int *ptr = (int*)calloc(count,sizeof(int));
//	//ptr[0] = 6;
//	//ptr[1] = 7;
//	////rtr[2] = 8;//error
//	//cout << "\n\tAdress : " << ptr << endl << "\n\tNumber 0 : " << ptr[0] << endl;
//	//cout << "\n\tAdress : " << ptr << endl << "\n\tNumber 1 : " << ptr[1] << endl;
//	////cout << "\n\tAdress : " << rtr << endl << "\n\tNumber 2 : " << rtr[2] << endl;//error
// //   //=======================realloc======================++
//	//ptr = (int*)realloc(ptr, 3 * sizeof(int));
//	//ptr[2] = 30;
//	//cout << "\n\tAdress : " << ptr << endl << "\n\tNumber 1 : " << ptr[2] << endl;
//	system("pause");
//	return 0;
//}
//
//


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
int main() {
	srand(unsigned(time(NULL)));
	int Size = Siize();
    int *ptr = (int*)calloc(Size, sizeof(int));
	bool exit = true;
	for (int i = 0; i < Size; i++)
	{
		ptr[i] = rand() % 200;
	}
	while (exit == true)
	{
		MasuvVu(ptr, Size);
		int choise = Menu();
		if (choise == 1)
		{
			Size++;
			ptr = (int*)realloc(ptr, Size * sizeof(int));
			AddOneElem(ptr, Size);
		}
		else if (choise == 0)
		{
			cout << "\n\t\t\tBAY!" << endl;
			exit = false;
		}
		else if (choise == 2)
		{
			Size--;
			ptr = (int*)realloc(ptr, Size * sizeof(int));
			DeleteElem(ptr, Size);
		}
		else if (choise == 3)
		{
			Size++;
			ptr = (int*)realloc(ptr, Size * sizeof(int));
			ArrChoise(ptr, Size);
		}
	}
	system("pause");
	return 0;
}