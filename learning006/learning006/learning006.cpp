// learning006.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()

{
	int s1, s2, x, a, b;

	s1 = 0;
	s2 = 0;
	x = 0;

	cout << "Cate nr va avea sirul?" << endl;
	cin >> a;
	cout << "Insereaza sirul..." << endl;

	for (b = 1; b <= a; b ++)
	{
		cin >> x;
		if (x > s1)
		{
			s2 = s1;
			s1 = x;
		}
		else if (x > s2)
		{
			s2 = x;
		}
	}

	cout << "Cele mai maari doua nr sunt " << s2 << " si " << s1 << endl;
	
    return 0;
}

