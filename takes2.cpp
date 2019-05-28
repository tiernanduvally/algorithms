#include <iostream>

int main(){
    int stone;
    std::cout<<"Please enter an amount of Stones"<<std::endl;
    std::cin >> stone;

    if(stone % 2 == 0){
        std::cout<<"Bob"<<std::endl;
    }
    else{
        std::cout<<"Alice"<<std::endl;
    
    }

}