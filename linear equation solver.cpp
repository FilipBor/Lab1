#include <iostream>

int main() {
    float a;
    float b;
    float c;

    std::cout << "Please input a coefficient: \n";

    std::cin >> a;

    std::cout << "Please input b coefficient: \n";

    std::cin >> b;

    std::cout << "Please input c coefficient: \n";

    std::cin >> c;

    float x = ( c - b ) / a;
    std::cout <<"Value of the x = " << x << std::endl;

}

