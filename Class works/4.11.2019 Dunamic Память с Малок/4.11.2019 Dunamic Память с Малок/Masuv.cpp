#include "Masuv.h"
#include <iostream>
using namespace std;
void MasuvVu(int *arr, int size)
{
	cout << "\n\tAddrs : " << *arr << endl;
	cout << "\n\tArr : ";
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}