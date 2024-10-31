#pragma once
#include <iostream>
#include <string>

class Time {
private:
    unsigned int hh, mm, ss;

public:
    Time();  // ����������� �� �������������
    Time(unsigned int, unsigned int, unsigned int);  // ����������� � �����������
    Time(const Time&);  // ����������� ���������
    ~Time();  // ����������

    void SetH(unsigned int);
    void SetM(unsigned int);
    void SetS(unsigned int);

    unsigned int GetH() const;
    unsigned int GetM() const;
    unsigned int GetS() const;

    std::string toString() const;  // ��������� � ������ �16 ����� 18 ������ 3 �������
    std::string to12HourFormat() const;  // ��������� � ������ �4 p.m. 18 ������ 3 �������
};
