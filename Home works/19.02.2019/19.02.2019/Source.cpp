/*1. Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.
Найти среди них один с максимальной суммой элементов.
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
int IntroductionLog(int arrAuditLog[], int SIZE, int arrLog[])
{
	bool loyalty = true;
	int lev = 0;
	cout << "\n\tPlease enter one digit\n\tEnter login : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << i << " = ";
		cin >> arrAuditLog[i];
		if (arrAuditLog[i] != arrLog[i] && lev == 0)
		{
			loyalty = false;
			lev++;
		}
	}
	return loyalty;
}
int IntroductionPass(int arrAuditPass[], int SIZE, int arrPass[])
{
	bool loyalty = true;
	int lev = 0;
	cout << "\n\tPlease enter one digit\n\tEnter password : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << i << " = ";
		cin >> arrAuditPass[i];
		if (arrAuditPass[i] != arrPass[i] && lev == 0)
		{
			loyalty = false;
			lev++;
		}
	}
	return loyalty;
}
int IntroductionPh(int arrAuditPh[], int SIZE, int arrPh[])
{
	bool loyalty = true;
	int lev = 0;
	cout << "\n\tPlease enter one digit\n\tEnter phone : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t" << i << " = ";
		cin >> arrAuditPh[i];
		if (arrAuditPh[i] != arrPh[i] && lev == 0)
		{
			loyalty = false;
			lev++;
		}
	}
	return loyalty;
}
int Choise()
{
	bool time = true;
	int choise = 0;
	while (time == true)
	{
		cout << "\n\t1 - Login to the account via login and password\t2 - through the login and phone number\t3 - Exit\n\tEnter :";
		cin >> choise;
		if (choise == 1 || choise == 2 || choise == 3)
		{
			time = false;
		}
	}
	return choise;
}
void BalanceCheck(float balance)
{
	cout << "\n\tYou'r balance = " << balance << endl;
}
int Menu(float balance)
{
	bool time = true;
	int choise = 0;
	while (time == true)
	{
		cout << "\n\t1 - Money transfer\t2 - Withdrawal of money\t3 - Check balance\t4 - Exit\n\tEnter :";
		cin >> choise;
		if (choise == 1 || choise == 2 || choise == 4)
		{
			time = false;
		}
		else if (choise == 3)
		{
			BalanceCheck(balance);
		}
	}
	return choise;
}
int main()
{
	const int SIZE = 7;
	int arrLog[SIZE] = { 1,1,1,1,1,1,1 }, arrPass[SIZE] = { 2,2,2,2,2,2,2 }, arrPh[SIZE]{ 3,3,3,3,3,3,3 }, auditArrLog[SIZE], auditArrPass[SIZE], auditArrPh[SIZE], times = 0;
	int choise = Choise();
	float balance = 1000;
	bool loyaltyLog = false, loyaltyPass = false, loyaltyPh = false;
	if (choise == 1)
	{
		times = 0;
		while (loyaltyLog == false)
		{
			if (times == 3)
			{
				cout << "\n\tYour card is locked!" << endl;
				system("pause");
				return 0;
			}
			loyaltyLog = IntroductionLog(auditArrLog, SIZE, arrLog);
			times++;
		}
		times = 0;
		while (loyaltyPass == false)
		{
			if (times == 3)
			{
				cout << "\n\tYour card is locked!" << endl;
				system("pause");
				return 0;
			}
			loyaltyPass = IntroductionPass(auditArrPass, SIZE, arrPass);
			times++;
		}
		while (true)
		{
			choise = Menu(balance);
			if (choise == 1)
			{
				cout << "\n\t1 - Transfer to card\t2 - Transfer to your phone\t3 - Exit\n\tEnter : ";
				cin >> choise;
				if (choise == 1)
				{
					float amount = 0;
					int number = 0;
					cout << "\n\tAmount of money : ";
					cin >> amount;
					if (amount > balance)
					{
						cout << "\n\tAmount > money" << endl;
					}
					else
					{
						cout << "\n\tNumber card : ";
						cin >> number;
						balance -= amount;
						cout << "\n\tYou have transferred money to your card number - " << number << "\tMoney - " << amount << "\n\t\t\tBalance = " << balance << endl;
					}
				}
				else if (choise == 2)
				{
					float amount = 0;
					int number = 0;
					cout << "\n\tAmount of money : ";
					cin >> amount;
					if (amount > balance)
					{
						cout << "\n\tAmount > money" << endl;
					}
					else
					{
						cout << "\n\tNumber number : ";
						cin >> number;
						balance -= amount;
						cout << "\n\tYou have transferred money to your phone number - " << number << "\tMoney - " << amount << "\n\t\t\tBalance = " << balance << endl;
					}
				}
				else
				{
					cout << "\n\tERROR" << endl;
				}
			}
			else if (choise == 2)
			{
				float amount = 0;
				cout << "\n\tAmount of money : ";
				cin >> amount;
				if (amount > balance)
				{
					cout << "\n\tAmount > money" << endl;
				}
				else
				{
					balance -= amount;
					cout << "\n\tBalance = " << balance << endl;
				}
			}
			else if (choise == 4)
			{
				cout << "\n\tBAY" << endl;
				system("pause");
				return 0;
			}
		}
	}
	else if (choise == 2)
	{
		times = 0;
		while (loyaltyLog == false)
		{
			if (times == 3)
			{
				cout << "\n\tYour card is locked!" << endl;
				system("pause");
				return 0;
			}
			loyaltyLog = IntroductionLog(auditArrLog, SIZE, arrLog);
			times++;
		}
		times = 0;
		while (loyaltyPh == false)
		{
			if (times == 3)
			{
				cout << "\n\tYour card is locked!" << endl;
				system("pause");
				return 0;
			}
			loyaltyPh = IntroductionPh(auditArrPh, SIZE, arrPh);
			times++;
		}
		while (true)
		{
			choise = Menu(balance);
			if (choise == 1)
			{
				cout << "\n\t1 - Transfer to card\t2 - Transfer to your phone\t3 - Exit\n\tEnter : ";
				cin >> choise;
				if (choise == 1)
				{
					float amount = 0;
					int number = 0;
					cout << "\n\tAmount of money : ";
					cin >> amount;
					if (amount > balance)
					{
						cout << "\n\tAmount > money" << endl;
					}
					else
					{
						cout << "\n\tNumber card : ";
						cin >> number;
						balance -= amount;
						cout << "\n\tYou have transferred money to your card number - " << number << "\tMoney - " << amount << "\n\t\t\tBalance = " << balance << endl;
					}
				}
				else if (choise == 2)
				{
					float amount = 0;
					int number = 0;
					cout << "\n\tAmount of money : ";
					cin >> amount;
					if (amount > balance)
					{
						cout << "\n\tAmount > money" << endl;
					}
					else
					{
						cout << "\n\tNumber number : ";
						cin >> number;
						balance -= amount;
						cout << "\n\tYou have transferred money to your phone number - " << number << "\tMoney - " << amount << "\n\t\t\tBalance = " << balance << endl;
					}
				}
				else
				{
					cout << "\n\tERROR" << endl;
				}
			}
			else if (choise == 2)
			{
				float amount = 0;
				cout << "\n\tAmount of money : ";
				cin >> amount;
				if (amount > balance)
				{
					cout << "\n\tAmount > money" << endl;
				}
				else
				{
					balance -= amount;
					cout << "\n\tBalance = " << balance << endl;
				}
			}
			else if (choise == 4)
			{
				cout << "\n\tBAY" << endl;
				system("pause");
				return 0;
			}
		}
	}
	else if (choise == 3)
	{
		cout << "\n\tBAY" << endl;
		system("pause");
		return 0;

	}
	else
	{
	cout << "\n\t\tERROR" << endl;
    }
	system("pause");
	return 0;
}