#include <iostream>

int main(){
    int num;
    int temp;
    int count =0;
    std::cin>>num;

for(int i=0;i<num;i++){
    std::cin>>temp;
    if(temp<0){
       count++;
    }
}
std::cout<<count<<std::endl;
}