// learning010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, o, x, a, b;

	m = 1;
	o = 1;

	cout << "Cate caractere are sirul..." << endl;
	cin >> n;
	cout << "Insereaza sirul..." << endl;
	cin >> a;

	for (x = 2; x <= n; x++)
	{
		cin >> b;

		if (a == b)
		{
			o++;
			
			if (o > m)
			{
				m = o;
			}
		}
		else
		{
			o = 1;
		}

		a = b;
	}
	
	cout << endl;
	cout << m << endl;

    return 0;
}