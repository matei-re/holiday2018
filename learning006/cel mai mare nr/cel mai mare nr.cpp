// cel mai mare nr.cpp : Defines the entry point for the console 
// application.

// Se da un nr. Sa se afiseze  cel mai mare nr care se poate forma 
// din cifrele sale. 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, x, o;

	cout << "Nr." << endl;
	cin >> n;

	m = 0;

	for (x = 9; x >= 0; x--)
	{
		o = n;
		while (o)
		{
			if (x == o % 10)
			{
				m = m * 10 + x;
			}
			o /= 10;
		}
	}
	
	cout << "Cel mai mare nr  format cu cifrele lui " << n << " este " << m << endl;

    return 0;
}