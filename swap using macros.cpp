#include <iostream>


#define SWAP(x, y) do { \
    (x) = (x) + (y);    \
    (y) = (x) - (y);    \
    (x) = (x) - (y);    \
} while (0)

int main() {
   
    int num1 = 10;
    int num2 = 20;

    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    SWAP(num1, num2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    return 0;
}
