#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    
    // Output the original values
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;
    
    // Output the swapped values
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
