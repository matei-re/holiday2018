// training007.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x, a, b, n2, c;
	// n este nr 
	// a este cifra curenta
	// x este nr final
	// n2 este copie a lui n
	// c contorizeaza

	cout << "Numarul" << endl;
	cin >> n2;

	x = 0;

	for (b = 9; b >= 0; b--)
	{
		c = 0;
		n = n2;

		while (n)
		{
			a = n % 10;

			if (a == b)
			{
				c++;
			}

			n /= 10;
		}
		if (c > 0)
		{
			x = x * 10 + b;
		}
	}

	cout << "Cel mai mare nr format din cifrele nr dat este " << x << endl;

    return 0;
}