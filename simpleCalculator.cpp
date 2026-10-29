#include <iostream>

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cerr << "Error: division by zero" << std::endl;
        return 0.0;
    }
}

int main () {
    std::cout << multiply(3.0, 4.0) << std::endl;
    std::cout << divide(10.0, 4.0) << std::endl;
    std::cout << divide(1.0, 0.0) << std::endl;
    return 0;
}