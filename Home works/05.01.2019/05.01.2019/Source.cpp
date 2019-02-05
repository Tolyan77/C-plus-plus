/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється як середнє арифметичне, 
але без врахування найкращої та найгіршої оцінок.Виконати задачу з функіями.*/
#include <iostream>
using namespace std;
int Rating()
{
	const int FOUR = 4;
	int arr[FOUR], max = 0, min = 0, result = 0;
	for (int i = 0; i < FOUR; i++)
	{
		cout << "\n\t\tEnter rating #" << i + 1 << " :";
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < FOUR; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
		result += arr[i];
	}
	result -= max;
	result -= min;
	return result;
}
int main()
{
	int people1, people2, people3, win = 0;
	cout << "\n\t\t\t\t\t""Pochuk Zirok""\n\t\tPeople 1" << endl;
	people1 = Rating();
	cout << "\n\t\tPeople 2" << endl;
	people2 = Rating();
	cout << "\n\t\tPeople 3" << endl;
	people3 = Rating();
	cout << "\n\t\tPeople 1 :" << people1 << "\n\t\tPeople 2 :" << people2 << "\n\t\tPeople 3 :" << people3 << endl;
	system("pause");
	return 0;
}
