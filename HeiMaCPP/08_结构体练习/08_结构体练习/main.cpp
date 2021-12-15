//
//  main.cpp
//  08_结构体练习
//
//  Created by PENG Yuanduo on 2021/12/14.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
    string name;
    int score;
};

struct teacher
{
    string name;
    student stu[5];
};

struct hero
{
    string name;
    int age;
    string sex;
};

void setTea(teacher tArr[], int len)
{
    string nameSeed = "ABCDE";
    for (int i=0; i<len; i++)
    {
        tArr[i].name = "Teacher_";
        tArr[i].name += nameSeed[i];
        for (int j=0;j<5;j++)
        {
            tArr[i].stu[j].name = "Student_";
            tArr[i].stu[j].name += nameSeed[i];
            tArr[i].stu[j].name += nameSeed[j];
            int random = rand() % 61 + 40;
            tArr[i].stu[j].score = random;
        }
    }
}

void printInfo(const teacher tArr[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << tArr[i].name << endl;
        for (int j=0;j<5;j++)
        {
            cout << tArr[i].stu[j].name << "\t" << tArr[i].stu[j].score << endl;
        }
    }
}

void rankHero(hero hArr[], int len)
{
    for (int i=0; i<len-1; i++)
    {
        for (int j=0; j<len-1-i; j++)
        {
            if (hArr[j].age > hArr[j+1].age)
            {
                hero temp = hArr[j];
                hArr[j] = hArr[j+1];
                hArr[j+1] = temp;
            }
        }
    }
}

void printHero(hero hArr[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << hArr[i].name << hArr[i].age << hArr[i].sex << endl;
    }
}

int main(int argc, const char * argv[])
{
    srand((unsigned int)time(NULL));
    teacher tArr[3];
    setTea(tArr, sizeof(tArr)/sizeof(tArr[0]));
    printInfo(tArr, sizeof(tArr)/sizeof(tArr[0]));
    
    hero hArr[5] =
    {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };
    rankHero(hArr, 5);
    printHero(hArr, 5);
    
    
    return 0;
}
