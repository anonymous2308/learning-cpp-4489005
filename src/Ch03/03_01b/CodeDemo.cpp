// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;
enum class cow_purpose{pet,meat,dairy,hide};
struct cow
{                
    string name;
    int age;
    cow_purpose purpose;
    /* data */                  
};

int main(){
    cow my_cow;
    my_cow.age=21;
    my_cow.name = "XYZ";
    my_cow.purpose= cow_purpose::pet;
    cout << my_cow.name << " is a type- " << int(my_cow.purpose) << " Cow who is of age " << my_cow.age << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
