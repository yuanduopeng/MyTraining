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

//函数重载
//作用：函数名可以相同，提高复用性
//条件：同一个作用域下；函数名相同；函数**参数类型**、**或个数**、**或顺序**不同。
void func2()
{
    cout << "function using" << endl;
}
//void func2(int a)
//{
//    cout << "function(int a) using" << endl;
//}
void func2(double a)
{
    cout << "function(double a) using" << endl;
}
void func2(int a, double b)
{
    cout << "function(int a, double b) using" << endl;
}
void func2(double a, int b)
{
    cout << "function(double a, int b) using" << endl;
}
void func2(int &a)
{
    cout << "function(int &a) using" << endl;
}
void func2(const int &a)
{
    cout << "function(const int &a) using" << endl;
}
// 函数重载碰到默认参数
void func3(int a)
{
    cout << "function3(int a) using" << endl;
}
void func3(int a, int b = 10)
{
    cout << "function3(int a, int b) using" << endl;
}

int main(int argc, const char * argv[]) {
    cout << func(1) << endl;
    cout << func(10,10,10) << endl;
    cout << func(10, 10) << endl;
    
    //函数重载
    func2();
//    func2(2);
    func2(3.14);
    func2(2,3.14);
    func2(3.14,2);
    int a = 10;
    func2(a); // int &a = 10; 不合法,10在常量区，只能引用堆区、栈区
    func2(10); // const int &a = 10; 合法
    // func3(10); 错误，两个func3可以用一样方式一样调用，出现歧义
    func3(10,20); //正确，只能调用双输入的func3
    
    
    return 0;
}

int func(int a, int b, int c)
{
    return a + b + c;
}
