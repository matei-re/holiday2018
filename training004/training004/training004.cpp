// training004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x, p;
	cout << "Introdu nr!" << endl;
	cin >> n;
	x = 0;
	p = 1;
	while (n)
	{
		if (n % 2 == 0) {
			x = n % 10 * p + x;
			p *= 10;
		}
		n /= 10;
	}
	cout << "Nr fara cifre imapre este " << x << endl;

    return 0;
}

