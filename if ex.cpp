#include <iostream>

int main() {
    int my_number;

    std::cout  <<"Please input any number:\n";

    std::cin >> my_number;

    if(my_number % 2==0 ){
        std::cout <<"Your number is even\n ";
    }
    else
    {
        std::cout <<"Your number is odd\n";
    }
    return 0;
}
