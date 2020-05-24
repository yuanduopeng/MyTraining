#pragma once

#include <iostream>

using namespace std;

void show(double(*)[5], int);

void show(double(*arrs)[5], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arrs[i][j] << "\t";
		}
		cout << endl;
	}
}