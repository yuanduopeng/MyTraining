//
//  main.cpp
//  04_构造函数调用规则
//
//  Created by PENG Yuanduo on 2022/1/5.
//

#include <iostream>
using namespace std;

class Person
{
public:
//    Person()
//    {
//        cout << "Person默认构造函数调用" << endl;
//    };
//    Person(int age)
//    {
//        cout << "Person有参构造函数调用" << endl;
//        m_Age = age;
//    };
    Person(const Person & p)
    {
        m_Age = p.m_Age;
        cout << "Person拷贝构造函数调用" << endl;
    };
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    };
    
    int m_Age;
    
};

//void test01()
//{
//    Person p;
//    p.m_Age = 18;
//    Person p2(p);
//    cout << "p2 age = " << p2.m_Age << endl;
//}
//void test02()
//{
//    Person p(28);
//    Person p2(p);
//    cout << "p2 age = " << p2.m_Age << endl;
//}
void test03()
{
//    Person p; //错误
}

int main(int argc, const char * argv[]) {
    
//    test01();
//    test02();
    test03();
    
    return 0;
}
