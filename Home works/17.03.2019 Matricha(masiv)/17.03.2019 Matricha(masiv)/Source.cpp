#include<iostream>
#include<ctime>
using namespace std;
/*	Написати функції для роботи з динамічною матрицею :
		Функція створення динамічної матриці розміром row x col
			Функція заповнення матриці
			Функція виводу матриці
			1Функція доповнення матриці новим рядком
			2Функція видалення з матриці рядка за вказаним номером
			3Функція вставки нового рядка за вказаним номером
			4Функція доповнення матриці новим стовпчиком
			5Функція видалення з матриці стовпця за вказаним номером
			6Функція вставки нового стовпця за вказаним номером
	*/
int Row()
{
	int row = 0;
	cout << "\n\tEnter row :";
	cin >> row;
	return row;
}
int Col()
{
	int col = 0;
	cout << "\n\tEnter col :";
	cin >> col;
	return col;
}
void Filling(int **arr, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int **arr, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		cout << "\n\tArr [" << i << "] = ";
		for (int j = 0; j < col; j++)
		{
			cout << "\t" << arr[i][j];
		}
	}
}
int Menu()
{
	int choise = 0;
	cout << "\n\t1 - New row\n\t0 - Exit\n\tEnter :";
	cin >> choise;
	return choise;
}
void NewRow(int **arr, int col, int row)
{
	int **arrN = new int*[row + 1];

	for (int i = 0; i < col + 1; i++)
	{
		arrN[i] = new int[row];
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arrN[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < row + 1; i++)
	{
		arrN[col + 1][i] = rand() % 100;
	}
	for (int i = 0; i < col; i++) 
	{
		delete[] arr[i];
    }
	delete[] arr;
	arr = new int*[row + 1];
	arr = arrN;
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
int main()
{
	srand(unsigned(time(NULL)));
	
	int row = Row(), col = Col(), choise = 0;
	int **arr = new int*[row];
	for (int i = 0; i < col; i++)
	{
		arr[i] = new int[row];
	}
	Filling(arr, col, row);
	Print(arr, col, row);
	choise = Menu();
	if (choise == 1)
	{
		NewRow(arr, col, row);
		col++;
		Print(arr, col, row);
	}
	else if (choise == 0)
	{
		cout << "\n\tBAy!" << endl;
	}
	else
	{
		cout << "\n\tERRORRRRRRRAR{FKDSLKG:Kdfgpojsodfigjklsdfguihoiusdfhaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaapoieoptwuiaw\n\thdfighihiger\treojgopjerklgt\n\thrthilhunasyijdhsckjn.skdnflajshflh\n \n \n \t\t\t\t\t\tEND." << endl;
	}
	system("pause");
	return 0;
}