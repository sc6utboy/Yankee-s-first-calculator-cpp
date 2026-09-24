//
// Created by oem on 24.09.2026.
//

#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************** CALCUALATOR made by Yankee *****************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter number one: ";
    std::cin >> num1;

    std::cout << "Enter number two: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid response" << '\n';
            break;
    }

    std::cout << "**************************************************************";

    return 0;
}