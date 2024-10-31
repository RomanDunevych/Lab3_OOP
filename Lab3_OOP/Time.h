#pragma once
#include <iostream>
#include <string>

class Time {
private:
    unsigned int hh, mm, ss;

public:
    Time();  // Конструктор за замовчуванням
    Time(unsigned int, unsigned int, unsigned int);  // Конструктор з параметрами
    Time(const Time&);  // Конструктор копіювання
    ~Time();  // Деструктор

    void SetH(unsigned int);
    void SetM(unsigned int);
    void SetS(unsigned int);

    unsigned int GetH() const;
    unsigned int GetM() const;
    unsigned int GetS() const;

    std::string toString() const;  // Виведення у форматі «16 годин 18 хвилин 3 секунди»
    std::string to12HourFormat() const;  // Виведення у форматі «4 p.m. 18 хвилин 3 секунди»
};
