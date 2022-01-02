//
//  main.cpp
//  04_拷贝构造函数
//
//  Created by PENG Yuanduo on 2022/1/2.
//

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person()
    {
        cout << "Person默认构造" << endl;
    };
    Person(int a)
    {
        age = a;
        cout << "Person有参构造" << endl;
    }
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person拷贝构造" << endl;
    };
    ~Person()
    {
        cout << "Person析构" << endl;
    };
};

void test01()
{
    Person p1(20);
    Person p2(p1);
    
    cout << "p2 age = " << p2.age << endl;
}
void doWork (Person p)
// 值传递相当于Person p = p1
// 即拷贝构造函数的隐式写法
{
    
}
Person doWork2()
{
    Person p1;
    cout << &p1 << endl;
    return p1;
}
void test02()
{
    Person p1;
    doWork(p1);
}
void test03()
{
    Person p = doWork2();
    cout << &p << endl;
}

int main() {
    
//    test01();
//    test02();
    test03();
    
    return 0;
}
