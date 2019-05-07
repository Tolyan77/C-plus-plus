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

//= ====================================== = СТВОРЕННЯ ТЕКСТОВОГО ФАЙЛУ====================================================================================================================================

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	string path = "D:/db.text"; // Створюємо файл. Якщо не вказати шлях, створиться там, де компілиться програма.
//	ofstream writeFile; //ofsrteam записує файл, writeFile - назва об'єкта з голови
//	/*writeFile.open(path);*/ //якщо напишем так, буде перезаписувати;
//	writeFile.open(path, ofstream::app); //якщо напишем так, буде додавати;
//
//	if (!writeFile.is_open())
//	{
//	cout << "Can't open file" << endl;
//	}
//	else
//	{
//	cout << "Works!" << endl;
//	}
//	writeFile << "Hello\n";
//
//	writeFile.close(); // закриваємо екзешнік
//
//	system("pause");
//	return 0;
//}

//========================================ПОСИМВОЛЬНЕ ЗЧИТУВАННЯ ВМІСТУ ТЕКСТОВОГО ФАЙЛУ====================================================================================================================================

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	string path = "D:/db.text"; // Створюємо файл. Якщо не вказати шлях, створиться там, де компілиться програма.
//	ifstream readFile; //ifstream читає файл
//	readFile.open(path);
//	if (!readFile.is_open())
//	{
//	cout << "Can't open file" << endl;
//	}
//	else
//	{
//	cout << "Works!" << endl;
//	char data;
//	while (!readFile.get(data))   //посимвольне зчитування
//	{
//	cout << data << endl; 
//	}
//	}
//
//	system("pause");
//	return 0;
//}

//==========================================ЗЧИТУВАННЯ ВМІСТУ ТЕКСТОВОГО ФАЙЛУ ПО РЯДКАХ==================================================================================================================================

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//