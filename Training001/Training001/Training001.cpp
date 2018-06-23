// Training001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, divi;
	cin >> x;
	for (divi = 1; divi <= x; divi++) 
	{
		if (x % divi == 0)
		{
			cout << divi << " ";
		}
	}
    return 0;
}

