// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    float a,b,c,d,e;
    std::cout << "Number 1: " << std::flush;
    std::cin >> a;
    std::cout << "Number 2: " << std::flush;
    std::cin >> b;
    std::cout << "Number 3: " << std::flush;
    std::cin >> c;
    std::cout << "Number 4: " << std::flush;
    std::cin >> d;
    std::cout << "Number 5: " << std::flush;
    std::cin >> e;
    float nums[5] = {a,b,c,d,e};
    float result;
    result= (nums[0]+nums[1]+nums[2]+nums[3]+nums[4])/5; 

    // Write your code here
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
