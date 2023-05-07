#pragma once
#include <iostream>

class Point
{
private:
    int p_x;
    int p_y;

public:
    void setX(int x);
    void setY(int y);

    int getX();
    int getY();
};