//
//  main.cpp
//  02_Operator
//
//  Created by PENG Yuanduo on 2021/12/2.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 运算符：
    //  1.算数运算符
    //  / 除法运算
    //     整数相除仍为整数，将小数部分去除
    //     整数和小数相除，结果为小数
    int a = 10;
    int b = 20;
    cout << a/b << endl;
    float c = 10.5f;
    cout << c/b << endl;
    cout << sizeof(c/b) << endl;
    // % 取模运算
    // 求余数，基于除法运算，所以分母也不能为0
    // 小数之间不可以取模运算
    cout << a%b << endl;
    //  2.递增递减运算符
    // ++ ; --
    // 前置，先给变量+1，再进行表达式计算
    // 后置, 先进行表达式计算，再给变量+1
    int a2 = ++a * 10;
    int a3 = a++ * 10;
    cout << a2 << endl;
    cout << a3 << endl;
    //  3.赋值运算符
    // +=  -=  *=  /=  %=
    int a4 = 10;
    a4 += 5;  // a = 15
    a4 /= 3;  // a = 5
    a4 %= 3;  // a = 2
    cout << a4 << endl;
    //  4.比较运算符
    // ==   !=  <   >   <=  >=
    int c1 = 10;
    float c2 = 10.f;    //整型和浮点可以进行比较
    char c3 = 'a';      //字符按ASCII码进行比较
    cout << (c1 < c3) << endl;
    //  5.逻辑运算符
    // !非   &&与     ||或
    int d1 = 10;
    char d2 = 'a';
    bool d3 = false;
    cout << !d1 << endl;    //只要非零，即为真
    cout << !!d2 << endl;   //字符按照ASCII码比较
    cout << (d1 && d3) << endl;     //与：同真为真，其余为假
    cout << (d1 || d3) << endl;     //或：同假为假，其余为真
    
    return 0;
}
