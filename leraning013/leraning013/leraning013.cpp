// leraning013.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, a, b, c;

	cin >> n;

	for (a = 0; a <= n - 2; a++)
	{
		for (b = a + 1; b <= n - 1; b++)
		{
			c = n - (a + b);

			if (c > b)
			{
				cout << a << " " << b << " " << c << endl;
			}
		}
	}

    return 0;
}

