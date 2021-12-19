//
//  main.cpp
//  06_指针和数组
//
//  Created by PENG Yuanduo on 2021/12/12.
//

#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
    cout << "function a = " << a << endl;
    cout << "function b = " << b << endl;
}

void swap02(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "swap02 a = " << *p1 << endl;
    cout << "swap02 b = " << *p2 << endl;
}

void bubbleSort(int* arr, int len)
{
    cout << "size of arr is " << sizeof(arr) << endl;
    for (int i=0; i<len-1; i++)
    {
        for (int j=0; j<len-1-i; j++)
        {
            // 把arr当做指针来用
            if (*(arr+j) > *(arr+j+1))
            {
                int temp = *(arr+j+1);
                *(arr+j+1) = *(arr+j);
                *(arr+j) = temp;
            }
            // 把arr当做数组来用
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void pringArray(int* arr, int len)
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {

    //指针和数组
    //利用指针访问数组中的元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "第一个元素是: " << arr[0] << endl;
    int* p = arr;
    cout << "利用指针访问第一个元素: " << arr[0] << endl;
    cout << "利用指针访问第一个元素: " << *p << endl;
    cout << p << endl;
    p++; //让指针向后偏移4个字节，因为p指针是int型
    cout << "利用指针访问第二个元素: " << *p << endl;
    cout << p << endl;
    cout << "利用指针遍历数组:" << endl;
    int* p1 = arr;
    for (int i=0; i<10; i++)
    {
        cout << *p1 << "\t";
        p1++;
    }
    cout << endl;

    //指针和函数
    //利用指针做函数参数，可以修改实参的值
    int a = 10; int b = 20;
    //值传递
    swap(a,b);
    cout << "main a = " << a << endl;
    cout << "main b = " << b << endl;
    //地址传递
    //地址传递可以修饰实参
    swap02(&a,&b);
    cout << "main a = " << a << endl;
    cout << "main b = " << b << endl;
    
    //例：冒泡排序
    int arr1[10] = {4,3,6,9,1,2,10,8,7,5};
    cout << "size of arr1 is " << sizeof(arr1) << endl;
    int len = sizeof(arr1)/sizeof(arr1[0]);
    bubbleSort(arr1, len);
    pringArray(arr1, len);
    cout << *arr1 << endl;
    cout << arr1 << endl;
    cout << &arr1 << endl;
    cout << arr1+1 << endl;
    cout << &arr1+1 << endl;
    
    return 0;
}
