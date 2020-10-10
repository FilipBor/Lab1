#include <iostream>
#include <array>

int main() {

    std::array <int, 100> data;
        for( int i = 0; i <= 100; i++) {
            data[i] = i;

            std::cout << data[i] << std::endl;
        }
    return 0;
}
