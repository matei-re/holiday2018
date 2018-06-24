// training002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, s, y;
	cin >> x;
	s = 0;
	y = x;
	while (x != 0)
	{
		s = s * 10 + x % 10;
		x = x / 10;
	}
	if (y == s)
	{
		cout << "Numarul e palindrom" << endl;
	}
	else
	{
		cout << "Numarul nu e palindrom" << endl;
	}

    return 0;
}

