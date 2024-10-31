#include <iostream>
#include "Time.h"

int main() {
    setlocale(LC_ALL, "UKR");
    Time t1;  // ������ ������������ �� �������������
    Time t2(15, 45, 30);  // ������ ������������ � �����������
    Time t3 = t2;  // ������ ������������ ���������

    std::cout << "��� t1 (�� �������������): " << t1.toString() << std::endl;
    std::cout << "��� t2 (i�i�i��i�������): " << t2.toString() << std::endl;
    std::cout << "��� t3 (���i������ � t2): " << t3.toString() << std::endl;

    std::cout << "��� t2 � 12-��������� ������: " << t2.to12HourFormat() << std::endl;

    return 0;
}
