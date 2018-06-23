// Training001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, divi, stich;
	cin >> x;
	stich = 0;
	for (divi = 2; divi <= x / 2; divi++) 
	{
		if (x % divi == 0)
		{
			stich ++;
			break;
		}
	}
	if (stich == 0 && x != 1)
	{
		cout << "Prim" << endl;
	}
	else
	{
		cout << "Compus" << endl;
	}
    return 0;
}

