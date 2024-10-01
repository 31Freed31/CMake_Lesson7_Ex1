#include <iostream>
#include "tools.h"

void scalpel(const Point& start, const Point& end) {
    std::cout << "Сделан разрез от ";
    start.output();
    std::cout << " до ";
    end.output();
    std::cout << "." << std::endl;
}

void hemostat(const Point& point) {
    std::cout << "Зажим установлен в точке ";
    point.output();
    std::cout << "." << std::endl;
}

void tweezers(const Point& point) {
    std::cout << "Пинцет используется в точке ";
    point.output();
    std::cout << "." << std::endl;
}

void suture(const Point& start, const Point& end) {
    std::cout << "Шов наложен от ";
    start.output();
    std::cout << " до ";
    end.output();
    std::cout << "." << std::endl;
}
