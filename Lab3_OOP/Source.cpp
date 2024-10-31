#include <iostream>
#include "Time.h"

int main() {
    setlocale(LC_ALL, "UKR");
    Time t1;  // Виклик конструктора за замовчуванням
    Time t2(15, 45, 30);  // Виклик конструктора з параметрами
    Time t3 = t2;  // Виклик конструктора копіювання

    std::cout << "Час t1 (за замовчуванням): " << t1.toString() << std::endl;
    std::cout << "Час t2 (iнiцiалiзований): " << t2.toString() << std::endl;
    std::cout << "Час t3 (копiювання з t2): " << t3.toString() << std::endl;

    std::cout << "Час t2 у 12-годинному форматі: " << t2.to12HourFormat() << std::endl;

    return 0;
}
