#include <iostream>
#include <string>
int main(){
std::cout<<"Enter 2 numbers"<<std::endl;

std::string fnumber;
std::string snumber;

std::cin>> fnumber;
std::cin >>snumber;

std::cout<<"Enter an operation"<<std::endl;
std::string operation;
std::cin>>operation;

switch(operation){
    case '+':
         std::cout<<std::stoi(fnumber)+std::stoi(snumber)<<std::endl;
         break;
    case "-":
        std::cout<<std::stoi(fnumber)-std::stoi(snumber)<<std::endl;
        break;
    default:
        std::cout<<"Improper Operator";
}

return 0;
}