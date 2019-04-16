#include "DeleteElem.h"
#include <iostream>
using namespace std;
void DeleteElem(int *&arr, int &size)
{
	int element = 0;
	int *arrAdd = new int[size - 1];
	cout << "\n\tEnter after index : ";
	cin >> element;
	/*for (int i = 0; i < element; i++)
	{
		if (i < element)
		{
			arrAdd[i] = arr[i];
		}
		else if (i > element)
		{
			arrAdd[i - 1] = arr[i];
		}
	}*/
	for (int i = 0; i < element; i++)
	{
		arrAdd[i] = arr[i];
	}

	for (int i = element; i < size; i++)
	{
		arrAdd[i] = arr[i+1];

	}
	size--;
	free(arr);
	arr = arrAdd;
}