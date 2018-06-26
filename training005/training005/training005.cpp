// training005.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Se citeste n. Apoi un sir de n nr. Sa se spuna daca in sir exista
// sau nu cel putin nr prim. 

int main()
{
	int n, m, p, o, d, c; 
	// n e nr de nr din sir
	// m retine nr de ordine
	// p informeaza daca nr e prim sau nu
	// o reprezinta nr curent
	// d de la divizor
	// c contorizeaza divizorii

	p = 0;

	cout << "Introdu nr de nr pe care o sa il aiba sirul!" << endl;
	cin >> n;
	cout << "Introdu sirul!" << endl;

	for (m = 1; m <= n; m++)
	{
		cin >> o;
		c = 0;
		for (d = 2; d <= o / 2; d++)
		{
			if (o % d == 0) 
			{
				c++;
			}
		}
		if (c == 0) 
		{
			p++;
		}
	}

	if (p == 0)
	{
		cout << "In sir sunt numai nr compuse." << endl;
	}
	else
	{
		cout << "Este ce putin un nr prim in sir." << endl;
	}

    return 0;
}