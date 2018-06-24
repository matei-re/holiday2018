// training003.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std;

// Se citeste un umar n. Apoi un sir de n numere. Sa se spuna daca
// in sirul celor n numere exista cel putin un numar negativ.

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
			neg = 1;
		}
	}
	if (neg == 1)
	{
		cout << "Dap." << endl;
	}
	else
	{
		cout << "NUUUUUUUU!" << endl;
	}
	
    return 0;
}