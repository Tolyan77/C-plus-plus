/*1. Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.Найти среди них один с максимальной суммой элементов.
Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.*/
#include<iostream>
#include<ctime>
using namespace std;
/*int Fill(int arr[10][10], int COL, int ROW)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			arr[i][j] = rand() % 100 + 0;
		}
	}
	return 0;
}
int Print(int arr[10][10], int COL, int ROW)
{
	int number = 0, summa = 0, max = 0;
	for (int i = 0; i < COL; i++)
	{
		for (int i = 0; i < COL; i++)
		{
			for (int j = 0; j < ROW; j++)
			{
				summa += arr[i][j];
			}
			if (summa > max)
			{
				max = summa;
				number = i;
			}
			summa = 0;
		}
	}
	return number;
}
int Summa(int arr[10][10], int COL, int ROW)
{
	int summa = 0, max = 0, number = 0;
	for (int i = 0; i < COL; i++)
	{
		cout << "\n\t\t\t\tArr " << i << endl;
		for (int j = 0; j < ROW; j++)
		{
			cout << arr[i][j] << "\t";
			summa += arr[i][j];
		}
		cout << "\n\t\t\t\tSumma " << summa << endl;
		if (summa > max)
		{
			max = summa;
			number = i;
		}
		summa = 0;
		cout << endl;
	}
	return max;
}
int main()
{
	const int COL = 10, ROW = 10;
	int arr[COL][ROW];
	Fill(arr, COL, ROW);
	int max = Summa(arr, COL, ROW);
	int number = Print(arr, COL, ROW);
	cout << "\n\t\t\t\tGreatest value\n\t\t\t\tArr " << number << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[number][i] << "\t";
	}
	cout << "\n\t\t\t\tSumma :" << max << endl;
	system("pause");
	return 0;
}*/
/*2. Банкомат.Реалізувати перевантажені функції там, де це необхідно.
- Є реєстрація користувача(логін по номеру карти(масив  int), пароль(масив int), або логін по номеру телефону(масив int)).
- Вхід в аккаунт через логін і пароль або через логін      і    номер телефону(масив int).

- Переказ грошей або на картку або на телефон.
- Вивід грошей або ціле число(передати int) або дробове число(передати double).Перевірити баланс(на екра).*/
int main()
{
	const int  FOUR = 4, SEVEN = 7, FIVE = 5;
	int arrPassw[SEVEN][FOUR], arrPhone[SEVEN][SEVEN], arrLoginAudit[FIVE], arrPasswordAudit[FOUR], arrLogin[SEVEN][FIVE], choise = 0;
	Filling(arrPassw, arrPhone);
	cout << "\n\t\tHello Welcome to < Bankomat ot Vasi >\n\t\t1 - Сome in with a password\t2 - Via phone number\n\t\t\tEnter :";
	cin >> choise;
	AuditLogin(arrLoginAudit);
	PasswordAudit(arrPasswordAudit);
	Audit(arrPassw, arrPasswordAudit, arrLogin, arrLoginAudit);
} 
int Audit(int arrPassword[7][4], int arrPasswordAudit[], int arrLogin[7][5], int arrLoginAusit[])
{
	int audit = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arrPassword[i] != arrPasswordAudit[i])
				{
					audit = 1;
	           	}
	}
	for (int i = 0; i < 7; i++)
	{
		if (arrLogin[i] != arrLoginAusit[i])
		{
			audit = 1;
		}
	}
}
int AuditLogin(int arrLoginAudit[])
{
	cout << "\n\tEnter Login :";
	for (int i = 0; i < 7; i++)
	{
		cin >> arrLoginAudit[i];
		cout << "\t";
	}
	return 0;
}
int PasswordAudit(int arrPasswordAudit[])
{
	cout << "\n\tEnter Password :";
	for (int i = 0; i < 7; i++)
	{
		cin >> arrPasswordAudit[i];
		cout << "\t";
	}
	return 0;
}
int Filling(int arrPassw[7][4], int arrPhone[7][7])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i = 0)
			{
				arrPassw[i][j] = 0;
			}
			if (i = 1)
			{
				arrPassw[i][j] = 1;
			}
			if (i = 2)
			{
				arrPassw[i][j] = 2;
			}
			if (i = 3)
			{
				arrPassw[i][j] = 3;
			}
			if (i = 4)
			{
				arrPassw[i][j] = 4;
			}
			if (i = 5)
			{
				arrPassw[i][j] = 5;
			}
			if (i = 6)
			{
				arrPassw[i][j] = 6;
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i = 0)
			{
				arrPhone[i][j] = 0;
			}
			if (i = 1)
			{
				arrPhone[i][j] = 1;
			}
			if (i = 2)
			{
				arrPhone[i][j] = 2;
			}
			if (i = 3)
			{
				arrPhone[i][j] = 3;
			}
			if (i = 4)
			{
				arrPhone[i][j] = 4;
			}
			if (i = 5)
			{
				arrPhone[i][j] = 5;
			}
			if (i = 6)
			{
				arrPhone[i][j] = 6;
			}
		}
	}
}