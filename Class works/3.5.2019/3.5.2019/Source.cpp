#include<iostream>
#include<ctime>
using namespace std;

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
void Index(int *&arr, int const size)
{
	int number = 0, index = 0;
	int *arrN = new int[size + 1];
	cout << "\n\tNew number : ";
	cin >> number;
	cout << "\n\tWhich index?\n\tEnter : ";
	cin >> index;
	for (int i = 0; i < size + 1; i++)
	{
		if (i < index)
		{
			arrN[i] = arr[i];
		}
		else if (i == index)
		{
			arrN[i] = number;
		}
		else
		{
			arrN[i] = arr[i - 1];
		}
	}
	delete[] arr;
	arr = arrN;
}
void RemovingTheLastOne(int *&arr, int const size)
{
	int *arrN = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		arrN[i] = arr[i];
	}
	delete[] arr;
	arr = arrN;
}
void RemovingTheFirsttOne(int *&arr, int const size)
{
	int *arrN = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		arrN[i] = arr[i+1];
	}
	delete[] arr;
	arr = arrN;
}
void DeleteByIndex(int *&arr, int const size)
{
	int *arrN = new int[size - 1], index = 0;
	cout << "\n\tEnter index : ";
	cin >> index;
	for (int i = 0; i < size - 1; i++)
	{
		if (i < index)
		{
			arrN[i] = arr[i];
		}
		else
		{
			arrN[i] = arr[i + 1];
		}
	}
	delete[] arr;
	arr = arrN;
}
void AddACoupleOfDigits(int *&arr, int const size, int const number)
{
	int *arrN = new int[size + number], choise = 0;
	cout << "\n\t1 - Early\t2 - At the end of\t3 - By index\n\tEnter : ";
	cin >> choise;
	if (choise == 1)
	{
		for (int i = 0; i < size + number; i++)
		{
			if (i < number)
			{
				cout << "\n\t[" << i << "] = ";
				cin >> arrN[i];
			}
			else
			{
				arrN[i] = arr[i - number];
		    }
		}
	}
	else if (choise == 2)
	{
		for (int i = 0; i < size + number; i++)
		{
			if (i < size)
			{
				arrN[i] = arr[i];
			}
			else
			{
				cout << "\n\t[" << i << "] = ";
				cin >> arrN[i];
			}
		}
	}
	else if (choise == 3)
	{
		int	index = 0;
		cout << "\n\tEnter index : ";
		cin >> index;
		for (int i = 0; i < size + number; i++)
		{
			if (i < index)
			{
				arrN[i] = arr[i];
			}
			else if (i >= index && i < index + number)
			{
				cout << "\n\t[" << i << "] = ";
				cin >> arrN[i];
			}
			else
			{
				arrN[i] = arr[i - number];
			}
		}
	}
	else
	{
		cout << "\n\tERROR..." << endl;
	}
	delete[] arr;
	arr = arrN;
}
int main()
{
	srand(unsigned(time(NULL)));/*
	cout << ":=========================1============================>" << endl;
	int  size = 0;
	cout << "\n\tEnter size arr = ";
	cin >> size;
	int *arr = new int[size];
	cout << "\n\tARR : " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << "\t[" << i << "] = " << arr[i] << "\tadress = " << arr + i << endl;
	}
	delete[]arr;
	cout << ":==========================2===========================>" << endl;
	
	size = 0;
	cout << "\n\tEnter size arr = ";
	cin >> size;
	cout << ":=====================================================>" << endl;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	delete[]arr;
	cout << ":========================3=============================>" << endl;
	int  const SIZE = 5;
	int *ArrOne = new int[SIZE], *ArrTwo = new int[SIZE];
	Fill(ArrOne, SIZE);
	Fill(ArrTwo, SIZE);
	Print(ArrOne, SIZE);
	 cout << ":========================3=============================>" << endl;
	Print(ArrTwo, SIZE);
	delete[]ArrOne;
	ArrOne = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		ArrOne[i] = ArrTwo[i];
	}
	cout << ":========================3=============================>" << endl;
	Print(ArrOne, SIZE);
	cout << ":========================3=============================>" << endl;
	Print(ArrTwo, SIZE);
	delete[]ArrOne;
	delete[]ArrTwo;*/
	//Написати функції для роботи з динамічним одновимірним масивом :
	//1) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
	//2) Доповнення масиву одним елементом.Меню
	int size = 0;
	size = Size(size);
	bool GG = true;
	int choise = 0,*arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	while (GG == true)
	{
		cout << "=========================================================>" << endl;
		cout << "\n\t1 - View array\n\t2 -Add an array to the end of an array(+)\n\t3 - Add an array to the beginning of an array(-)\n\t4 - Add an array to a specific index\n\t5 - Delete the last element of the array\n\t6 - Remove the first element of the array\n\t7 - Delete by index\n\t8 - Add a couple of digits\n\t9 - Exit\n\tEnter : ";
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
		else if (choise == 4)
		{
			Index(arr, size);
			size++;
			Print(arr, size);
		}
		else if (choise == 5)
		{
			RemovingTheLastOne(arr, size);
			size--;
			Print(arr, size);
		}
		else if (choise == 6)
		{
			RemovingTheFirsttOne(arr, size);
			size--;
			Print(arr, size);
		}
		else if (choise == 7)
		{
			DeleteByIndex(arr, size);
			size--;
			Print(arr, size);
		}
		else if (choise == 8)
		{
			int number = 0;
			cout << "\n\tNumbers number :";
			cin >> number;
			AddACoupleOfDigits(arr, size, number);
			size += number;
			cout << "=========================================================>" << endl;
			Print(arr, size);
		}
		else if (choise == 9)
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