//
//  main.cpp
//  03_switch
//
//  Created by PENG Yuanduo on 2021/12/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // switch (表达式)
    // case 结果1：执行语句;break;
    // 例：电影打分
    int score = 10;
    cout << "请打0-10整数分：" << endl;
    cin >> score;
    cout << "分数为：" << score << endl;
    switch (score) //switch中只能是整型或字符型
    {
        case 10: cout << "经典电影" << endl;break;
        case 9: cout << "优秀电影" << endl;break;
        default: cout << "未知" << endl;break;
    }
    // switch的缺点：判断时只能是整型或字符型，无法判断区间
    // switch的优点：结构清晰，执行效率高
    
    return 0;
}
