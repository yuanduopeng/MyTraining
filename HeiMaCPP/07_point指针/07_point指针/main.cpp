//
//  main.cpp
//  07_point指针
//
//  Created by PENG Yuanduo on 2021/12/10.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    //指针就是一个地址
    //指针的定义、使用
    int a = 10;
    //定义指针: 数据类型 * 指针变量名
    int* p;
    p = &a; //用&来取地址
    cout << "a的地址为：" << &a << endl;
    cout << "a的地址为：" << p << endl;
    cout << "p的地址为：" << &p << endl;
    //使用指针：指针钱加 * 代表解引用，表示指针指向的内存中的数据
    cout << "a = " << *p << endl;
    cout << "a的地址为：" << &*p << endl;
    
    //指针也是数据类型，
    //32位操作系统下，指针占4个字节
    //64位操作系统下，指针占8个字节
    cout << "指针int*所占内存空间大小为" << sizeof(p) << endl;
    cout << sizeof(int*) << endl;
    cout << sizeof(double*) << endl;
    cout << sizeof(float*) << endl;
    
    //空指针：指针指向的地址编号为0，用来初始化指针变量，
    //空指针指向的内存是不可访问的
    //0~255是系统占用的内存，不允许访问
    int* p1 = NULL;
    cout << "p1所指向的内存地址为：" << p1 << endl;
    //cout << "p1所指向的内存地址的数据为：" << *p1 << endl;
    //空指针指向的内存空间不允许被访问
    cout << "p1的地址为：" << &p1 << endl;
    
    //野指针
    int* p2 = (int*)0x1100;
    cout << "p2所指向的内存地址为：" << p2 << endl;
    //cout << "p2所指向的内存地址的数据为：" << *p2 << endl;
    //p2为野指针，所读取的地址的数据是不允许被访问的
    //空指针、野指针都不是我们申请到的内存空间，所以不要去访问，要避免使用
    
    //const修饰指针
//1. 常量指针 （指向常量的指针）
    int a1 = 10;
    int b1 = 20;
    const int* p3 = &a1;
    //指针的指向可以修改，但是指针指向的值不可以修改
    //p3 = &b1; // 正确
    //*p3 = 20; // 错误！
//2. 指针常量 （指针是个常量）
    int* const p4 = &a1;
    //指针指向不可以修改，指针指向的值可以被修改
    //p4 = &b1; //错误！
    //*p4 = 100; //正确
//3. const修饰指针和常量
    const int* const p5 = &a1;
    //p5 = &b1; //错误！
    //*p5 = 100; //错误！
    
    
    return 0;
}
