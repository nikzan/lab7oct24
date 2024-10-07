#include <iostream>
#include <fstream>

void writeFibonacciInRange(int a, int b, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Unable to open file for writing" << std::endl;
        return;
    }

    int fib1 = 0, fib2 = 1;
    while (fib1 <= b) {
        if (fib1 >= a) {
            outFile << fib1 << std::endl;
        }
        int nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    outFile.close();
}

int main() {
    int a, b;
    std::cout << "Enter the range [a, b]: ";
    std::cin >> a >> b;

    writeFibonacciInRange(a, b, "/Users/nikzan/CLionProjects/lab7oct24/a.txt");

    return 0;
}