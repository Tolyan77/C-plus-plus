//Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів і всіма необхідними функціями. Використати вкладені структури (для адреси чи ПІБ). 
#include<iostream>
using namespace std;
struct PhoneBok {
	int number;
	char addr[255];
	char name[255];
	void Print() {
		cout << "\n\tNumber : " << number << "\n\tAddress : " << addr << "\n\tName : " << name << endl;
    }
};
int main()
{
	bool exit = false, open = true;
	int choise1 = 0, choise = 0;
	int const COUNT = 100;
	int count = 0;
	PhoneBok Person[COUNT];
	while (exit == false)
	{
		cout << "\n\t1. Write down\t2. Review\t3. Exit\n\t\tEnter :";
		cin >> choise;
		if (choise == 1)
		{
			cout << "\n\tEnter the number of subscribers (Max 100):";
			cin >> choise1;
			for (int i = count; i < choise1 + count; i++)
			{
				cout << "\n\tEnter number : ";
				cin >> Person[i].number;
				cout << "\n\tEnter address : ";
				cin >> Person[i].addr;
				cout << "\n\tEnter Name : ";
				cin >> Person[i].name;
			}
			count += choise1;		
		}
		else if (choise == 2)
		{
			cout << count << endl;
			for (int i = 0; i < count; i++)
			{
					Person[i].Print();
			}
		}
		else if (choise == 3)
		{
			exit = true;
			cout << "\n\tBAY" << endl;
		}
		else
		{
			cout << "\t\t\t\t\tRestart" << endl;
		}
	}
	system("pause");
	return 0;
}