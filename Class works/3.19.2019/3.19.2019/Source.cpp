//Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?  
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//int main()
//{
//	int a = 0, o = 0;
//	char str[255];
//	cout << "Enter char :";
//	cin >> str;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (int(str[i]) == 97)
//		{
//			a++;
//		}
//		else if (int(str[i]) == 111)
//		{
//			o++;
//		}
//	}
//	if (a > o)
//	{
//		cout << "Letter more then a !" << endl;
//	}
//	else	if (a < o)
//	{
//		cout << "Letter more then o !" << endl;
//	}
//	else 
//	{
//		cout << "Letter a == o " << endl;
//	}
//	system("pause");
//	return 0;
//}
//Вводиться рядок.Порахувати кількість латинських букв, цифр та розділових знаків у рядку.
//int main()
//{
//	int letter = 0, numbers = 0, znaki = 0;
//	char str[255];
//		cout << "Enter char :";
//		cin >> str;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (int(str[i]) > 64 && int(str[i]) < 91 || int(str[i]) > 96 && int(str[i]) < 123)
//			{
//				letter++;
//			}
//			else if (int(str[i]) > 47 && int(str[i]) < 58)
//			{
//				numbers++;
//			}
//			else
//			{
//				znaki++;
//			}
//		}
//		cout << "\n\tLetter :" << letter << "\n\tNumbers :" << numbers << "\n\tZnaki :" << znaki << endl;
//	system("pause");
//	return 0;
//}
//Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.
//int main()
//{
//	char str[255];
//		cout << "Enter char :";
//		cin >> str;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (int(str[i]) > 64 && int(str[i]) < 91)
//			{
//				str[i] = str[i] + 32;
//			}
//			else if (int(str[i]) > 96 && int(str[i]) < 123)
//			{
//				str[i] = str[i] - 32;
//			}
//		}
//		cout << "\n\t" << str << endl;
//	system("pause");
//	return 0;
//}
//int main()		cout << int(str[i]) << endl;
//{
//	string str = "Hello ";
//	string str1 = "Word!";
//	string res = str + " " + str1;
//	cout << res << endl;
//	system("pause");
//		return 0;
//}
////int Strlength(string *str)
////{
////
////	int counter = 0;
////	while (str[counter] != 0)
////	{
////		counter++;
////	}
////	return counter;
////}
////int main()
////{
////	char str1[255];
////	char str2[255];
////	cout << "\n\tEnter text 1:";
////	cin >> str1;
////	cout << "\n\tEnter text 2:";
////	cin >> str2;
////	strcat_s(str1, str2);
////	cout << str1 << endl;
////	//cout << Strlength(str) << endl;
////	system("pause");
////	return 0;
////}
//string GetDataFromNBU(){
//	return "Data from NBU";
//}
//string GetDataFromPB() {
//	return "Data from PB";
//}
//string GetDataFromSW() {
//	return "Data from SW";
//}
//void ShowInfo(string(*funcPTR)()) {
//	cout << funcPTR() << endl;
//}
//int main()
//{
//	ShowInfo(GetDataFromSW);
//	system("pause");
//	return 0;
//}
//Написати 2 логічні функції : bigger(int, int) – повертає true, якщо перше число більше другого, інакше повертає false; функція smaller(int, int) – навпаки, повертає true, 
//якщо перше менше другого.Написати функцію sort_arr(int *array, int size, bool(*f)(int, int)) для впорядкування масиву.Функція отримує масив та вказівник на логічну функцію, 
//яка буде задавати порядок сортування.Так, наприклад, при передачі у функцію sort_arr() третім аргументом адреси функції bigger, масив впорядкується по зростанню,
//а при передачі адреси функції smaller, масив впорядкується по спаданню.
//void Fill(int arr[],int SIZE) {
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void Print (int arr[], int SIZE){
//	cout << "\n\tArr :";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << "\t" << arr[i];
//	}
//	cout << endl;
//}
//bool Bigger(int one, int two)
//{
//	bool GG;
//	one = rand() % 100;
//	two = rand() % 100;
//	if (one < two)
//	{
//		GG = true;
//	}
//	else if (one > two)
//	{
//		GG = false;
//	}
//	if (one = two)
//	{
//		GG = true;
//	}
//	return GG;
//}
//bool Smaller(int one, int two)
//{
//	bool GG;
//	one = rand() % 100;
//	two = rand() % 100;
//	if (one > two)
//	{
//		GG = true;
//	}
//	else if (one < two)
//	{
//		GG = false;
//	}
//	if (one = two)
//	{
//		GG = false;
//	}
//	return GG;
//}
//void Sort_arr(int *arr, int const SIZE, bool(*f)(int a, int b))
//{
//	bool GG;
//	GG = f(0, 0);
//	if (f == Bigger)
//	{
//		if (GG = true)
//		{
//			int tmp = 0;
//			for (int i = 0; i < SIZE; i++) {
//				for (int j = -1; j < SIZE; j++) {
//					if (arr[i] < arr[j + 1]) {
//						tmp = arr[j + 1];
//						arr[j + 1] = arr[i];
//						arr[i] = tmp;
//					}
//				}
//			}
//		}
//		else
//		{
//			int tmp = 0;
//			for (int i = 0; i < SIZE; i++) {
//				for (int j = -1; j < SIZE - 1; j++) {
//					if (arr[i] > arr[j + 1]) {
//						tmp = arr[j + 1];
//						arr[j + 1] = arr[i];
//						arr[i] = tmp;
//					}
//				}
//			}
//		}
//	}
//	else
//	{
//		if (GG == false)
//		{
//			int tmp = 0;
//			for (int i = 0; i < SIZE; i++) {
//				for (int j = -1; j < SIZE; j++) {
//					if (arr[i] < arr[j + 1]) {
//						tmp = arr[j + 1];
//						arr[j + 1] = arr[i];
//						arr[i] = tmp;
//					}
//				}
//			}
//		}
//		else
//		{
//			int tmp = 0;
//			for (int i = 0; i < SIZE; i++) {
//				for (int j = -1; j < SIZE - 1; j++) {
//					if (arr[i] > arr[j + 1]) {
//						tmp = arr[j + 1];
//						arr[j + 1] = arr[i];
//						arr[i] = tmp;
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int const SIZE = 7;
//	int arr[SIZE];
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	Sort_arr(arr, SIZE, Bigger);
//	Print(arr, SIZE);
//	Sort_arr(arr, SIZE, Smaller);
//	Print(arr, SIZE);
//	system("pause");
//	return 0;
//}
//Задано рядок, що складається із символів.Символи поєднуються в слова.Слова відокремлюються одним або декількома пробілами.Наприкінці тексту ставиться крапка.Текст містить не більш 255 символів
int main()
{
	char str[255] = "";
	cout << "\n\tEnter words instead of a space, write down the underline:";
	cin.getline(str, 255);
	for (int j = 0; j < 255; j++)
	{
		if (char(str[i]) == 32)
		{
			if (char(str[i - 1]) != 32) {
				cout << endl;
			}
		}
        else  {
			cout << str[i];
         }
		i++;
	}
	
	system("pause");
	return 0;
}
