#include <iostream>


int main (){

    std::cout <<"Welcome to a system of 2 linear equations solver!"<<std::endl; // welcoming message

    float a1; // variable for storing coefficient a1
    float a2; // variable for storing coefficient b1
    float b1; // variable for storing absolute term c1
    float b2; // variable for storing coefficient a2
    float c1; // variable for storing coefficient b2
    float c2; // variable for storing absolute term c2

    std::cout <<"Please input coefficient a1\n"; // asking user to input coefficient a1
    std::cin >> a1; // reading input and putting it in variable a1

    std::cout <<"Please input coefficient b1\n"; // asking user to input coefficient b1
    std::cin >> b1; // reading input and putting it in variable b1

    std::cout <<"Please input absolute term c1\n"; // asking user to input absolute term c1
    std::cin >> c1; // reading input and putting it in variable c1

    std::cout <<"Please input coefficient a2\n"; // asking user to input coefficient a2
    std::cin >> a2; // reading input and putting it in variable a2

    std::cout <<"Please input coefficient b2\n"; // asking user to input coefficient b2
    std::cin >> b2; // reading input and putting it in variable b2

    std::cout <<"Please input absolute term c2\n"; // asking user to input absolute term c2
    std::cin >> c2; // reading input and putting it in variable c2

    float discriminant = (a1*b2)-(a2*b1); // variable for storing and computing discriminant value
    float discriminant_of_x = (c1*b2)-(c2*b1); // variable for storing and computing discriminant of x value
    float discriminant_of_y = (a1*c2)-(a2*c1); // variable for storing and computing discriminant of y value

    if (discriminant == 0){  // course of action regarding the discriminant's value

        std::cout <<"Your x and y can't be evaluated" << std::endl; // printing x and y values
    }
    else if (discriminant_of_x == 0)  // course of action regarding the discriminant of x value
    {
        float y = discriminant_of_y/discriminant; // variable for storing and computing y value

        std::cout <<"Your x is:"<< 0; std::cout<<" and y is: "<< y <<std::endl; // printing x and y values
    }
    else if (discriminant_of_y == 0)  // course of action regarding the discriminant of y value
    {
        float x = discriminant_of_x/discriminant; // variable for storing and computing x value

        std::cout <<"Your x is: "<< x; std::cout<<" and y is: "<< 0 <<std::endl; // printing x and y values
    }
    else // course of action regarding discriminant's value
    {
        float x = discriminant_of_x/discriminant; // variable for storing and computing x value
        float y = discriminant_of_y/discriminant; // variable for storing and computing y value

        std::cout <<"Your x is: "<< x; std::cout<<" and y is: "<< y << std::endl; // printing x and y values
    }
    return 0;
}
