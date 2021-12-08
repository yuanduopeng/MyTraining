//
//  main.cpp
//  05-1dArray
//
//  Created by PENG Yuanduo on 2021/12/8.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 1维数组
    // 定义方式：
    int arr0[5];
    arr0[1]=10;
    int arr1[] = {10,20,30,40,50};
    int arr2[5] = {10,20,30};
    // 数组名用途：
    // 1. 统计整个数组的内存长度，即字节数;
    cout << sizeof(arr0)/sizeof(arr0[0]) << endl; //sizeof得出所占字节数
    // 2. 获取数组在内存中的首地址
    cout << arr1 << endl;           //取arr1的首地址，16进制数
    cout << (long)arr1 << endl;     //取arr1的首地址，转成10进制
    cout << (long)&arr1[0] << endl; //取arr1[0]的地址
    cout << (long)&arr1[1] << endl; //取arr1[1]的地址,增加了4字节

    // 例：5只小猪称体重
    int arr[5] = {300,350,200,400,250};
    int max = 0;
    int max_index = 0;
    for (int i=0;i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    cout << "第" << max_index+1 << "只小猪体重最重，为" << max << endl;
    // 例：数组元素逆置
    int size = 0;
    size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    //for (int i=0;i <= size/2; i++)
    for (int i=0;i < size; i++)
    {
        // 首尾互换，直到中间元素
        temp = arr[size-1-i];
        arr[size-1-i] = arr[i];
        arr[i] = temp;
        if (i >= size-1-i)
        {
            break;
        }
    }
    for (int i=0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    // 例：冒泡排序
    int ary[9] = {4,2,8,0,5,7,1,3,9};
    for (int i=0; i<9-1; i++)       // 排序总轮数 = 元素个数 - 1
    {
        for (int j=0; j<9-1-i; j++) // 每轮对比次数 = 元素个数 - 排序轮数 - 1
        {
            if (ary[j] > ary[j+1])
            {
                temp = ary[j+1];
                ary[j+1] = ary[j];
                ary[j] = temp;
            }
        }
    }
    for (int i=0; i<9; i++)
    {
        cout << ary[i] << "\t";
    }
    cout << endl;
    
    
    return 0;
}
