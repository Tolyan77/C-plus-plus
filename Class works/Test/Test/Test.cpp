#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string path = "D:/db.text"; // Створюємо файл. Якщо не вказати шлях, створиться там, де компілиться програма.
	ifstream readFile; //ifstream читає файл
	readFile.open(path);
	if (!readFile.is_open())
	{
		cout << "Can't open file" << endl;
	}
	else
	{
		cout << "Works!" << endl;
		char data;

		while (!readFile.get(data))   //посимвольне зчитування
		{
			cout << data << endl;
		}
	}
	system("pause");
	return 0;
}