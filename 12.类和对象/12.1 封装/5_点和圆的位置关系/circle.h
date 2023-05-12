#pragma once
#include "point.h"

class Circle
{
private:
    int c_r;
    Point c_center;

public:
    // 设置半径 获取半径
    void setR(int R);

    int getR();

    // 设置圆心
    void setCenter(Point center);
    // 获取圆心
    Point getCenter();
};