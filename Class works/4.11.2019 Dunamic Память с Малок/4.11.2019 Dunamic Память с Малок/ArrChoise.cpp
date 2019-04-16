#include "ArrChoise.h"
#include <iostream>
using namespace std;
void ArrChoise(int *&arr, int size)
{
	int after = 0, clearNum = 0, clearNum1 = 0, num = 0;
	int *arrAdd = new int[size];
	cout << "\n\tEnter number : ";
	cin >> num;
	cout << "\n\tEnter after index : ";
	cin >> after;
	for (int i = 0; i < size; i++)
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
	free(arr);
	arr = arrAdd;
}