#include <iostream>
#include <cmath>
int main(){

    std::cout <<"Welcome to the quadratic formula solver!"<<std::endl;

    float a; // variable for storing coefficient a
    float b; // variable for storing coefficient b
    float c; // variable for storing coefficient c

    std::cout <<"Please input coefficient a\n"; // asking user to input coefficient a by using cout
    std::cin >>a; // read input with cin and store it in variable a

    std::cout <<"Please input coefficient b\n"; // asking user to input coefficient b by using cout
    std::cin >>b; // read input with cin and store it in variable b

    std::cout <<"Please input coefficient c\n"; // asking user to input coefficient c by using cout
    std::cin >>c; // read input with cin and store it in variable c

    if(a == 0 && b == 0) // first pattern of solving quadratic formula
    {
        std::cout<< "Your x can't be defined " <<std::endl; // printing x value
    }
    else if ( a == 0)     // second pattern of solving quadratic formula
    {
        float x = -c/b;  //variable to compute and store x value
        std::cout<< "Your x is: " << x <<std::endl; // printing x value
    }
    else if ( b == 0 && ((a < 0 && c > 0) || ( a > 0 && c < 0))) // third pattern of solving quadratic formula
    {
       float x = sqrtf (-c/a); //variable to compute and store x value
        std::cout<< "Your x is: " << x <<std::endl; // printing x value

    }
    else if ( b == 0 && ((a > 0 && c > 0) || ( a < 0 && c < 0))) // continuation of the third pattern
    {
        std::cout<< "Your x can't be defined " <<std::endl; // printing x value

    }
    else if ( c == 0 && (b == 0 || a == 0) ) // fourth pattern of solving quadratic formula
    {
        float x = 0; //variable to store x value
         std::cout<<"Your x is: "<< x <<std::endl;    // printing x value
    }
    else if ( c == 0) // continuation of fourth pattern
    {
        float x1 = 0; // variable to store x1 value
        float x2 = -b/a; // variable to compute and store x2 value
        std::cout<<"Your x values are: "<< x1; std::cout <<" and "<< x2 <<std::endl; // printing values of both x1 and x2
    }
    else if (a != 0 && b != 0 && c != 0) // fifth pattern of solving quadratic formula
    {
        float discriminant = powf(b,2)-4*a*c; // variable to store and compute discriminant value
      if(discriminant > 0) // course of action regarding the value of discriminant
      {
            float x1 = (-b+sqrtf(discriminant))/(2*a); // variable to compute and store x1 value
            float x2 = (-b-sqrtf(discriminant))/(2*a); // variable to compute and store x2 value
            std::cout<<"Your x values are: "<< x1; std::cout <<" and "<< x2 <<std::endl; // printing both x1 and x2 values
        }
      else if(discriminant == 0) // course of action regarding the value of discriminant
      {
          float x0 = -b/(2*a); // variable to store and compute x0 value
          std::cout<<"Your x is: "<< x0 <<std::endl; // printing x0 value
      }
      else if(discriminant < 0) // course of action regarding the value of discriminant
      {
          std::cout<<"Your x can't be defined"<<std::endl; // printing x value
      }
    }
    return 0;
}