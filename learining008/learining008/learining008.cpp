// learining008.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x, a, b, c;
	
	a = 0;
	b = 1;

	cout << "Cati termeni sa afisez??" << endl;
	cin >> n;
	cout << a << " " << b << " ";

	for (x = 3; x <= n; x++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}

    return 0;
}

