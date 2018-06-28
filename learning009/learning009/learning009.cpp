// learning009.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, x, y_n;

	y_n = 0;

	cout << "Cate caractere vor fi in sir?" << endl;
	cin >> n;
	cout << "Sirul..." << endl;
	cin >> b;

	for (x = 2; x <= n; x++)
	{
		cin >> a;

		if (a < b)
		{
			y_n++;
		}

		b = a;
	}

	if (y_n == 0)
	{
		cout << "Sirul este crescator!" << endl;
	}
	else
	{
		cout << "Sirul nu e crescator..." << endl;
	}

    return 0;
}