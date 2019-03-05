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
void Print(int*const arr, const int size)
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
void Addition(int *&arr, int size)
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
int main()
{
	srand(unsigned(time(NULL)));
	/*cout << ":=========================1============================>" << endl;
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
	
	int  size = 0;
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
	delete[]ArrTwo;
	Написати функції для роботи з динамічним одновимірним масивом :
	1) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
	2) Доповнення масиву одним елементом.
	Меню*/
	int size = 0;
	size = Size(size);
	bool GG = true;
	int choise = 0,*arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	while (GG == true)
	{
		cout << "\n\t1 - View array\t2 - Addition of an array\t3 - Exit\tEnter : ";
		cin >> choise;
		if (choise == 1)
		{
			Print(arr, size);
		}
		else if (choise == 2)
		{
			Addition(arr, size);
			size++;
			Print(arr, size);
		}
		else if (choise == 3)
		{
			GG = false;
		}
		else
		{
			cout << "\n\tERROR :((" << endl;
		}
	}
	system("pause");
	return 0;
}