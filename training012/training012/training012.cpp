// training012.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, n;

	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				n = 10001 * a + 1010 * b + 100 * c;
				cout << n << " ";
			}
		}
	}

    return 0;
}

