#include<iostream>
using namespace std;
int main()
{
	int *pGG = new int;
	*pGG = 22;
	cout << *pGG << "\t" << pGG << endl;

	system("pause");
	return 0;
}