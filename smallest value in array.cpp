#include <iostream>
#include <array>

int main() {

    std::array <int, 10> data = { 1, 4, 6, 2, 5, 3, 8, 0, 7, 9};
    int smallest = data[0];

    for (int i = 0; i < 10; i++){
        if (data[i] < smallest){
            smallest = data[i];
        }

    }
    std::cout <<"Smallest value in the array is: "<< smallest <<std::endl;
    return 0;
}
