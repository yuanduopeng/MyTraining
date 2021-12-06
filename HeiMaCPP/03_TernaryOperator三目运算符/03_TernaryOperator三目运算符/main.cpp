//
//  main.cpp
//  03_TernaryOperator三目运算符
//
//  Created by PENG Yuanduo on 2021/12/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // 三目运算符
    // 表达式1 ？ 表达式2 ： 表达式3
    // 表达式1作为判断条件，真执行2返回2结果，假执行3返回3结果
    int a=10,b=20,c=0;
    c = (a>b ? a : b);
    cout << c << endl;
    // 三目运算符返回的是变量，可以继续赋值
    (a>b ? a : b) = 100;
    cout << b << endl;
    
    
    return 0;
}
