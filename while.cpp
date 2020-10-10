#include <iostream>

int main() {
    int total_money;

    std::cout << "Please introduce amount of money:\n ";
    std::cin >>  total_money;

    int banknotes = 0;
    while (total_money >= 50) {
        total_money = total_money - 50;
        banknotes = banknotes + 1;
    }
    std::cout <<"Number of banknotes: " << banknotes << std::endl;
    return 0;
}
