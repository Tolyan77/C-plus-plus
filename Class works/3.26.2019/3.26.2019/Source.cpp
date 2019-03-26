#include<iostream>
#include<string>
using namespace std;
//struct Dog {
//	string name;
//	string breed;
//	int age;
//	string Description;
//	void ShowInfo()
//	{
//		cout << "\n\tName: " << name << "\tBrees: " << breed << "\tAge: " << age << endl;
//	}
//	void SetDescription(string Desc)
//	{
//		Description = Desc;
//    }
//	void ShowDescription()
//	{
//		cout << "\n\tDescription: " << Description << endl;
//	}
//};
//int main()
//{
//	string Des;
//	cout << "\n\tEnter Description: ";
//	cin >> Des;
//
//	/*Dog Tuzik;
//	Tuzik.name = "Tuzik";
//	Tuzik.breed = "Taxa";
//	Tuzik.age = 150;
//	`Tuzik.ShowInfo();
//	Tuzik.age = 15;
//	Tuzik.ShowInfo();*/
//
//	Dog Sobaka;
//	Sobaka.name = "Kaban";
//	Sobaka.breed = "Vivcharka";
//	Sobaka.age = 150;
//
//	Sobaka.SetDescription(Des);
//	Sobaka.ShowInfo();
//	Sobaka.ShowDescription();
//	//Створити структуру, яка описує тварину(назва, клас, кличка).Створити функції для роботи з цією структурою(заповнення об’єкта, вивід на екран даних про об’єкт, функція «подати голос»).
//
//	system("pause");
//	return 0;
//}
struct Dog {
	string name;
	string breed;
	string Klichka;
	string Description;
	void ShowInfo()
	{
		cout << "\n\tName: " << name << "\tBrees: " << breed << "\tAge: " << Klichka << endl;
	}
};
int main()
{
	Dog Sobaka;
	Sobaka.name = "Vivharka";
	Sobaka.breed = "2 klass";
	Sobaka.Klichka = "Twich";
	Sobaka.ShowInfo();
	system("pause");
	return 0;
}