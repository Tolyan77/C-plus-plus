//1) Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.
//2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику : кількість пробільних символів(whitespaces), 
//голосних, приголосних, знаків пунктуації.Введення передбачається англомовним.

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char str[255] = "Lokomotuv eto LOVE", test[255], symbol[255];
//	cout << "\n\tSentence : " << str << endl;
//	cout << "\n\tEnter delete symbol :";
//	cin >> symbol;
//	for (int i = 0, j = 0; i < strlen(str); i++, j++)
//	{
//		if (int(str[i]) == int(symbol[0]) && int(str[i + 1]) != int(symbol[0]))
//		{
//			j++;
//			str[i] = str[j + 1];
//		}
//		else {
//			str[i] = test[j];
//		}
//	}
//	cout << "\n\tSentence : " << str << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[255], del[255];
//	bool delet = false;
//	cout << "\n\tEnter text :";
//	cin.getline(str, 255);
//	cout << "\n\tEnter letter delete :";
//	cin >> del;
//	int dele = int(del[0]),leng = strlen(str);
//	for (int i = 0; i < leng + 1; i++)
//	{
//		if (int(str[i]) == dele)
//		{
//			delet = true;
//			continue;
//		}
//		else if (delet == true && int(str[i]) != dele)
//		{
//			if (i == leng)
//			{
//				str[leng - 1] = '\0';
//			}
//			else
//			{
//				str[i+1] = str[i];
//			}
//		}
//		else if (delet != true)
//		{
//			str[i] = str[i];
//		}
//	}
//	cout << "\n\t" << str << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	char str[255], del[255];
	bool delet = false;
	cout << "\n\tEnter text :";
	cin.getline(str,255);
	cout << "\n\tEnter letter delete :";
	cin >> del;
	int dele = int(del[0]);
	int leng = strlen(str);
	for (int i = 0; i < leng+1; i++)
	{
		if (int(str[i]) == dele)
		{
			delet = true;
			cout << "Popav1" << endl;
			continue;
		}
		if (delet != true)
		{
			str[i] = str[i];
			cout << "Popav4" << endl;
		}
		if (delet == true && i == leng)
		{
			str[leng - 1] = '\0';
			cout << "Popav2" << endl;
		}
		else
		{
			str[i-1] = str[i];
			cout << "Popav3" << endl;
		}
	}
	cout << str;
	system("pause");
	return 0;
}
