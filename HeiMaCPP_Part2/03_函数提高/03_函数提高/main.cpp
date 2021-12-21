//
//  main.cpp
//  03_函数提高
//
//  Created by PENG Yuanduo on 2021/12/21.
//

#include <iostream>
using namespace std;
int func(int a,int b = 5,int c = 10); //默认参数

void func1(int a, int = 10) //占位参数，也可以有默认值
{
    cout << "zhanwei canshu" << endl;
}
int main(int argc, const char * argv[]) {
    cout << func(1) << endl;
    cout << func(10,10,10) << endl;
    cout << func(10, 10) << endl;
    return 0;
}

int func(int a, int b, int c)
{
    return a + b + c;
}
