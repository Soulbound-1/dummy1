#include <iostream>

int main() {
    // Bug 1: Uninitialized variable (contains random garbage memory)
    int luckyNumber;
    
    // Bug 2: Memory leak (allocating memory and losing the pointer immediately)
    int* leak = new int[100];
    leak = nullptr; 
    // Bug 6: Buffer Overflow (The "Crown Jewel" of vulnerabilities)
    char username[8]; 
    std::cout << "Enter your name: ";
    // If the user types "ThisIsWayTooLongForThisArray", it spills into adjacent memory.
    std::cin >> username; 
    std::cout << "Hello, " << username << "!" << std::endl;

    // Bug 3: Out-of-bounds array access (The "Off-by-one" classic)
    int scores[3] = {90, 84, 70};
    for (int i = 0; i <= 3; i++) {
        std::cout << "Score " << i << ": " << scores[i] << std::endl;
    }

    // Bug 4: Division by zero (runtime crash)
    int divisor = 0;
    int result = 100 / divisor;

    // Bug 5: Using a deleted pointer (Dangling pointer)
    int* ptr = new int(10);
    delete ptr;
    std::cout << "Value: " << *ptr << std::endl; 

    return 0;
}
