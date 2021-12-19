//
//  main.cpp
//  01_内存
//
//  Created by PENG Yuanduo on 2021/12/19.
//

#include <iostream>
using namespace std;
int g_a = 10;
const int g_c_a = 10;

int * func()
{
    int a = 10;
    return &a;
}

int * funct()
{
    
    int * p = new int(10);
    return p;
}

void funcArry()
{
    
    int * arr = new int[10];
    for (int i = 0; i<10;++i)
    {
        arr[i] = i+100;
    }
    for (int i = 0; i<10;++i)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
}

int main(int argc, const char * argv[]) {
    
    int a = 10;
    cout << "局部变量a的地址为" << &a << endl;
    cout << "全局变量g_a的地址为" << &g_a << endl;
    
    static int s_a = 10;
    cout << "静态变量c_a的地址为" << &s_a << endl;
    
    //常量
    //字符串常量
    cout << "字符串常量的地址为" << &"helloword" << endl;
    //const修饰的变量
    //const修饰的全局变量
    cout << "const修饰的全局变量g_c_a的地址为" << &g_c_a << endl;
    //const修饰的局部变量
    int c_l_a = 10;
    cout << "const修饰的局部变量c_l_a的地址为" << &c_l_a << endl;
    
    int * p0 = func();
    cout << "栈区的值为" << *p0 << endl;
    cout << "栈区的值为" << *p0 << endl;

    int * p1 = funct();
    cout << "堆区的值为" << *p1 << endl;
    cout << "堆区的值为" << *p1 << endl;
    delete p1;
    cout << "堆区的值为" << *p1 << endl;
    cout << "堆区的地址为" <<p1 << endl;
    
    funcArry();
    
    return 0;
}
