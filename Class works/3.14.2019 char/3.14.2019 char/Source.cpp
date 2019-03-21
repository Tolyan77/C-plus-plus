#include<iostream>
using namespace std;
int main()
{
	char str = 'A';
	cout << "'A' = " << str << endl;
	cout << sizeof(char) << endl;
	
	setlocale(LC_ALL, "");
	char STRHELLO[] = "ПРИВІТ";
	cout << "'STRHELLO' = " << STRHELLO << endl;
	for (int i = 0; i <= 255; i++)
	{
		cout << "Symbol = " << i << " Charcode = " << (char)i << endl;
	}
	//Написати програму, яка отримує від користувача довільний набір цифр(кодів) та виводить на екран новоутворений рядок символів.Наприклад, при введенні цифр 65 66 65 на екрані буде ABA
	int number = 0;
	bool g = true;
	while (g == true)
	{
		cout << "\n\tEnter 300 to exit\n\tNumber 65 - 90 and 97 - 122\n\tEnter :";
		cin >> number;
		if (number >= 65 && number <= 90 || number >= 97 && number <= 122)
		{
			cout << "\n\t" << number << " = " << (char)number << endl;
		}
		else if (number == 300)
		{
			g = false;
		}
		else
		{
			cout << "ERROR!" << endl;
		}
	}




	cout << "\n\tEnter num : ";
	cin >> number;
	int *arr = new int[number];
	bool GG = true;
	while (g == true)
	{
		cout << "\n\tEnter 300 to exit\n\tNumber 65 - 90 and 97 - 122" << endl;
		for (int i = 0; i < number; i++)
		{
			cout << "\n\tEnter number arr #" << i << " = ";
			cin >> arr[i];
			if (arr[i] == 300)
			{
				g = false;
				system("pause");
				return 0;
			}
			else if (arr[i] < 65 || arr[i]>90 && arr[i] < 97 || arr[i]>122)
			{
				GG = false;
			}
		}
		if (GG == true)
		{
			for (int i = 0; i < number; i++)
			{
				cout << "\n\t" << arr[i] << " = " << (char)arr[i] << endl;
			}
		}
		else if (GG == false)
		{
			cout << "\n\tEERROR" << endl;
		}
	}
	/*Написати програму, яка отримує від користувача довільний набір cимволів та виводить на екран рядок кодів символів, по суті, закодований рядок.Наприклад, при введенні ABA на екрані буде 65 66 65.
		Примітка!Для вводу символів скористайтеся властивістю обєкта cin вводити кілька значень обночасно(cin >> a >> b;)

	char str[255];
	cout << "\n\tEnter char : ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		cout << "\t" << int(str[i]) << endl;
	}
*bool GG = true;
	while (g == true)
	{
		cout << "\n\tEnter 300 to exit\n\tNumber 65 - 90 and 97 - 122" << endl;
		for (int i = 0; i < number; i++)
		{
			cout << "\n\tEnter number arr #" << i << " = ";
			if (arr[i] == 300)
			{
				g = false;
				system("pause");
				return 0;
			}
			else if (arr[i] < 65 || arr[i]>90 && arr[i] < 97 || arr[i]>122)
			{
				GG = false;
			}
		}
		if (GG == true)
		{
			for (int i = 0; i < number; i++)
			{
				cout << "\n\t" << arr[i] << " = " << (char)arr[i] << endl;
			}
		}
		else if (GG == false)
		{
			cout << "\n\tEERROR" << endl;
		}
	}
	char name[255] = "";
	*/
	system("pause");
	return 0;
}