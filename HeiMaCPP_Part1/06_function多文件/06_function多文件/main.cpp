//
//  main.cpp
//  06_function多文件
//
//  Created by PENG Yuanduo on 2021/12/10.
//

//#include <iostream>
#include "Header.h"
//using namespace std;

//void swap (int,int);
//
void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(int argc, const char * argv[]) {

    int a = 10;
    int b = 20;
    swap(a,b);
    
    return 0;
}
