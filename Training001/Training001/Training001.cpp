// Training001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, x, divi, stich, sid;
	cin >> a;
	cin >> b;

	if (a > b)
	{
		sid = a;
		a = b;
		b = sid;
	}
	
	for (x = a; x <= b; x ++)
	{
		stich = 0;
		for (divi = 2; divi <= x / 2; divi++)
		{
			if (x % divi == 0)
			{
				stich++;
				break;
			}
		}
		if (stich == 0 && x != 1)
		{
			cout << x << " ";
		}
	}

	return 0;
}

