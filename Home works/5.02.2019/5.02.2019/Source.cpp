/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється як
середнє арифметичне, але без врахування найкращої та найгіршої оцінок.Виконати задачу з функіями.*/
#include<iostream>
using namespace std;
int Arithmetic()
{
	const int FOUR = 4;
	int arr[FOUR], rating1 = 0, rating2 = 0, rating3 = 0, rating4 = 0, min = 0, max = 0, arithmetic = 0;
	for (int i = 0; i < FOUR; i++)
	{
		cout << "\n\tEnter rating #" << i + 1 << " :";
		cin >> arr[i];
		arithmetic += arr[i];
	}
	min = max = arr[0];
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
	}
	return arithmetic - max - min;
}
int main()
{
	int people1 = 0, people2 = 0, people3 = 0;
	cout << "\n\t\t\tPeople 1" << endl;
	people1 = Arithmetic();
	cout << "\n\t\t\tPeople 2" << endl;
	people2 = Arithmetic();
	cout << "\n\t\t\tPeople 3" << endl;
	people3 = Arithmetic();
	cout << "\n\t\tPeople #1 = " << people1 << "\n\t\tPeople #3 = " << people2 << "\n\t\tPeople #3 = " << people3 << endl;
	system("pause");
	return 0;
}
