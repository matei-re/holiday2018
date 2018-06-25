// training004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, k, x, p;
	cout << "Introdu nr!" << endl;
	cin >> m;
	cout << "Introdu baza!" << endl;
	cin >> k;
	for (int i = 1; i <= m; i++)
	{
		n = i;
		x = 0; // x o sa fie n in baza k
		p = 1; // puterea (1, 10, 100, ...)
		while (n)
		{
			x = n % k * p + x;
			p *= 10;
			n = n / k;
		}
		cout << "Nr " << i << " in baza " << k << " este " << x << endl;
	}
    return 0;
}

