// vectori05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int v[100];
	int n;
	int x;

	cout << "nr elemente vector:" << endl;
	cin >> n;
	cout << "vectorul:" << endl;

	for (int a = 0; a < n; a++)
	{
		cin >> v[a];
	}

	for(int a = 0; a < n; a++)
	{
		if (v[a] % 2 == 0)
		{
			for (int b = a; b < n; b++)
			{
				v[b] = v[b + 1];
			}
			
			n--;
		}
	}

	for (int a = 0; a < n; a++)
	{
		cout << v[a] << " ";
	}
    return 0;
}

