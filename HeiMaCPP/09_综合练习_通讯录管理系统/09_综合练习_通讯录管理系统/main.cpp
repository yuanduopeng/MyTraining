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
using namespace std;

struct contactor
{
    string name;
    string sex;
    int age;
    string tel;
    string adr;
};
void printMenu()
{
    cout << "**********" << endl;
    cout << "1.添加联系人" << endl;
    cout << "2.显示联系人" << endl;
    cout << "3.删除联系人" << endl;
    cout << "4.查找联系人" << endl;
    cout << "5.修改联系人" << endl;
    cout << "6.清空联系人" << endl;
    cout << "0.退出通讯录" << endl;
    cout << "**********" << endl;
};

int main(int argc, const char * argv[]) {
    printMenu();
    int userInput = 1;
    while (userInput != 0)
    {
        cin >> userInput;
        switch (userInput)
        {
            case 1: cout << "请添加联系人信息" << endl;
                break;
            default: cout << "请重新输入" << endl;
                printMenu();
                break;
        }
    }
    cout << "程序结束，谢谢使用" << endl;
    
    
    return 0;
}
