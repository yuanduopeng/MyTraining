//
//  point.h
//  04_类
//
//  Created by PENG Yuanduo on 2021/12/30.
//

#ifndef point_h
#define point_h
#include <iostream>
using namespace std;

class Point
{
private:
    double m_X;
    double m_Y;
public:
    void setPoint(double x, double y);

    double getX();

    double getY();

};

#endif /* point_h */
