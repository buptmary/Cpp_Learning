#include "circle.h"

// 设置半径 获取半径
void Circle::setR(int R)
{
    c_r = R;
}

int Circle::getR()
{
    return c_r;
}

// 设置圆心
void Circle::setCenter(Point center)
{
    c_center = center;
}
// 获取圆心
Point Circle::getCenter()
{
    return c_center;
}
