#include <iostream>

int main() {
    int n;

    std::cout << "Please introduce a number of times you want to repeat the sentence: ";
    std::cin >>  n;

    for (int i = 0; i < n; i++)
    {
        std::cout <<"I will not talk in class\n";
    }
    return 0;
}
