#include "DeleteElem.h"
#include <iostream>
using namespace std;
void DeleteElem(int *&arr, int size)
{
	int element = 0;
	int *arrAdd = (int*)calloc(size, sizeof(int));
	cout << "\n\tEnter after index : ";
	cin >> element;
	for (int i = 0; i < size; i++);
	{
		if (i > element)
		{
			arrAdd[i] = arr[i + 1];
		}
		else if (i == size - 1)
		{
			arrAdd[i] = arr[size];
		}
		else
		{
			arrAdd[i] = arr[i];
		}
	}
	free(arr);
	arr = arrAdd;
}
