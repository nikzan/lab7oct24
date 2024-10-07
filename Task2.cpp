#include <iostream>
#include <fstream>
#include <string>

bool containsDigit(int number, int digit) {
    std::string numStr = std::to_string(number);
    char digitChar = '0' + digit;
    return numStr.find(digitChar) != std::string::npos;
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