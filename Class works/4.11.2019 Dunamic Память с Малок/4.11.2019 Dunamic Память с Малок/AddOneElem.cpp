#include "AddOneElem.h"
#include <iostream>
using namespace std;

void AddOneElem(int * arr, int size)
{
	int num = 0;
	cout << "\n\tEnter number : ";
	cin >> num;
	arr[size - 1] = num;
}