//
//  point.cpp
//  04_类
//
//  Created by PENG Yuanduo on 2021/12/30.
//

#include "point.h"


void Point::setPoint(double x, double y)
{
    m_X = x;
    m_Y = y;
}
double Point::getX()
{
    return m_X;
}
double Point::getY()
{
    return m_Y;
}
