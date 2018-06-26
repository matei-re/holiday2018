// learning005.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, o, p;
	m = 0;
	o = 0;
	p = 0;
	cout << "Inserati nr!" << endl;
	cin >> n;
	while (n)
	{
		o = n % 10;
		n = n / 10;
		if (o > m)
		{
			p = 0;
			m = o;
		}
		if (o == m)
		{
			p++;
		}
	}
	cout << "Cea mai mare cifra este " << m << ". Cifra apare de " << p << " ori." << endl;
	return 0;
}

