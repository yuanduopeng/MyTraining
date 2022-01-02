//
//  main.cpp
//  04_构造函数
//
//  Created by PENG Yuanduo on 2022/1/2.
//

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person() //构造函数，无参构造（默认构造）
    {
        cout << "默认构造函数调用" << endl;
    };
    Person(int a) //有参构造
    {
        age = a;
        cout << "有参构造函数调用" << endl;
    };
    Person(const Person &p)  //拷贝构造
    {
        age = p.age;
        cout << "拷贝构造函数调用" << endl;
    };
    ~Person() //析构函数
    {
        cout << "析构函数调用" << endl;
    };
};

void test01()
{
    //默认构造的调用
    Person p1; //在栈上的数据，执行完释放前调用了析构函数
    cout << p1.age << endl;
    // Person p1();
    // 编译器会认为上面是函数声明，返回Person类型，而不是调用默认构造
    
    //有参构造的调佣
    Person p2(10);
    cout << p2.age << endl;
    
    //拷贝构造的调用
    Person p3(p2);
    cout << p3.age << endl;
    
    //显示法调用构造
    Person p4;
    Person p5 = Person(20);
    Person p6 = Person(p5);
    Person(20); //是匿名对象,执行后立即回收
    cout << "aaaa" << endl;
    //不要利用拷贝构造函数初始化匿名对象
    // 编译器会认为Person(p5)等价于Person p5,即是一个p5对象的声明
    // Person(p5);
    
    //隐式转换法
    Person p7 = 10; //相当于写了 Person p7 = Person(10);
    Person p8 = p7;
    
}

int main(int argc, const char * argv[]) {

    test01();
//    Person p1;
    
    return 0;
}
