#include <iostream>
#include <cmath>
#include "circle.h"
#include "point.h"
using namespace std;

void is_in_circle(Point p1, Circle c1)
{
    Point p2 = c1.getCenter();
    int R2 = pow(c1.getR(), 2);
    if ((pow((p1.getX() - p2.getX()), 2) + pow((p1.getY() - p2.getY()), 2)) == R2)
    {
        cout << "点在圆上！" << endl;
    }
    else if ((pow((p1.getX() - p2.getX()), 2) + pow((p1.getY() - p2.getY()), 2)) > R2)
    {
        cout << "点在圆外！" << endl;
    }
    else
    {
        cout << "点在圆内！" << endl;
    }
}

int main()
{
    system("chcp 65001");
    Point p1;
    p1.setX(0);
    p1.setY(2);

    Point center;
    center.setX(0);
    center.setY(0);

    Circle c1;
    c1.setR(3);
    c1.setCenter(center);

    cout << c1.getR() << endl;

    is_in_circle(p1, c1);
}