// Project_MyPrincess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <Windows.h>
#include <iomanip>
#include <ctime>   //随机数

using namespace std;

int main()
{
	///爹名
	string value_father_name;
	/*女儿名*/
	string value_daughter_name;
	/*女儿生日 月&日*/
	int value_birth_month;
	int value_birth_date;
	///基本信息数组: 体力、智力、魅力、道德、气质
	array<int, 5> value_array_baseinfo;
	/*星座*/
	string value_daughter_constell;
	///星座二位数组
	string constell_names[12][2]=
	{
	{ "山羊座","水瓶座" },{ "水瓶座","双鱼座" },{ "双鱼座","白羊座" },{ "白羊座","金牛座" },		//1 2 3 4
	{ "金牛座","双子座" },{ "双子座","巨蟹座" },{ "巨蟹座","狮子座" },{ "狮子座","处女座" },		//5 6 7 8
	{ "处女座","天秤座" },{ "天秤座","天蝎座" },{ "天蝎座","射手座" },{ "射手座","山羊座" }		//9 10 11 12
	};
	///各月份跨星座日期
	int constell_dates[]{ 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22 };
	int choice, temp1, temp2, temp3;
	//1.给父女取名
	cout << "父亲的姓名：";
		cin >> value_father_name;
	cout << "女儿的姓名：";
		cin >> value_daughter_name;

	//2.为女儿录入初始信息
	cout << "女儿的生日（MM DD）：";
	cin >> value_birth_month >> value_birth_date ;

	if (constell_dates[value_birth_month - 1] > value_birth_date)
	{
		value_daughter_constell = constell_names[value_birth_month - 1][0];
	}
	else
	{
		value_daughter_constell = constell_names[value_birth_month - 1][1];
	}
	
	cout << "女儿的信息：";
	cout << "姓名：" << value_daughter_name << endl;
	cout << "生日：1997-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "星座：" << value_daughter_constell << endl;

	//		根据女儿星座，设置游戏基本参数（体力、智力、魅力、道德、气质）
	if (value_daughter_constell == "白羊座")
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 18;
		value_array_baseinfo[2] = 18;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 14;
	}
	else if (value_daughter_constell == "金牛座")
	{
		value_array_baseinfo[0] = 65;
		value_array_baseinfo[1] = 30;
		value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 35;
		value_array_baseinfo[4] = 20;
	}
	else if (value_daughter_constell == "双子座")
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 27;
	}
	else if (value_daughter_constell == "巨蟹座")
	{
		value_array_baseinfo[0] = 40;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 31;
		value_array_baseinfo[3] = 23;
		value_array_baseinfo[4] = 37;
	}
	else if (value_daughter_constell == "狮子座")
	{
		value_array_baseinfo[0] = 85;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 20;
	}
	else if (value_daughter_constell == "处女座")
	{
		value_array_baseinfo[0] = 35;
		value_array_baseinfo[1] = 28;
		value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 29;
		value_array_baseinfo[4] = 18;
	}
	else if (value_daughter_constell == "天秤座")
	{
		value_array_baseinfo[0] = 42;
		value_array_baseinfo[1] = 33;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 24;
		value_array_baseinfo[4] = 32;
	}
	else if (value_daughter_constell == "天蝎座")
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 25;
		value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 26;
	}
	else if (value_daughter_constell == "射手座")
	{
		value_array_baseinfo[0] = 57;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 29;
	}
	else if (value_daughter_constell == "山羊座")
	{
		value_array_baseinfo[0] = 56;
		value_array_baseinfo[1] = 30;
		value_array_baseinfo[2] = 26;
		value_array_baseinfo[3] = 22;
		value_array_baseinfo[4] = 25;
	}
	else if (value_daughter_constell == "水瓶座")
	{
		value_array_baseinfo[0] = 41;
		value_array_baseinfo[1] = 43;
		value_array_baseinfo[2] = 20;
		value_array_baseinfo[3] = 27;
		value_array_baseinfo[4] = 23;
	}
	else if (value_daughter_constell == "双鱼座")
	{
		value_array_baseinfo[0] = 41;
		value_array_baseinfo[1] = 40;
		value_array_baseinfo[2] = 29;
		value_array_baseinfo[3] = 25;
		value_array_baseinfo[4] = 23;
	}

	//3.开始游戏大循环
	//游戏从1997年6月开始
	for (int year = 1997; year <= 1997 + 7; year++)
	{
		for (int month = (year == 1997) ? 6 : 1; month <= 12; month++) // 如果是1997年，就从6开始，否则从1开始
		{
			//判断本月是否为女儿生日
			if (month == value_birth_month)
			{
				cout << "本月是" << value_daughter_name << "的生日，要不要送礼物呢？" << endl;
				// 根据用户输入进行判断

			}
			//显示游戏主菜单
			cout << "\n1.查看状态\n2.安排行程\n3.亲子谈话\n4.存档\n5.读档" << endl;
			cin >> choice;
			switch(choice)
			{
			case 1:		// 查看状态
				cout << "女儿的信息：";
				cout << "姓名：" << value_daughter_name << endl;
				cout << "生日：1997-" << value_birth_month << "-" << value_birth_date << endl;
				cout << "星座：" << value_daughter_constell << endl;
				break;

			}
		}
	}

	//4.根据各项参数判定游戏结果






    return 0;
}

