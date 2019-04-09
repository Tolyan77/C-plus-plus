#include "Masuv.h"
#include <iostream>
using namespace std;
void MasuvVu(int size, int * arr)
{
	cout << "\n\tAddrs : " << *arr << endl;
	cout << "\n\tArr : ";
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}
