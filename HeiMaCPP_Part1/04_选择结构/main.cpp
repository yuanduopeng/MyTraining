//
//  main.cpp
//  03_FlowStructure
//
//  Created by PENG Yuanduo on 2021/12/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
//    流程结构
//    顺序结构：一行一行执行，不跳转
//    选择结构：看条件，选择性执行相应代码
//    循环结构：看条件，多次循环执行相应代码
    
    // 选择结构
    int score = 0;
    cout << "请输入分数： " << endl;
    cin >> score;
    cout << "分数为: " << score << endl;
    if (score > 600) // if条件语句后面不能加分号！！
                     // 分号意味着把条件和执行语句隔开了
    {
        cout << "一本" << endl;
        if (score > 700)
        {
            cout << "北大" << endl;
        }
        else if (score > 650)
        {
            cout << "清华" << endl;
        }
        else
        {
            cout << "人大" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "二本" << endl;
    }
    else if (score > 400)
    {
        cout << "三本" << endl;
    }
    else
    {
        cout << "啥也没考上" << endl;
    }
    
    
    
    
    return 0;
}
