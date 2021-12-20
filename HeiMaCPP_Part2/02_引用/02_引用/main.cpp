//
//  main.cpp
//  02_引用
//
//  Created by PENG Yuanduo on 2021/12/20.
//

#include <iostream>
using namespace std;

void swap01 (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap02 (int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap03 (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int & add(int &a, int &b)
{
    static int c = a+b;
    return c;
}
void add10(const int &a) //常量引用
{
    // a = 10;  // 引用a作为常量，不可以被修改
    int b = a;
    b += 10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(int argc, const char * argv[]) {
    // 引用： 给变量起别名，本质是**指针常量**
    int a = 10;
    int &b = a;
    // int &b;
    // b = a; //错误！！！引用必须要初始化，且初始化后就不可更改。
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = 1000;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a address = "<< &a << endl;
    cout << "b address = "<< &b << endl;

    int a1 = 10;
    int a2 = 20;
    swap01(a1, a2);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    swap02(&a1, &a2);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    swap03(a1, a2);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    
    int x = 2;
    int y = 3;
    int z = add(x,y);
    int &z1 = add(x,y);
    cout << z << endl;
    cout << z1 << endl;
    add(x,y) = 1000;
    cout << z << endl;
    cout << z1 << endl;
    
    int i = 123;
    add10(i);
    
    return 0;
}
