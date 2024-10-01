#include <iostream>
#include "tools.h"

void scalpel(const Point& start, const Point& end) {
    std::cout << "������ ������ �� ";
    start.output();
    std::cout << " �� ";
    end.output();
    std::cout << "." << std::endl;
}

void hemostat(const Point& point) {
    std::cout << "����� ���������� � ����� ";
    point.output();
    std::cout << "." << std::endl;
}

void tweezers(const Point& point) {
    std::cout << "������ ������������ � ����� ";
    point.output();
    std::cout << "." << std::endl;
}

void suture(const Point& start, const Point& end) {
    std::cout << "��� ������� �� ";
    start.output();
    std::cout << " �� ";
    end.output();
    std::cout << "." << std::endl;
}
