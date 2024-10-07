#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("/Users/nikzan/CLionProjects/lab7oct24/a.txt");
    if (!file.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    int N;
    file >> N;

    bool allPositive = true;
    int number;

    for (int i = 0; i < N; ++i) {
        file >> number;
        allPositive = allPositive && (number > 0);
    }

    file.close();

    if (allPositive) {
        std::cout << "The sequence is all positive." << std::endl;
    } else {
        std::cout << "The sequence is not all positive." << std::endl;
    }

    return 0;
}