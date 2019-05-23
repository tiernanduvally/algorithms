#include <iostream>
#include <string>

int main(){
    std::cout<<"Please Enter your first and last name"<<std::endl;
    std::string name;
    std::string lastname;
    std::cin >> name;
    std::cin >> lastname;
    std::string greeting = "* Hello," + name + " "+ lastname + "! *";
    std::string stars(greeting.size(), '*');
    
    std::cout<< stars <<std::endl;
    std::cout<<greeting<<std::endl;
    std::cout<<stars<<std::endl;
    }