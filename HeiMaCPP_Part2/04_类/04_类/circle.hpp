//
//  circle.hpp
//  04_类
//
//  Created by PENG Yuanduo on 2021/12/30.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include <iostream>
#include "point.h"
class Circ
{
private:
    double m_R;
    Point m_Center;
public:
    void setCenter(Point center);

    void setRadius(double r);

    Point getCenter();

    double getRadius();

};
#endif /* circle_hpp */
