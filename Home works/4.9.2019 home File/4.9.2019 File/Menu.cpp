#include "Menu.h"
#include <iostream>
using namespace std;
int Menu()
{
	int choise;
	cout << "\n\t1 - Addition of an array\t2 - Delete array\t3 - Paste item by position\t0 - Exit\n\tEnter : ";
	cin >> choise;
	return choise;
}
