// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
bool x;
float a,b;
int main(){
    std::string str;
    std::cout << "Welcome, Enter Your Name: " << std::flush;
    std::cin >> str;
    std::cout << "Hello " << str << std::endl;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "a + b = " << a+b << std::endl;
    std::cout << "a - b = " << a-b << std::endl;
    if ((a+b)>(a-b))
    {
        x=1;
    }else{
        x=0;
    }
    std::cout<< "Comparison= " << x << std::flush;
    std::cout << std::endl << std::endl;
    return(0);
}

