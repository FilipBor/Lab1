#include <iostream>

int main() {
    int total_money;
    int banknote_value;
    std::cout << "Please introduce amount of money:\n ";
    std::cin >>  total_money;

    std::cout <<"Please introduce the value of banknote\n ";
    std::cin >> banknote_value;

    int banknotes = 0;

    for (banknotes = 0; total_money >= banknote_value; banknotes++ ){
        total_money = total_money - banknote_value;
    }
        std::cout <<"Number of banknotes: " << banknotes << std::endl;
    return 0;
}
