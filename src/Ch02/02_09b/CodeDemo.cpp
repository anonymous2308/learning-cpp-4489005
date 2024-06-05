// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH=25;
    char array[LENGTH] = "Hey there! ";
    char array1[]= "Good Morning";
    strcat(array, array1);
    std::string str= "Have a great day! ";
    std::string str1= "Tadowww";
    std::cout << array << std::endl;
    std::cout << str+str1 << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
