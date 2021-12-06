//
//  main.cpp
//  03_while
//
//  Created by PENG Yuanduo on 2021/12/4.
//

#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // while
    // while (循环条件) {循环语句}
    // 循环条件为真，就执行循环语句
        int num = 0;
        while (num < 11)
        {
            cout << num++ << '\t';
        }
        cout << endl;
        // 练习：猜数字
        /*
        srand((unsigned int) time(NULL));
        //引入系统时间产生随机数
        int rdm = rand()%100 + 1; //生成1-100随机数
        int user = 0;
        while (user != rdm)
        {
            cout << "请在1-100猜整数：" << endl;
            cin >> user;
            if (user > rdm)
            {
                cout << "猜大了，请继续" << endl;
            }
            if (user < rdm)
            {
                cout << "猜小了，请继续" << endl;
            }
        }
        cout << "恭喜猜对了，游戏结束" << rdm <<endl;
        */
    
    // do...while循环语句
    // do {循环语句} while(循环条件);
    // do...while会先执行一次循环语句，再判断循环条件
    // 例：输出0-9
    int num2 = 0;
    do
    {
        cout << num2 << "\t";
        num2++;
    }
    while (num2 < 10);
    cout << endl;
    // 例：水仙花数
    int i = 0;
    do
    {
        int bit1 = i/100;
        int bit2 = (i%100)/10; //也可以(i/10)%10
        int bit3 = i%10;
        if (pow(bit1,3) + pow(bit2,3) + pow(bit3,3) == i)
        {
            cout << i << endl;
        }
        i++;
    }
    while (i < 1000);
    cout << endl;
    
    // for循环语句
    // for(起始表达式；条件表达式；末尾循环体) {循环语句；}
    // 起始表达式：不参与循环
    // 先执行起始表达式，再用条件表达式判断，条件满足再执行循环语句，最后执行末尾循环体
    for (int num1 = 0; num1 < 11; num1++) {
        cout << num1 << '\t';
    }
    cout << endl;
    // 例：敲桌子
    for (int j = 1; j<101; j++)
    {
        if ((j%10 == 7) || (j/10 == 7) || (j%7 == 0))
        {
            cout << "敲桌子！" << endl;
        }
        else
        {
            cout << j << "\t";
        }
    }
    cout << endl;
    // 例：嵌套循环
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // 例：乘法口诀表
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << a << "x" << b << "=" << a*b << "\t";
        }
        cout << endl;
    }
    
    
    return 0;
}
