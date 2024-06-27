#include <iostream>
#include <string>
std::string reverseString(const std::string& input) {
    std::string reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }
    return reversed;
}
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string reversedString = reverseString(input);
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

