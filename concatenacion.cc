#include <iostream>
#include <vector>
#include <limits>

// Function to read integers until a non-integer is encountered
std::vector<int> readIntegers() {
    std::vector<int> result;
    int num;

    while (std::cin >> num) {
        result.push_back(num);
    }

    // Clear cin state and ignore invalid input
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return result;
}

int main() {
    // Input for vector1
    std::cout << "Enter elements for vector1 (non-integer to finish):\n";
    std::vector<int> vector1 = readIntegers();

    // Input for vector2
    std::cout << "Enter elements for vector2 (non-integer to finish):\n";
    std::vector<int> vector2 = readIntegers();

    // Concatenate vectors
    std::vector<int> c(vector1.begin(), vector1.end());
    c.insert(c.end(), vector2.begin(), vector2.end());

    // Output concatenated vector
    std::cout << "Concatenated vector: ";
    for (const auto &element : c) std::cout << element << " ";

    return 0;
}
