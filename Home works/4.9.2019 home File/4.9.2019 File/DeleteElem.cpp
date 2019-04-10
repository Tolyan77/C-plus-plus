#include "DeleteElem.h"
#include <iostream>
using namespace std;
int DeleteElem(int *arr, int size)
{
	int element = 0, clearNum = 0;
	cout << "\n\tEnter element : ";
	cin >> element;
	for (int i = 0; i < size; i++)
	{
		if (i >= element)
		{
			clearNum = arr[i+1];
			arr[i] = clearNum;
		}
		else
		{
			clearNum = arr[i];
			arr[i] = clearNum;
		}
	}
	return size - 1;
}
