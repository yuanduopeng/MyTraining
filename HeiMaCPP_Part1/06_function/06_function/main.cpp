//
//  main.cpp
//  06_function
//
//  Created by PENG Yuanduo on 2021/12/9.
//

#include <iostream>
using namespace std;

int add(int num1, int num2)
// 定义中num1 num2为形参
{
    int sum = 0;
    sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2)
// 该函数只交换了函数的形参，
// 不影响传入函数的实参，
// 因为是值传递。
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<num1<<num2<<endl;
}

void test1() //无参无返
{
    cout << "test1" << endl;
}
void test2 (int num1) //有参无返
{
    cout << "test2 : " << num1 << endl;
}
int test3 () //无参有返
{
    cout << "test3" << endl;
    return 1000;
}
int test4(int num1) //有参有返
{
    cout << "test4 : " << num1 << endl;
    return num1;
}

// 函数的声明
// 提前告诉编译器函数的存在
// 声明可以写多次，但是定义只能有一次
int max(int,int);
int max(int,int);
int max(int,int);


int main(int argc, const char * argv[]) {
    
    int a = 10;
    int b = 20;
    int c = add(a,b); // 调用时a、b为实参
    cout << c << endl;
    swap(a,b);
    cout << "a和b分别为" << a << b << endl;
    
    test1();
    test2(100);
    int num1 = test3();
    cout << num1 << endl;
    int num2 = test4(10000);
    cout << num2 << endl;
    
    cout << max(num1,num2) << endl;
    
    
    return 0;
}

int max (int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
