// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int v[100];
	int n;
	int c;

	c = 0;

	cout << "Cate elemente sunt in sir?" << endl;
	cin >> n;
	cout << "Insereaza sirul:" << endl;

	for (int a = 0; a < n; a++)
	{
		cin >> v[a];
	}

	for (int x = 0; x < n; x++)
	{
		for (int y = x + 1; y < n; y++)
		{
			if (v[x] == v[y])
			{
				c++;
			}
		}
	}

	if (c == 0)
	{
		cout << "Elementele sunt distincte 2 cate 2" << endl;
	}

	if (c > 0)
	{
		cout << "Elementele nu sunt distincte 2 cate 2" << endl;
	}

    return 0;
}