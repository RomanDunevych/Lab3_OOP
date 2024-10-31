#include "Time.h"
#include <sstream>
#include <iomanip>

// Конструктор за замовчуванням
Time::Time() : Time(0, 0, 0) {}

// Конструктор з параметрами
Time::Time(unsigned int h, unsigned int m, unsigned int s) : hh(h), mm(m), ss(s) {}

// Конструктор копіювання
Time::Time(const Time& other) : hh(other.hh), mm(other.mm), ss(other.ss) {}

// Деструктор
Time::~Time() {}

// Методи встановлення значень
void Time::SetH(unsigned int h) { hh = (h < 24) ? h : 0; }
void Time::SetM(unsigned int m) { mm = (m < 60) ? m : 0; }
void Time::SetS(unsigned int s) { ss = (s < 60) ? s : 0; }

// Методи отримання значень
unsigned int Time::GetH() const { return hh; }
unsigned int Time::GetM() const { return mm; }
unsigned int Time::GetS() const { return ss; }

// Форматування часу у 24-годинному форматі
std::string Time::toString() const {
    std::stringstream sout;
    sout << hh << " годин " << mm << " хвилин " << ss << " секунд";
    return sout.str();
}

// Форматування часу у 12-годинному форматі
std::string Time::to12HourFormat() const {
    std::stringstream sout;
    unsigned int hour = (hh % 12 == 0) ? 12 : hh % 12;
    std::string period = (hh < 12) ? "a.m." : "p.m.";
    sout << hour << " " << period << " " << mm << " хвилин " << ss << " секунд";
    return sout.str();
}
