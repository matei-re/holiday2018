// training007.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x, n2, a, b;
	// n este nr 
	// n2 este copia lui n
	// a este cifra curenta
	// x este nr final

	cout << "Numarul" << endl;
	cin >> n;
	n2 = n;

	while (n)
	{
		a = n % 10;

		for (b = 9; b >= 0; b--)
		{
			if (b == a)
			{
				x = x * 10 + b;
			}
		}

		n /= 10;
	}


	cout << "Cel mai mare nr format din cifrele nr dat este " << x << endl;

    return 0;
}