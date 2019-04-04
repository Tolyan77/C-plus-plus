#include<iostream>
#include<string>
using namespace std;
struct Person {
	string name;
	string surname;
	string age;
	void ShowInfo()
	{
		cout << "\n\n\tName: " << name << "\tSurname: " << surname << "\tAge" << age << endl;
	}
};
void FillPerson(Person *person, int personCount)
{
	for (int i = 0; i < personCount; i++)
	{
		cout << "\n\tEnter name : ";
		cin >> person[i].name;
		cout << "\n\tEnter surname : ";
		cin >> person[i].surname;
		cout << "\n\tEnter age : ";
		cin >> person[i].age;
		person[i].ShowInfo();
	}
}
int main()
{
	int peopleCount = 0;
	cout << "\n\tEnter count people :";
	cin >> peopleCount;

	Person *person = new Person[peopleCount];
	cout << person << endl;
	FillPerson(person, peopleCount);
	system("pause");
	return 0;
}