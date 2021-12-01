//
//  main.cpp
//  01_CppPrintHelloWorld
//
//  Created by PENG Yuanduo on 2021/11/30.
//

#include <iostream>
#include <string>
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
    
    // 数据类型：
    // 存在的意义是给变量分配合适的内存空间；
    // short 短整型，2字节; int 整型，4字节；long long 长长整型 8字节；
    // int 4字节，32位，表示范围 -2^31 ~ 2^31
    short num1 = 10; //-32768 ~ 32767
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    // sizeof关键字
    cout << "size of long = " << sizeof(long) << endl;
    cout << "size of int = " << sizeof(num2) << endl;
    
    // 实型（浮点型）
    // 1.单精度 float 4字节 7位有效数字
    // 2.双精度 double 8字节 15~16位有效数字
    float f1 = 3.1415926f; // 3.14后加f，否则系统默认3.14是双精度double的类型
    double d1 = 3.1415926; // 默认输出一个小数，只显示6位有效数字
    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "size of float = " << sizeof(float) << endl;
    
    // 科学计数法
    float f2 = 3e2; // 3*10^2
    cout << "f2 = " << f2 << endl;
    float f3 = 3.5e-2; // 3.5*0.1^2
    cout << "f3 = " << f3 << endl;
    
    // 字符型
    // 表示字符要用''，且只能有一个字符；
    // 计算机将字符转为ASCII码进行存储 a->97, A->65
    char ch = 'a';
    cout << "ch = " << ch << endl;
    cout << "size of char = " << sizeof(char) << endl;
    cout << "ASCII of ch = " << int(ch) << endl;
    int ch1 = 78;
    cout << "char of ASCII ch1 = " << char(ch1) << endl;

    // 转义字符
    //      \n -> 换行; \\ -> 反斜杠； \t —>TAB
    cout << "\\ \\ hellow \n world \t !!!" << endl;
    
    // 字符串
    // C风格字符串： char 变量名[] = “字符串值”
    // C++风格字符串： string 变量名 = “字符串值”
    // 注意等号后要用双引号；c++风格要包含头文件#include <string>
    char str[] = "hello world";
    string str1 = "hello world";
    cout << str << endl;
    cout << str1 << endl;
    
    // 布尔类型bool
    // 只有两个数值，true 1， false 0；
    // 只占用1个字节； 非0即为真
    bool bo = 0.1f;
    cout << "bo = " << bo << endl;
    
    // 用户输入
    float flin = 0.f;
    char chrin = 'a';
    string ain = "hello";
    cout << "请输入ain" << endl;
    cin >> ain;
    cout << "ain = " << ain << endl;
    

    return 0;
}
