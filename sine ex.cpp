#include <iostream>
#include <cmath>

int main() {

    for ( int i = 0; i <= 360; i++)
    {
        std::cout<<"Angle: "<< i << " / sine = " << sin(i) <<std::endl;
    }
    return 0;
}
