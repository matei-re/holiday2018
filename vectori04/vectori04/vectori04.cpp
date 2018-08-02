// vectori04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int v[100];
	int n;
	int k;

	cout << "Hello world." << endl;
	cout << "Elements no.:" << endl;
	cin >> n;
	cout << "v:" << endl;

	for (int a = 0; a < n; a++)
	{
		cin >> v[a];
	}

	cout << "What element should I exterminate? Insert its position." << endl;
	cin >> k;
	cout << ". . ." << endl;
	cout << endl;
	cout << ". . ." << endl;
	cout << endl;
	cout << "Extermination succesfully finished." << endl << "Here are the remains:" << endl;

	for (int a = k; a < n; a++)
	{
		v[a] = v[a + 1];
	}

	n--;

	for (int a = 0; a < n; a++)
	{
		cout << v[a] << " ";
	}

	return 0;
}

