//
//  main.cpp
//  08_结构体
//
//  Created by PENG Yuanduo on 2021/12/13.
//

#include <iostream>
#include <string>
using namespace std;

struct student //结构体声明
{
    string name; //结构成员
    int age;
    int score;
} lisi = {"lisi",19,90}; //1.直接在声明后初始化结构体变量

void printStudent1(student s)
{
    cout << s.name << s.age << s.score << endl;
}

//使用指针传递，将函数形参变为实参，可以减少内存空间的使用
void printStudent2(student *s)
{
    s->age = 100;
    cout << s->name << s->age << s->score << endl;
}

//结构体中const的使用场景
void printStudent3(const student *s)
{
    // s->age = 100; //因为加了const，所以s只能读，不能写，防止误操作
    cout << s->name << s->age << s->score << endl;
}

int main(int argc, const char * argv[]) {
    //结构体
    //用户自定义的数据类型，允许用户储存不同的数据类型
//    struct student //结构体声明
//    {
//        string name; //结构成员
//        int age;
//        int score;
//    } lisi = {"lisi",19,90}; //1.直接在声明后初始化结构体变量
    student zhangsan = {"zhangsan", 20, 80}; //2.声明后再创建结构体变量
    student wangmazi; // 3.创建结构体变量后逐个初始化结构体变量成员
    wangmazi.name = "wangmazi";
    wangmazi.age = 21;
    wangmazi.score = 70;
    cout << zhangsan.score << endl;
    cout << lisi.name << endl;
    cout << wangmazi.age << endl;
    
    //结构体数组
    student xueshengArr[3] =
    {
        {"zhangsan", 20, 80},
        {"lisi", 19, 90},
        {"wangmazi", 21, 70}
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "name: " << xueshengArr[i].name << "\t";
        cout << "age: " << xueshengArr[i].age << "\t";
        cout << "score: " << xueshengArr[i].score << endl;
    }
    
    //结构体指针
    //通过->操作符，来访问结构体中的成员
    student * p = &lisi; //定义p为指向lisi结构的结构指针
    cout << p->name << "\t" << p->age << "\t" << p->score << endl;
    
    //结构体嵌套结构体
    //结构体中的成员，可以是另一个结构体
    student stu1;
    struct teacher
    {
        int id;
        string name;
        int age;
        student stu1; // 老师带的学生，是结构体成员，也是另一个结构体
    };
    stu1.name = "zhangxuesheng";
    stu1.age = 17;
    stu1.score = 89;
    teacher teacher1 = {1, "wanglaoshi", 41, stu1};
    cout << "老师" << teacher1.name << "的学生" << teacher1.stu1.name << "的年龄是" << teacher1.stu1.age << endl;
    
    //结构体作为函数参数
    printStudent1(stu1); //值传递，数据量大时，因为要拷贝一份数据，所以占内存
    printStudent2(&stu1); //地址传递
    printStudent1(stu1);

    printStudent3(&stu1);
    
    
    return 0;
}
