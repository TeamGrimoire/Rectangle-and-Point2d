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
    point2D()
    {
    }
    point2D(int ax, int ay)
    {
        x = ax;
        y = ay;
    }
};
