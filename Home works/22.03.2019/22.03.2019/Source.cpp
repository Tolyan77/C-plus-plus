//1) ���� �����.�������� �� ����� ������� ������.��������� ��������� � ������ �����.
//2) ��������� ��������, ��� ����� � ������ �����, � ���� ���� ���������� : ������� ��������� �������(whitespaces), ��������, �����������,
//����� ����������.�������� ������������� �����������.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[255] = "Lokomotuv eto LOVE", symbol[255];
	cout << "\n\tSentence : ";
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
	cout << endl;
	cout << "\n\tEnter Symbol :";
	cin >> symbol;
	for (int i = 0; i < strlen(str); i++)
	{
		if (char(str[i]) == char(symbol[1]))
		{
			char(str[i]) == 32;
		}
	}
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
	system("pause");
	return 0;
}