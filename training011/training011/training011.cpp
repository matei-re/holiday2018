// training011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main()
{
	int n, m;
	cout << "Pariaza: 0 sau 1??" << endl;
	cin >> n;
	srand(time(NULL));
	int a = rand();
	m = a % 2;
	if (n == m)
	{
		cout << "Ai castigat!!" << endl;
	}
	else
	{
		cout << "Ai pierdut :(" << endl;
	}

    return 0;
}

