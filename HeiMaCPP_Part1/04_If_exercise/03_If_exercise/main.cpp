//
//  main.cpp
//  03_If_exercise
//
//  Created by PENG Yuanduo on 2021/12/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int w1,w2,w3;
    cout << "请输入三只小猪重量" << endl;
    cin >> w1 >> w2 >> w3;
    
    if (w1 > w2)
    {
        if (w1 > w3)
        {
            cout << "1最重" << endl;
        }
        else
        {
            cout << "3最重" << endl;
        }
    }
    else
    {
        if (w2 > w3)
        {
            cout << "2最重" << endl;
        }
        else
        {
            cout << "3最重" << endl;
        }
    }
    
    return 0;
}
