#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string path = "D:/db.text"; 
	ifstream readFile; 
	readFile.open(path);
	char name[255], COD[4], NameCont[255], CODCont[4];
	int i = 0, j = 0;
	cout << "\n\tEnter your name : ";
	cin >> name;
	cout << "\n\tEnter code (4 - numbers) : ";
	cin >> COD;
	char data;
	bool exit = true, control = true;
	while (readFile.get(data)) {
		NameCont[j] = data;
		if (int(NameCont[j]) == 32)
		{
			break;
		}
		j++;
	}
	while (exit == true)
	{
		if (name[i] == NameCont[i])
		{
			i++;
		}
		else if (NameCont[i] == 32)
		{
			cout << "\n\tName wride" << endl;
			i++;
		}
		else
		{
			control = false;
			exit = false;
		}
	}
	i = 0;
	while (readFile.get(data)) {
		
		if (int(data[i]) == 32) {
			cout << data;
			i++;
		}
		else
		{
			break;
		}
	}
	//int(nameOr[i])
	system("pause");
	return 0;
}

