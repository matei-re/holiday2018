// training002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, s;
	cin >> x;
	s = 0;
	while (x != 0)
	{
		s = s * 10 + x % 10;
		x = x / 10;
	}
	cout << "Numarul inversat este " << s << endl;

    return 0;
}

