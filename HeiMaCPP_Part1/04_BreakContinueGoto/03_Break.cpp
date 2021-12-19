// 03_Break.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	// Break的使用
	// 1. Switch中
	// 2. 循环中或内循环中
	// 例1：
	int select = 0;
	cout << "请选择副本难度： 1简单 2适中 3困难" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "简单" << endl;
		break;
	case 2:
		cout << "适中" << endl;
		break;
	case 3:
		cout << "困难" << endl;
		break;
	default:
		break;
	}
	// 例2
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0 ; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			} 
			cout << "* ";
		}
		cout << endl;
	}

	// continue语句
	// 在循环中，调过未执行的语句，直接进入下一循环
	// 例：
	for (int x = 1; x <= 100; x++)
	{
		if (x % 2 == 0)
		{
			continue;
		}
		cout << x << "\t";
	}
	cout << endl;

	// goto语句
	// 执行到goto，就跳到标记位置
	cout << "1..,.,." << endl;
	cout << "2sadf" << endl;
	goto FLAG;
	cout << "3sdfds" << endl;
	cout << "4rfe" << endl;
	FLAG:
	cout << "5ert" << endl;

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
