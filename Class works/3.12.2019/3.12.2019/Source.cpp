#include<iostream>
#include<ctime>
using namespace std;
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
void Filling(int **&arr, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int **&arr, int col, int row)
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
void NewRow(int **&arr, int col, int row)
{
	for (int i = 0; i < col; i++)
	{
		arr[row + 1][i] = rand() % 100;
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	/*int row = 5, col = 4;
	int **arr = new int *[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < row; i++)
	{
		cout << "\n\tArr [" << i << "] = ";
		for (int j = 0; j < col; j++)
		{
			cout << "\t" << arr[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < row; i++) 
	{
		delete[]arr[i];
	}
	delete[]arr;*/
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
	int row = Row(), col = Col(), choise = 0;
	int **arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	Filling(arr, col, row);
	Print(arr, col, row);
	choise = Menu();
	if (choise == 1)
	{
		*arr = new int[row];
		NewRow(arr, col, row);
		row++;
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

