#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("/Users/nikzan/CLionProjects/lab7oct24/a.txt");

    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Unable to open file" << std::endl; // using cerr for error messages
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;

    while (file >> number) {
        sum += number;
        count++;
    }


    // Closing file
    file.close();

    if (count == 0) {
        std::cerr << "No numbers found in the file" << std::endl;
        return 1;
    }

    double average = static_cast<double>(sum) / count;
    std::cout << "Average: " << average << std::endl;

    return 0;
}