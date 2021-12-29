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
//访问权限
class Person
{
public:
    string m_Name;
protected:
    string m_Car;
private:
    int m_Password;
public:
    void func()
    {
        m_Name = "zhangsan";
        m_Car = "Tuolaji";
        m_Password = 123456;
    }
};
//成员属性私有
class Pers
{
private:
    string m_Name;  // read & write
    int m_Age;      // read
    string m_Lover; // write
public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }
    int getAge()
    {
        m_Age = 0;
        return m_Age;
    }
    void setLover(string name)
    {
        m_Lover = name;
    }
};

//案例：设计立方体类
class Cube
{
private:
    int m_L;
    int m_H;
    int m_W;

public:
    void setLHW(int l, int h, int w)
    {
        m_L = l;
        m_H = h;
        m_W = w;
    }
    int getL()
    {
        return m_L;
    }
    int getH()
    {
        return m_H;
    }
    int getW()
    {
        return m_W;
    }
    int calcSurface()
    {
        return (m_W*m_H + m_H*m_L + m_L*m_W)*2;
    }
    int calcVolume()
    {
        return m_W*m_H*m_L;
    }
    bool isCubeSameByClass(Cube &c)
    {
        if (c.getH() == m_H && c.getL() == m_L && c.getW() == m_W)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
bool isCubeSame(Cube &c1, Cube &c2)
{
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
    
    //访问权限
    Person p1;
    p1.m_Name = "lisi";
    // p1.m_Car = "benchi"; //错误，m_Car是被保护成员，类外不可访问
    // p1.m_Password = 123; //错误，私有成员类外不可访问
    p1.func();
    
    Pers p2;
    p2.setName("zhangsan");
    cout << p2.getName() << endl;
    cout << p2.getAge() << endl;
    p2.setLover("lisi");
    
    Cube c2;
    c2.setLHW(5, 10, 15);
    cout << c2.calcVolume() << endl;
    cout << c2.calcSurface() << endl;
    Cube c3;
    c3.setLHW(5, 10, 15);
    cout << isCubeSame(c2, c3) << endl;
    cout << c2.isCubeSameByClass(c3) << endl;
    
    return 0;
}
