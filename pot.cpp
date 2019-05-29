#include <iostream>
#include <cmath>


int main(){
int num;
int amount;
int answer = 0;
std::cin>>amount;
for(int i =0; i<amount;i++){
    std::cin>>num;

    answer+=pow((num/10),num%10);

    }
std::cout<<answer<<std::endl;
}