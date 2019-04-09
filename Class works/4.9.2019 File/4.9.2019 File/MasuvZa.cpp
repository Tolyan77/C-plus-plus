#include "Masuv.h"
#include <iostream>
#include <ctime>
using namespace std;
void Masuv(int size,int *arr)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 200;
	}
}
