#include <iostream>

std::string convertTime(int hour) {
    if (hour < 12) {
        return "AM";
    } else {
        return "PM";
    }
}

int main() {
    int hour;
    std::cout << "Enter the hour (0-23): ";
    std::cin >> hour;

    if (hour < 0 || hour > 23) {
        std::cout << "Invalid input. Please enter a number between 0 and 23." << std::endl;
    } else {
        std::cout << hour << " is " << convertTime(hour) << std::endl;
    }

    return 0;
}