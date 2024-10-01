#include <iostream>
#include "point.h"

void Point::input() {
    std::cout << "¬ведите координаты (x y): ";
    std::cin >> x >> y;
}

void Point::output() const {
    std::cout << "(" << x << ", " << y << ")";
}

bool Point::is_equal(const Point& other) const {
    return (x == other.x && y == other.y);
}
