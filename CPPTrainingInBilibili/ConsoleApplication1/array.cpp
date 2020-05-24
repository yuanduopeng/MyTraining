// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//int * p = new int[10];
	int arrays[5][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12},
		{13,14,15}
	};
	int (*p2)[3] = arrays;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << *(*(p2 + i) + j) << ',';
		}
		cout << endl;
	}
	cout << &arrays[1][0] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << p2 + i << endl;
	}












	/*
	//		选择法排序
	int nums[] = { 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int);
	// 擂台变量
	int min = nums[0];		//假设最小值是数组第一个元素
	int minIndex = 0;
	int temp;
	for (int i = 0; i < numsLen - 1; i++)
	{
		min = nums[i];
		minIndex = i;
		for (int j = i + 1; j < numsLen - 1; j++)
		{
			if (nums[j] < min)
			{
				min = nums[j];
				minIndex = j;
			}
		}
		if (minIndex > i) 
		{
			nums[minIndex] = nums[i];
			nums[i] = min;
		}

	}
	cout << "after ranking : " << endl;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << endl;
	}
	*/




/*
	//		冒泡法排序
	int temp;
	int nums[] = { 15, 25, 90, 23, 9 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	*/

/*	
	//		数组的简单处理
	int nums[] = { 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int); //calculate lenth of nums
	int sum = 0;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << '\t';
	}
	cout << endl;
	for (int i = 0; i < numsLen; i++)
	{
		sum += nums[i];
	}
	cout << "sum of arry is " << sum << "\taverage is " << sum / numsLen << endl;

	int max = nums[0];
	int maxIndex = 0;
	for (int i = 1; i < numsLen; i++)
	{
		if (max < nums[i])
		{
			max = nums[i];
			maxIndex = i;
		}
	}
	cout << "max of array is: " << max << "\tmax index is :" << maxIndex;
	cout << endl;

	int jCount = 0, oCount = 0;
	for (int i = 1; i < numsLen; i++)
	{
		if (nums[i] % 2 == 0)
			oCount++;
		else
			jCount++;
	}
	cout << "jCount = " << jCount <<"\toCount = " << oCount << endl;

	int searchNum;
	int searchIndex = INT_MIN;
	cout << "input num searched :";
	cin >> searchNum;
	for (int i = 1; i < numsLen; i++)
	{
		if (nums[i] == searchNum)
		{
			searchIndex = i;
			break;
		}
	}/*
	if (searchIndex == INT_MAX)
		cout << "no result" << endl;
	else
		cout << searchNum << "\tIndex is " << searchIndex << endl;
*/


/*	const int N = 5;
	int nums[N];
	cout << "size of arry : " << sizeof(nums);
	for (int i = 0; i < N; i++)
	{
		cout << "please input the " << i + 1 << " element:";
		cin >> nums[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout << nums[i] << endl;
	}
	*/
}