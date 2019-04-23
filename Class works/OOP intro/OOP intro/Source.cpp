#include <iostream>
#include <string>
using namespace std;
//class car {
//public:
//	string model;
//	float power;
//	string color;
//	int weight;
//	string Regnumber;
//	void ShowCarInfo()
//	{
//		cout << "\n\tModel : " << model << "\n\tPower : " <<power << "\n\tColor : " <<color << "\n\tWeight : " << weight << "\n\tRegnumber : " << Regnumber << endl;
//	}
//};
//int main()
//{
//	car mersedes;
//	mersedes.model = "Mersedes : A140";
//	mersedes.power = 1.6;
//	mersedes.color = "Metalic";
//	mersedes.weight = 1200;
//	mersedes.Regnumber = "VK 3305 ";
//	mersedes.ShowCarInfo();
//
//	car BMW;
//	BMW.model = "BMW : 555";
//	BMW.power = 2.2;
//	BMW.color = "Metalic";
//	BMW.weight = 1600;
//	BMW.Regnumber = "VK 7777 ";
//	BMW.ShowCarInfo();
//
//	/*cout << "\n\tModel : " << mersedes.model << "\n\tPower : " << mersedes.power << "\n\tColor : " << mersedes.color << "\n\tWeight : " << mersedes.weight << "\n\tRegnumber : " << mersedes.Regnumber << endl;
//	cout << "==================================================================" << endl;
//	mersedes.model = "GAZ 33";
//	cout << "\n\tModel : " << mersedes.model << endl;*/
//	system("pause");
//	return 0;
////}
//ООП
//Завдання 1. Класна робота
//Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y.Необхідно забезпечити :
//Введення координат точки користувачем
//Вивід інформації про точку на екран
//Можливість зміни будь - якої з координат на запит користувача(X або Y)

//class Cordinal {
//public:
//	int X;
//	int Y;
//	void ShowInfo()
//	{
//		cout << "\n\tX : " << X << "\tY : " << X << endl;
//	}
//};
//int main()
//{
//	Cordinal Point;
//	cin >> Point.X;
//	cin >> Point.Y;
//	Point.ShowInfo();
//	system("pause");
//	return 0;
//}

//ООП
//Завдання 2. Домашнє завдання
//Написати клас "Банківський рахунок" (Account), який містить :
//Номер рахунку
//Розмір коштів на рахунку
//Назва валюти рахунку(рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом : R, G, E, $ тощо
//Забезпечити можливість :
//Відкривати рахунок та первинно вносити гроші на рахунок
//Знімати гроші з рахунку
//Докладати гроші на рахунок

class Account {
public:
	int numberR;
	int money;
	string currency;
	void ShowInfo()
	{
		cout << "\n\tAccount number : " << numberR << "\n\tMoney : " << money << "\n\tcurrency : " << currency << endl;
	}
};
int main()
{
	int choise = 0, myMoney = 0, money = 0;
	bool open = false, exit1 = true, exit2 = true;
	string currerncyNew;
	while (exit1 == true)
	{
		Account PersonNew;
		cout << "\n\t1.Open my account\n\t2.Go to the account\n\t3.Open all account\n\t0.Exit\n\tEnter : ";
		cin >> choise;
		if (choise == 1)
		{	
			if (open != true)
			{
				system("CLS");
				cout << "\n\tEnter currerncy (R, G, E, $, etc.) : ";
				cin >> currerncyNew;
				PersonNew.numberR = 33333333;
				PersonNew.money = myMoney;
				PersonNew.currency = currerncyNew;
				PersonNew.ShowInfo();
				open = true;
			}
			else
			{
				cout << "\n\tYou have already created your account!!!" << endl;
			}
		}
		else if (choise == 2 && open == true)
		{
			system("CLS");
			while (exit2 == true)
			{
				PersonNew.currency = currerncyNew;
				PersonNew.ShowInfo();
				cout << "\n\t1.Add currency\n\t2.Take the currency\n\t0.Exit\n\tEnter :";
				cin >> choise;
				if (choise == 1)
				{
					cout << "\n\tEnter money : ";
					cin >> money;
					myMoney += money;
					PersonNew.money = myMoney;
				}
				else if (choise == 2)
				{
					cout << "\n\tEnter money : ";
					cin >> money;
					if (money > myMoney)
					{
						cout << "\n\t\t\t\t\tError" << endl;
					}
					else {
						myMoney -= money;
						PersonNew.money = myMoney;
					}
				}
				else if (choise == 0)
				{
					system("CLS");
					exit2 = false;
				}
				else {
					cout << "\n\tOkey, repeat" << endl;
				}
			}
		}
		else if (choise == 3)
		{
			system("CLS");
			Account Person1;
			Person1.numberR = 11111111;
			Person1.money = 10;
			Person1.currency = "GRN";
			Person1.ShowInfo();

			Account Person2;
			Person2.numberR = 22222222;
			Person2.money = 55;
			Person2.currency = "$";
			Person2.ShowInfo();
			if (open == true)
			{
				Account PersonNew;
				PersonNew.numberR = 33333333;
				PersonNew.money = myMoney;
				PersonNew.currency = currerncyNew;
				PersonNew.ShowInfo();
			}
		}
		else if (choise == 0)
		{
			system("CLS");
			exit1 = false;
		}
		else
		{
			system("CLS");
			cout << "\n\tOkey, repeat" << endl;
		}
	}
	cout << "\n\tBAY ;)" << endl;
	system("pause");
	return 0;
}

