#include <iostream>
#include "point.h"
#include "tools.h"

int main() {
    setlocale(LC_CTYPE, "rus");

    Point start, end;

    std::cout << "Начните операцию с команды scalpel." << std::endl;

    std::cout << "Введите начальную и конечную точки для scalpel: " << std::endl;
    start.input();
    end.input();
    scalpel(start, end);

    std::string command;
    bool operationInProgress = true;

    while (operationInProgress) {
        std::cout << "Введите команду (hemostat, tweezers, suture): ";
        std::cin >> command;

        if (command == "hemostat") {
            Point point;
            point.input();
            hemostat(point);
        }
        else if (command == "tweezers") {
            Point point;
            point.input();
            tweezers(point);
        }
        else if (command == "suture") {
            Point sutureStart, sutureEnd;
            sutureStart.input();
            sutureEnd.input();
            if (sutureStart.is_equal(start) && sutureEnd.is_equal(end)) {
                suture(sutureStart, sutureEnd);
                operationInProgress = false;
                std::cout << "Операция завершена." << std::endl;
            }
            else {
                std::cout << "Ошибка: точки для suture должны совпадать с точками для scalpel." << std::endl;
            }
        }
        else {
            std::cout << "Неизвестная команда. Попробуйте снова." << std::endl;
        }
    }

    return 0;
}
