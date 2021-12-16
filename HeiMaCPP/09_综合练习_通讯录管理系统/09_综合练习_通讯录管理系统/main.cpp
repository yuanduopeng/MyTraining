//
//  main.cpp
//  09_综合练习_通讯录管理系统
//
//  Created by PENG Yuanduo on 2021/12/15.
//
// 系统需求
// 添加联系人：信息包括姓名、性别、年龄、电话、地址，最多1000人
// 显示、删除、查找、修改、清空联系人
// 退出通讯录

#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

struct contactor
{
    string name;
    string sex;
    int age;
    string tel;
    string adr;
};

struct contactorBook
{
    contactor cntc[MAX];
    int m_size;
};

void printMenu()
{
    cout << "********************************" << endl;
    cout << "********** 1.添加联系人 **********" << endl;
    cout << "********** 2.显示联系人 **********" << endl;
    cout << "********** 3.删除联系人 **********" << endl;
    cout << "********** 4.查找联系人 **********" << endl;
    cout << "********** 5.修改联系人 **********" << endl;
    cout << "********** 6.清空联系人 **********" << endl;
    cout << "********** 0.退出通讯录 **********" << endl;
    cout << "********************************" << endl;
};

void printContactor(contactor cntc)
{
    cout << "联系人姓名：" << cntc.name << endl;
    cout << "联系人性别：" << cntc.sex << endl;
    cout << "联系人年龄：" << cntc.age << endl;
    cout << "联系人电话：" << cntc.tel << endl;
    cout << "联系人地址：" << cntc.adr << endl;
}

void addContactor(contactor cntc[], int * len)
{
    int i = 0;
    while(!cntc[i].name.empty())
    {
        ++i;
    }
    cout << "请输入联系人姓名" << endl;
    cin >> cntc[i].name;
    cout << "请输入联系人性别(1 or 2)：1.男 2.女" << endl;
    int sex_int = 0;
    bool sex_fault = 1;
    while (sex_fault == 1)
    {
        cin >> sex_int;
        if (sex_int == 1)
        {
            cntc[i].sex = "男";
            sex_fault = 0;
        }
        else if (sex_int == 2)
        {
            cntc[i].sex = "女";
            sex_fault = 0;
        }
        else
        {
            cout << "性别输入有误，请重新输入" << endl;
            sex_fault = 1;
        }
    }
    cout << "请输入联系人年龄(0~150)" << endl;
    cin >> cntc[i].age;
    cout << "请输入联系人电话" << endl;
    cin >> cntc[i].tel;
    cout << "请输入联系人地址" << endl;
    cin >> cntc[i].adr;
    cout << "您输入的联系人信息为:" << endl;
    printContactor(cntc[i]);
}

int main(int argc, const char * argv[]) {
    contactorBook cB;
    cB.m_size = 0;
    int userInput = 1;
    while (userInput != 0)
    {
        printMenu();
        cin >> userInput;
        switch (userInput)
        {
            case 1: cout << "请添加联系人信息" << endl;
                addContactor(cB.cntc, &cB.m_size);
                break;
            case 2: cout << "请输入需要显示的联系人姓名" << endl;
                break;
            case 3: cout << "请输入需要删除的联系人姓名" << endl;
                break;
            case 4: cout << "请输入需要查找的联系人信息" << endl;
                break;
            case 5: cout << "请输入需要修改的联系人姓名" << endl;
                break;
            case 6: cout << "确定要清空联系人吗？" << endl;
                break;
            case 0:
                break;
            default: cout << "请重新输入" << endl;
                break;
        }
    }
    cout << "程序结束，谢谢使用" << endl;
    
    
    return 0;
}
