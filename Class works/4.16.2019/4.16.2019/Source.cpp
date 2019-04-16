#include <iostream>
#include <string>
using namespace std;

//struct Person {
//	string name;
//	unsigned int age : 8;
//};
//
//int main()
//{
//	Person Bill;
//	Bill.name = "Bill";
//	Bill.age = 256;
//	cout << "\n\tName : " << Bill.name << "\tAge : " << Bill.age << endl;
//
//	system("pause");
//	return 0;
//}
//


//
//Створити структуру з бітовими полями Час(години.хвилини, секунди).Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури.Визначити функції :
//заповнення об’єкта структури з клавіатури
//вивід  об’єкта структури  на екран

struct Time {
	unsigned int age : 11;
	unsigned int hour : 5;
	unsigned int min : 6;
	unsigned int sec : 6;
};
int main()
{
	int age = 0, hour = 0, min = 0, sec = 0;
	Time All;
	cout << "\n\tAge : ";
	cin >> age;
	cout << "\n\tHour : ";
	cin >> hour;
	cout << "\n\tMin : ";
	cin >> min;
	cout << "\n\tSec : ";
	cin >> sec;
	All.age = age;
	All.hour = hour;
	All.min = min;
	All.sec = sec;
	cout << "\n\t" << All.age << "\t" << All.hour << " : " << All.min << " : " << All.sec << endl;
	system("pause");
	return 0;
}
