// learning005.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, o;
	m = 0;
	o = 0;
	cout << "Inserati nr!" << endl;
	cin >> n;
	while (n)
	{
		o = n % 10;
		n = n / 10;
		if (o > m)
		{
			m = o;
		}
	}
	cout << "Cea mai mare cifra este " << m << endl;
	return 0;
}

