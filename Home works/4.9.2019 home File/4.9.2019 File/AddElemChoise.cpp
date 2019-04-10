#include "AddElemChoise.h"
#include <iostream>
using namespace std;
int ArrChoise(int *&arr,int size)
{
	int after = 0, clearNum = 0, clearNum1 = 0, num = 0;
	int sizeAdd = size;
	int *arrAdd = new int[size + 1];
	cout << "\n\tEnter number : ";
	cin >> num;
	cout << "\n\tEnter after : ";
	cin >> after;
	for (int i = 0; i < size + 1; i++)
	{
		if (i - 1 > after)
		{
			arrAdd[i] = arr[i - 1];
		}
		else
		{
			arrAdd[i] = arr[i];
		}
	}
	arrAdd[after + 1] = num;
	delete[] arr;
	arr = arrAdd;
	return size + 1;
}
