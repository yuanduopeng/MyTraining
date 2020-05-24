// function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "EWDemo.h"
#include "FuncPtr.h"

using namespace std;


// void calcCuboid();	
// void calcCylinder();	

/* --------use valible, pointer and reference to transfer value in function------------
void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);
void swap1(int num1, int num2) 
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap2(int* num1, int* num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void swap3(int& num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}--------use valible, pointer and reference to transfer value in function------------
*/
int main()
{
	/*
	//--------use valible, pointer and reference to transfer value in function------------
	int num1=10, num2=5;
	swap1(num1, num2);
	cout << num1 << "\t" << num2 << "\n";
	int* num_1 = &num1;
	int* num_2 = &num2;
	swap2(num_1, num_2);
	cout << *num_1 << "\t" << *num_2 << "\n";
	int& num__1 = *num_1;
	int& num__2 = *num_2;
	swap3(num__1, num__2);
	cout << num__1 << "\t" << num__2 << "\n";
	//--------use valible, pointer and reference to transfer value in function------------
	*/

	//int power(int, int);
	/*int(*ptrpower)(int, int);
	ptrpower = power;
	
	cout << (*ptrpower)(2, 5) << endl;
	*/
	
	
	
	/*
	double powers[3][5] = 
	{
		{45.5, 55.6, 88.9, 66.6, 78},
		{98.2, 69.1, 33.7, 49.3, 58},
		{78.2, 58.5, 12.8, 37.8, 43}
	};

	show(powers, 3);



	/*
	//µ÷ÓÃº¯Êý
	int choice = -1;
	cout << "1.³¤·½Ìå" << endl;
	cout << "2.Ô²ÖùÌå" << endl;
	cout << "3.ÍË³ö" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		calcCuboid();
		break;
	case 2:
		calcCylinder();
		break;
	case 3:
		break;
	}
	*/
	
    return 0;
}


/*
//¶¨ÒåÈý¸öº¯Êý¼ÆËãÈýÖÖÌå»ý
void calcCuboid() 
{
	double len, width, height;
	cout << "ÇëÊäÈë³¤¿í¸ß" << endl;
	cin >> len >> width >> height;
	cout << "³¤·½ÌåÌå»ýÎª" << len*width*height << endl;
	
}
void calcCylinder()
{
	double radius, height;
	cout << "ÇëÊäÈë°ë¾¶ºÍ¸ß" << endl;
	cin >> radius >> height;
	double v = 3.14 * pow(radius, 2) * height;
	cout << "Ô²ÖùÌåÌå»ýÎª" << v << endl;
}
*/