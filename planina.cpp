#include <iostream>


int main(){
int iteration;
std::cin>>iteration;
int mid = 1;
for(int i = 0;i<iteration;i++){
    mid*=2;
}

std::cout<<(mid+1) * (mid+1) <<std::endl;

}