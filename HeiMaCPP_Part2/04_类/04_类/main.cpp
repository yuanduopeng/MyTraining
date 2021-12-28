//
//  main.cpp
//  04_类
//
//  Created by PENG Yuanduo on 2021/12/28.
//

#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14;

class Circle
{
public:
    //属性：
    int m_r;
    
    //行为：
    double calcZX()
    {
        return 2*pi*m_r;
    }
};

class Student
{
public:
    string m_name;
    int m_stuNum;
    void showName()
    {
        cout << "姓名为：" << m_name << endl;
    }
    void showNum()
    {
        cout << "学号为: " << m_stuNum << endl;
    }
    void setName(string name)
    {
        m_name = name;
    }
    void setNum(int num)
    {
        m_stuNum = num;
    }
};

int main(int argc, const char * argv[]) {
    // 通过圆类创建具体的圆对象c1，也叫实例化
    Circle c1;
    // 给圆对象c1的属性赋值
    c1.m_r = 10;
    cout << "周长为" << c1.calcZX() << endl;
    
    Student s1;
    s1.m_name = "zhangsan";
    s1.m_stuNum = 20211228;
    s1.showName();
    s1.showNum();
    Student s2;
    s2.setName("Lisi");
    s2.setNum(20211230);
    s2.showName();
    s2.showNum();
    
    
    
    return 0;
}
