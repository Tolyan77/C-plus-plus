//Написати програму, яка отримує від користувача довільний набір cимволів, шифрує його та виводить на екран новоутворений рядок
//.Для шифрування скористатись звичайними арифметичними операціями++, --,
//збільшення або зменшення на якесь число тощо.Наприклад, при введенні ABА на екрані буде ВСВ.
#include<iostream>
using namespace std;
void Encryption(char *pS)
{
	int choise = 0, rozmir = 0, text = 0;
	int line = strlen(pS);
	cout << "What size do you want to text shift?\n1 - Right\n2 - Left\n\t\tEnter: ";
	cin >> choise;
	cout << "How many positions to shift?\n\t\tEnter: ";
	cin >> rozmir;
	if (choise == 1)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pS[i]) + rozmir < 90 && (int(pS[i]) >= 65 && int(pS[i]) <= 90) || int(pS[i]) + rozmir < 122 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
			{
				text = int(pS[i]) + rozmir;
				cout << char(text);
			}
			else if (int(pS[i]) + rozmir > 90 || int(pS[i]) + rozmir > 122)
			{
				if (int(pS[i]) + rozmir > 90 && (int(pS[i]) >= 65 && int(pS[i]) <= 90))
				{
					text = 97 + ((int(pS[i]) + rozmir) - 91);
					cout << char(text);
				}
				if (int(pS[i]) + rozmir > 122 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
				{
					text = 65 + ((int(pS[i]) + rozmir) - 123);
					cout << "\n\tResult : " << char(text);
				}
			}
		}
		cout << endl;
	}
	else if (choise == 2)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pS[i]) - rozmir > 65 && (int(pS[i]) >= 65 && int(pS[i]) <= 90) || int(pS[i]) - rozmir > 97 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
			{
				text = int(pS[i]) - rozmir;
				cout << char(text);
			}
			else if (int(pS[i]) - rozmir < 65 || int(pS[i]) - rozmir < 97)
			{
				if (int(pS[i]) - rozmir < 65 && (int(pS[i]) >= 65 && int(pS[i]) <= 90))
				{
					text = 123 - (rozmir - (int(pS[i]) - 65));
					cout << char(text);
				}
				if (int(pS[i]) - rozmir < 97 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
				{
					text = 91 - (rozmir - (int(pS[i]) - 97));
					cout << "\n\tResult : " << char(text);
				}
			}
		}
		cout << endl;
	}
}
void Decryption(char *pS)
{
	int choise = 0, rozmir = 0, text = 0;
	int line = strlen(pS);
	cout << "Where was it shift text?\n1. Right\n2. Left\n\t\tEnter: ";
	cin >> choise;
	cout << "How many positions to shift?\n\t\tEnter: ";
	cin >> rozmir;
	if (choise == 2)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pS[i]) + rozmir < 90 && (int(pS[i]) >= 65 && int(pS[i]) <= 90) || int(pS[i]) + rozmir < 122 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
			{
				text = int(pS[i]) + rozmir;
				cout << char(text);
			}
			else if (int(pS[i]) + rozmir > 90 || int(pS[i]) + rozmir > 122)
			{
				if (int(pS[i]) + rozmir > 90 && (int(pS[i]) >= 65 && int(pS[i]) <= 90))
				{
					text = 97 + ((int(pS[i]) + rozmir) - 91);
					cout << char(text);
				}
				if (int(pS[i]) + rozmir > 122 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
				{
					text = 65 + ((int(pS[i]) + rozmir) - 123);
					cout << "\n\tResult : " << char(text);
				}
			}
		}
		cout << endl;
	}
	else if (choise == 1)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pS[i]) - rozmir > 65 && (int(pS[i]) >= 65 && int(pS[i]) <= 90) || int(pS[i]) - rozmir > 97 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
			{
				text = int(pS[i]) - rozmir;
				cout << char(text);
			}
			else if (int(pS[i]) - rozmir < 65 || int(pS[i]) - rozmir < 97)
			{
				if (int(pS[i]) - rozmir < 65 && (int(pS[i]) >= 65 && int(pS[i]) <= 90))
				{
					text = 123 - (rozmir - (int(pS[i]) - 65));
					cout << char(text);
				}
				if (int(pS[i]) - rozmir < 97 && (int(pS[i]) >= 97 && int(pS[i]) <= 122))
				{
					text = 91 - (rozmir - (int(pS[i]) - 97));
					cout << "\n\tResult : " << char(text);
				}
			}
		}
		cout << endl;
	}
}
int main()
{
	int choise = 0;
	char str[255] = "",*pS = str;
	cout << "1. Encryption\t\t2. Decryption\n\t\tEnter :";
	cin >> choise;
	if (choise == 1)
	{
		cout << "Enter text: ";
		cin >> str;
		Encryption(pS);
	}
	else if (choise == 2)
	{
		cout << "Enter ciphertext: ";
		cin >> str;
		Decryption(pS);
	}
	system("pause");
	return 0;
}