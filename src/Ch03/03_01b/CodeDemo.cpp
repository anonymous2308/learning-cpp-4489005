// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;
enum class cow_purpose{pet,meat,dairy,hide};
class cow
{                
public:
    cow(string name_i,int age_i, cow_purpose purpose_i){
        name = name_i;
        age= age_i;
        purpose = purpose_i;
    }
    string get_name()const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose()const{
        return purpose;
    }
private:
    string name;
    int age;
    cow_purpose purpose;
    /* data */                  
};

int main(){
    cow my_cow("ABD", 12, cow_purpose::meat);
    cout << my_cow.get_name() << " is a type- " << int(my_cow.get_purpose()) << " Cow who is of age " << my_cow.get_age() << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
