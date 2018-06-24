// training002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, x, s, y;
	cin >> a;
	cin >> b;
	if (a > b)
	{
		s = a;
		a = b;
		b = s;
	}
	for (y = a; y <= b; y ++) 
	{
		s = 0;
		x = y;
		while (x != 0)
		{
			s = s * 10 + x % 10;
			x = x / 10;
		}
		if (s == y)
		{
			cout << s << " ";
		}
	}
    return 0;
}