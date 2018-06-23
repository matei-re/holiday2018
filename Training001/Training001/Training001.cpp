// Training001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, divi, stich;
	cin >> x;
	for (divi = 2; divi <= x / 2; divi++) 
	{
		if (x % divi == 0)
		{
			stich ++;
			break;
		}
	}
    return 0;
}

