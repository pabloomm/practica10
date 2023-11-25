#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector1;
    std::vector<int> vector2;

    // Input for vector1
    std::cout << "Enter elements for vector1 (non-integer to finish):\n";
    int num;
    while (std::cin >> num) vector1.push_back(num);

    // Clear cin state and ignore invalid input
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Input for vector2
    std::cout << "Enter elements for vector2 (non-integer to finish):\n";
    while (std::cin >> num) vector2.push_back(num);

    // Clear cin state and ignore invalid input
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Concatenate vectors
    std::vector<int> c(vector1.begin(), vector1.end());
    c.insert(c.end(), vector2.begin(), vector2.end());

    // Output concatenated vector
    std::cout << "Concatenated vector: ";
    for (const auto &element : c) std::cout << element << " ";

    return 0;
}

