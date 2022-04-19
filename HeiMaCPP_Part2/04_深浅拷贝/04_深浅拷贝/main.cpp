//
//  main.cpp
//  04_test
//
//  Created by PENG Yuanduo on 2022/4/19.
//

#include <iostream>
using namespace std;

class Student
{
public:
    Student(int num, int age)
    {
        cout << "Student有参构造函数调用" << endl;
        m_num = num;
        m_age = new int(age);
    }
    Student(const Student & s)
    {
        cout << "Student拷贝构造函数" << endl;
        m_num = s.m_num;
        m_age = new int(*s.m_age);
    }
    ~Student()
    {
        cout << "Student析构函数" << endl;
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
    int m_num;
    int *m_age;
};

void test01()
{
    Student Zhangsan(123,20);
    cout << "Zhangsan num = "<< Zhangsan.m_num << endl;
    cout << "Zhangsan age = "<< *Zhangsan.m_age << endl;
    Student Lisi(Zhangsan);
    cout << "Lisi num = "<< Lisi.m_num << endl;
    cout << "Lisi age = "<< *Lisi.m_age << endl;
}
int main(int argc, const char * argv[]) {
    
    test01();
    return 0;
}
