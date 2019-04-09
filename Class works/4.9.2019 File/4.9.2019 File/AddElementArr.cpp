#include "AddElementArr.h"
#include <iostream>
using namespace std;

int AddOneElem(int * arr, int size)
{
	int num = 0;
	cout << "\n\tEnter number : ";
	cin >> num;
	arr[size + 1] = num;
	return size + 1;
}
