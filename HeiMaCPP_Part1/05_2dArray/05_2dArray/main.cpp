//
//  main.cpp
//  05_2dArray
//
//  Created by PENG Yuanduo on 2021/12/8.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // 2维数组
    // 定义方式：
    int arr1[2][3];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[0][2] = 3;
    arr1[1][0] = 4;
    arr1[1][1] = 5;
    arr1[1][2] = 6;
    int arr2[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    int arr3[2][3] = {4,5,6,7,8,9};
    int arr4[][3] = {4,5,6,7,8,9}; // 可以省略行数，但是不能省略列数
    for(int i=0; i<2; i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << arr4[i][j] << "\t";
        }
        cout << endl;
    }
    // 获取行数
    cout << sizeof(arr1)/sizeof(arr1[0]) << endl;
    // 获取列数
    cout << sizeof(arr1[0])/sizeof(arr1[0][0]) << endl;
    // 获取2维数组首地址，第一行首地址，第一个元素首地址
    cout << arr1 << endl;
    cout << arr1[0] << endl;
    cout << &arr1[0][0] << endl;
    //例：
    int arr[3][3] =
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    string names[3] = {"张三","李四","王五"};
    int sum = 0;
    for(int i=0; i<3; i++)
    {
        for (int j=0;j<3;j++)
        {
            sum += arr[i][j];
        }
        cout << names[i] << "的总成绩是" << sum << endl;
        sum = 0;
    }

    
    return 0;
}
