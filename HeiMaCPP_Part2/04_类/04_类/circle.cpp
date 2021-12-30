//
//  circle.cpp
//  04_类
//
//  Created by PENG Yuanduo on 2021/12/30.
//

#include "circle.hpp"


void Circ::setCenter(Point center)
{
    m_Center = center;
}
void Circ::setRadius(double r)
{
    m_R = r;
}
Point Circ::getCenter()
{
    return m_Center;
}
double Circ::getRadius()
{
    return m_R;
}

