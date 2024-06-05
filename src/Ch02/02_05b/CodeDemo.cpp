// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
auto a=2;
auto b=22343242;
auto c=3.56f;
auto d=124.5234;
auto e=true;
auto f="Hello";
auto g="Hello world";
int main(){
    std::cout << "The type of a is " << typeid(a).name() << std::endl;
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
