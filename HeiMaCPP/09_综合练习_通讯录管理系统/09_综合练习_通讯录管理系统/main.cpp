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
#include <curses.h>
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
    cout << "姓名：" << cntc.name << "\t";
    cout << "性别：" << cntc.sex << "\t";
    cout << "年龄：" << cntc.age << "\t";
    cout << "电话：" << cntc.tel << "\t";
    cout << "地址：" << cntc.adr << endl;
}

void addContactor(contactorBook * cntcB)
{
    int len = cntcB->m_size;
    if (len == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        cout << "请输入联系人姓名" << endl;
        cin >> cntcB->cntc[len].name;
        cout << "请输入联系人性别(1 or 2)：1.男 2.女" << endl;
        int sex_int = 0;
        bool sex_fault = 1;
        while (sex_fault == 1)
        {
            cin >> sex_int;
            if (sex_int == 1)
            {
                cntcB->cntc[len].sex = "男";
                sex_fault = 0;
            }
            else if (sex_int == 2)
            {
                cntcB->cntc[len].sex = "女";
                sex_fault = 0;
            }
            else
            {
                cout << "性别输入有误，请重新输入" << endl;
                sex_fault = 1;
            }
        }
        cout << "请输入联系人年龄(0~150)" << endl;
        cin >> cntcB->cntc[len].age;
        cout << "请输入联系人电话" << endl;
        cin >> cntcB->cntc[len].tel;
        cout << "请输入联系人地址" << endl;
        cin >> cntcB->cntc[len].adr;
        cout << "录入成功，您输入的联系人信息为:" << endl;
        printContactor(cntcB->cntc[len]);
        ++cntcB->m_size;
    }
}

void showContactor (contactorBook * cntcB)
{
    if (cntcB->m_size == 0)
    {
        cout << "当前无联系人" << endl;
    }
    else
    {
        for (int i=0; i<cntcB->m_size; i++)
        {
            printContactor(cntcB->cntc[i]);
        }
    }
}

int isNameExist(contactorBook * cntcB, string n)
{
    for (int i=0; i<cntcB->m_size; i++)
    {
        if (cntcB->cntc[i].name == n)
        {
            return i;
        }
    }
    return -1;
}

void deleteContactor(contactorBook * cntcB)
{
    cout << "请输入需要删除的联系人姓名" << endl;
    string nameToDel;
    cin >> nameToDel;
    int iToDel = isNameExist(cntcB, nameToDel);
    if (iToDel == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        for (int i = iToDel; i < cntcB->m_size; ++i)
        {
            cntcB->cntc[i] = cntcB->cntc[i+1];
        }
        --cntcB->m_size;
        cout << "删除成功" << endl;
    }
}

void findContactor(contactorBook * cntcB)
{
    cout << "请输入需要查找的联系人姓名" << endl;
    string nameToFind;
    cin >> nameToFind;
    int iToFind = isNameExist(cntcB, nameToFind);
    if (iToFind == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        printContactor(cntcB->cntc[iToFind]);
    }
}

void editContactor(contactorBook * cntcB)
{
    cout << "请输入需要编辑的联系人姓名" << endl;
    string nameToEdit;
    cin >> nameToEdit;
    int iToEdit = isNameExist(cntcB, nameToEdit);
    if (iToEdit == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        cout << "请重新输入联系人姓名" << endl;
        cin >> cntcB->cntc[iToEdit].name;
        cout << "请重新输入联系人性别(1 or 2)：1.男 2.女" << endl;
        int sex_int = 0;
        bool sex_fault = 1;
        while (sex_fault == 1)
        {
            cin >> sex_int;
            if (sex_int == 1)
            {
                cntcB->cntc[iToEdit].sex = "男";
                sex_fault = 0;
            }
            else if (sex_int == 2)
            {
                cntcB->cntc[iToEdit].sex = "女";
                sex_fault = 0;
            }
            else
            {
                cout << "性别输入有误，请重新输入" << endl;
                sex_fault = 1;
            }
        }
        cout << "请重新输入联系人年龄(0~150)" << endl;
        cin >> cntcB->cntc[iToEdit].age;
        cout << "请重新输入联系人电话" << endl;
        cin >> cntcB->cntc[iToEdit].tel;
        cout << "请重新输入联系人地址" << endl;
        cin >> cntcB->cntc[iToEdit].adr;
        cout << "修改成功，您重新输入的联系人信息为:" << endl;
        printContactor(cntcB->cntc[iToEdit]);
    }
}

void cleanContactor(contactorBook * cntcB)
{
    cout << "确定要清空联系人吗？1.确认 2.放弃" << endl;
    bool sure = 0;
    cin >> sure;
    if (sure)
    {
        cntcB->m_size = 0;
    }
    cout << "清空完成" << endl;
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
                addContactor(&cB);
                break;
            case 2:
                showContactor(&cB);
                break;
            case 3:
                deleteContactor(&cB);
                break;
            case 4:
                findContactor(&cB);
                break;
            case 5:
                editContactor(&cB);
                break;
            case 6:
                cleanContactor(&cB);
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
