#ifndef POINT_H
#define POINT_H

struct Point {
    double x, y;

    void input();

    void output() const;

    bool is_equal(const Point& other) const;
};

#endif
