//1.	Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення
#include<iostream>
using namespace std;/*
void Foo(int arrNumbers[], int number, int i)
{
	if (number % 2 == 0)
	{
		arrNumbers[i] = 0;
		number /= 2;
	}
	else if (number % 2 != 0)
	{
		arrNumbers[i] = 1;
		number = number - 1;
		number = number / 2;
	}
	arrNumbers[0] = i;
	i++;
	if (number > 0)
	{
		Foo(arrNumbers, number, i);
	}
}
int main()
{
	int arrNumbers[100], number = 0, i = 1;
	cout << "\n\tEnter number : ";
	cin >> number;
	Foo(arrNumbers, number, i);
	cout << "\n\tBinary response : ";
	for (int j = arrNumbers[0]; j != 0; j--)
	{
		cout << arrNumbers[j];
	}
	cout << endl;
	system("pause");
	return 0;
}*/
//2.	Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію масив впорядкований за зростанням(не спаданням).
void Print(int arrOne[], int const SIZE)
{
	cout << "\n\tArr : ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrOne[i] << "   ";
	}
}
 int Foo(int arrOne[], int i, int j, int counter, int SIZE, int size)
{
 	if (arrOne[i] > arrOne[j])
	{
		counter++;
	}
 	i++;
 	j++;
	SIZE--;
	if (SIZE - 1 != 0)
	{
		Foo(arrOne, i, j, counter, SIZE, size);
	}
	else
	{
		return counter;
	}
}
void Filling(int arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\tArr[" << i << "] = ";
		cin >> arr[i];
	}
}
int main()
{
	const int SIZE = 7;
	int rezul = 0, arrOne[SIZE], counter = 0, i = 0, j = 1, size = SIZE;
	Filling(arrOne, SIZE);
	Print(arrOne, SIZE);
	cout << endl;
	rezul = Foo(arrOne, i, j, counter, SIZE, size);
	if (rezul == 0)
	{
		cout << "\n\tAn array is a growth order" << endl;
	}
	else
	{
		cout << "\n\tThe array is not arranged in growth!!" << endl;
	}
	system("pause");
	return 0;
}