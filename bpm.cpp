#include <iostream>

int main(){
   
    int amount;
    double answer;
    double abpm;
    std::cin>>amount;

    while(amount--){
       double b;
       double p;
       std::cin>>b;
       std::cin>>p;

       answer = 60.0 *(b/p);
       abpm = 60 / p;
    
        std::cout<<answer-abpm<< " " <<answer << " " <<answer+abpm <<" " <<std::endl;

    }


}