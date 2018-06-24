// training003.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std;

// Se citeste un umar n. Apoi un sir de n numere. Sa se spuna daca
// in sirul celor n numere TOATE sunt negative.

int main()
{
	int n, m, x, y;
	bool neg;
	cin >> n;
	y = 0;
	neg = 0;
	for (x = 1; x <= n; x ++)   
	{
		cin >> m;
		if (m < 0)
		{
			y ++;
		}
	}
	if (y == n)
	{
		cout << "Dap." << endl;
	}
	else
	{
		cout << "NUUUUUUUU!" << endl;
	}
	
    return 0;
}