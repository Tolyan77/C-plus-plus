#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
//	cout << "========================================" << endl;
	//string path = "D:/db.txt";
	//ofstream writeFile;
	//writeFile.open(path,ofstream::app);

	//if (!writeFile.is_open())
	//{
	//	cout << "\n\tCant open file" << endl;
	//}
	//else
	//{
	//	cout << "\n\tWorks!" << endl;
	//	writeFile << "\tHello Kaban Teleban" << endl;
	//}
	//writeFile.close();
	///*of-записує
	//if- показує*/
	///*cout << "========================================" << endl;
	//string path = "D:/db.txt";
	//ifstream readFile;
	//readFile.open(path);
	//if (!readFile.is_open())
	//{
	//		cout << "\n\tCant open file" << endl;
	//}
	//else
	//{
	//	string Data;
	//	while (!readFile.eof())
	//	{
	//		getline(readFile, Data);
	//		cout << Data << endl;
	//	}
	//}
	//readFile.close();*/
	string name, surname, date, contact, adress;
	string path = "D:/Contact.txt";
	
	bool exit = false;
	int choise = 0;
	while (exit == false)
	{
		
		cout << "\n\t1. Add user\t2.See user\t0. Exit\n\tEnter : ";
		cin >> choise;
		if (choise == 1)
		{
			ofstream ContactFile;
			ContactFile.open(path, ofstream::app);
			if (!ContactFile.is_open())
			{
				cout << "\n\tCant open file" << endl;
			}
			else
			{
				
				cout << "Enter name:";
				cin >> name;
				cout << "Enter surname:";
				cin >> surname;
				cout << "Enter contact:";
				cin >> contact;
				cout << "Enter date:";
				cin >> date;
				cout << "Enter adress:";
				cin >> adress;
				ContactFile << name << "\t";
				ContactFile << surname << "\t";
				ContactFile << contact << "\t";
				ContactFile << date << "\t";
				ContactFile << adress << "\t";
				ContactFile << endl;
			}
			ContactFile.close();
		}
		else if (choise == 2)
		{
			string path = "D:/Contact.txt";
			ifstream readFile;
			readFile.open(path);
			if (!readFile.is_open())
			{
				cout << "\n\tCant open file" << endl;
			}
			else
			{
				string Data;
				while (!readFile.eof())
				{
					getline(readFile, Data);
					cout <<"\n\t"<< Data << endl;
				}
			}
			readFile.close();
		}
		else if (choise == 0)
		{
			exit = true;
		}
		else
		{
			cout << "\n\tERROR" << endl;
		}
	}
	system("pause");
	return 0;
}