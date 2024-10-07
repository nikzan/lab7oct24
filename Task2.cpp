#include <iostream>
#include <fstream>
#include <string>

bool containsDigit(int number, int digit) {
    std::string numStr = std::to_string(number);
    char digitChar = '0' + digit; // convert digit to char (5 -> '5')
    return numStr.find(digitChar) != std::string::npos; // check if the digit is in the number (npos means not found)
}

int main() {
    int a, b, N;
    std::cout << "Enter the range [a, b] and the digit N: ";
    std::cin >> a >> b >> N;

    std::ofstream outFile("/Users/nikzan/CLionProjects/lab7oct24/a.txt");
    if (!outFile.is_open()) {
        std::cerr << "Unable to open file for writing" << std::endl;
        return 1;
    }

    for (int i = a; i <= b; ++i) {
        if (containsDigit(i, N)) {
            outFile << i << std::endl;
        }
    }

    outFile.close();
    return 0;
}