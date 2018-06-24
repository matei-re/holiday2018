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
		s += (x % 10);
		x = x / 10;
	}
	cout << "Suma cifrelor numaului dat este de " << s << endl;

    return 0;
}

