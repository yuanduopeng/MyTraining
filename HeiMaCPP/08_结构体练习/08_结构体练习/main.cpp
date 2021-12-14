//
//  main.cpp
//  08_结构体练习
//
//  Created by PENG Yuanduo on 2021/12/14.
//

#include <iostream>
#include <string>
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
            tArr[i].stu[j].score = 60;
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
int main(int argc, const char * argv[]) {
    teacher tArr[3];
    setTea(tArr, sizeof(tArr)/sizeof(tArr[0]));
    
    printInfo(tArr, sizeof(tArr)/sizeof(tArr[0]));
    
    return 0;
}
