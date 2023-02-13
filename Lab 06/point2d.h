#pragma once

class point2D {
private:
    int x = 0;
    int y = 0;

public:
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    Point2D()
    {
    }
    Point2D(int ax, int ay)
    {
        x = ax;
        y = ay;
    }
};
