#include "DeleteElem.h"
#include <iostream>
using namespace std;
int DeleteElem(int *arr, int size)
{
	int element = 0;
	cout << "\n\tEnter element : ";
	cin >> element;
	for (int i = 0; i < size; i++)
	{
		if (size == element)
		{
		}
		else if (size > element)
		{
			arr[i - 1] = arr[i];
		}
		else
		{
			arr[i] = arr[i];
		}
	}
	return size - 1;
}
