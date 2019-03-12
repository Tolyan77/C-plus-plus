#include<iostream>
#include<ctime>
using namespace std;
/*1. Написати функції для роботи з динамічним одновимірним масивом :
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Виводу масиву
Доповнення масиву одним елементом в кінець масиву.
Доповнення масиву одним елементом в початокмасиву.
Меню*/
void Fill(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t[" << i << "] = " << arr[i] << "  adress = " << arr + i << endl;
	}
}
int Size(int size)
{
	cout << "\n\tThe size of the array = ";
	cin >> size;
	return size;
}
void AdditionPlus(int *&arr, int const size)
{
	int number = 0;
	int *arrN = new int[size + 1];
	cout << "\n\tNew number : ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		arrN[i] = arr[i];
	}
	arrN[size] = number;
	delete[] arr;
	arr = arrN;
}
void AdditionMinus(int *&arr, int const size)
{
	int number = 0;
	int *arrN = new int[size + 1];
	cout << "\n\tNew number : ";
	cin >> number;
	for (int i = size + 1; i > 0; i--)
	{
		arrN[i] = arr[i - 1];
	}
	arrN[0] = number;
	delete[] arr;
	arr = arrN;
}
int main()
{
	srand(unsigned(time(NULL)));
	int size = 0;
	size = Size(size);
	bool GG = true;
	int choise = 0, *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	while (GG == true)
	{
		cout << "=========================================================>" << endl;
		cout << "\n\t1 - View array\n\t2 -Add an array to the end of an array(+)\n\t3 - Add an array to the beginning of an array(-)\n\t0 - Exit\n\tEnter : ";
		cin >> choise;
		if (choise == 1)
		{
			Print(arr, size);
		}
		else if (choise == 2)
		{
			AdditionPlus(arr, size);
			size++;
			Print(arr, size);
		}
		else if (choise == 3)
		{
			AdditionMinus(arr, size);
			size++;
			Print(arr, size);
		}
		else if (choise == 0)
		{
			GG = false;
			cout << "\n\tBAY :)" << endl;
		}
		else
		{
			cout << "\n\tERROR :((" << endl;
		}
	}
	system("pause");
	return 0;
}