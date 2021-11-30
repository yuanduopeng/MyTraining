//
//  main.cpp
//  01_CppPrintHelloWorld
//
//  Created by PENG Yuanduo on 2021/11/30.
//

#include <iostream>
#define day 7 //定义常量day = 7，不可修改

using namespace std;

/*
    多行注释
*/

int main(int argc, const char * argv[]) {
    //创建变量a
    int a = 10;
    
    // 关键字:
    // 不可用作变量名，比如if，inline，int，break等
    // int if = 1; 错误
    
    // 标识符:
    // 即给变量起的名字，由字母、数字、下划线组成，
    // 第一个字母必须为字母或下划线，区分大小写
    int _aaa = 100;
    
    // const修饰的变量，也称为常量
    const int month = 12;

    cout << "variable _aaa = " << _aaa << endl;
    cout << "day = " << day << endl;
    cout << "month = " << month << endl;

    return 0;
}
