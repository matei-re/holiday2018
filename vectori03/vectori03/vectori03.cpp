// vectori03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int v[100];
	int w[100];
	int n;
	int b;
	int a;

	b = 0;

	cout << "Cate elemente are vectorul?" << endl;
	cin >> n;
	cout << "Vectorul..." << endl;

	for (a = 0; a < n; a++)
	{
		cin >> v[a];
		
		if (v[a] % 2 == 0)
		{
			w[b] = v[a];
			b++;
		}
	}

	for (a = 0; a < b; a++)
	{
		cout << w[a] << " ";
	}

    return 0;
}

