#include <iostream>

int main() {
    int my_number; // empty variable to store input

    std::cout << "Please input any integer number\n "; // asking user to input a number using cout

    std::cin >> my_number; // read input from cin and store in a variable called "my_number"

    std::cout << "Your number is: " << my_number << std::endl; // printing variable using cout

    return 0;
}
