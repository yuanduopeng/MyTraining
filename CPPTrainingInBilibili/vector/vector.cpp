// vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> vecDouble = { 98.5, 67.9, 43.6, 24.9 };
	//向容器中插入数字
	vecDouble.push_back(100.8);  //在数组尾部插入数字
	//遍历1
	for (int i = 0; i < vecDouble.size(); i++)
	{
		cout << vecDouble[i] << endl;
	}
	
	//容器通用遍历方法：使用迭代器 iterator
	vector<double>::iterator it;	//得到迭代器对象 - 实际上是指针对象
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it)
	{
		cout << *it << endl;
	}

	//排序
	sort(vecDouble.begin(), vecDouble.end());
	reverse(vecDouble.begin(), vecDouble.end());
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it)
	{
		cout << *it << endl;
	}








	return 0;
}

