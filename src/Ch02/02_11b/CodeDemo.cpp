// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <string>

int main(){
    double f,c;
    std::string str;
    std::cout << "C or F: " << std::flush;
    std::cin >> str;
    if(str== "C"){
        std::cout << "Celcius= " << std::flush;
        std::cin >> c;
        f=(c * 9.0f/5.0)+32;
        std::cout << "Fahrenheit= " << f << std::endl;
    }
    else if (str== "F")
    {
        std::cout << "Fahrenheit= "  << std::flush;
        std::cin >> f;
        c = (f-32)*5.0f/9.0;
        std::cout << "Celcius= " << c << std::endl; 
    }   
    std::cout << std::endl << std::endl;
    return (0);
}
