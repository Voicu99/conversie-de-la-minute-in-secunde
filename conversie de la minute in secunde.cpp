// conversie de la minute in secunde.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int minuteToSeconds(int minute) {
    return minute * 60;
}

int main() {
    int minute;
    std::cout << "Introduceti minutele: ";
    std::cin >> minute;

    int secunde = minuteToSeconds(minute);
    std::cout << minute << " minute sunt echivalente cu " << secunde << " secunde." << std::endl;

    return 0;
}