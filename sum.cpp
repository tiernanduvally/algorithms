#include <iostream>

int main(){
    int amount;
    std::cin>>amount;

    for(int i =0;i>amount;i++){
        int k;
        int n;

        std::cin>>k>>n;

        int s1 = n * (n+1)/2;
        int s2 = n * n;
        int s3 = n * (n+1);


    std::cout<<k<<" "<<s1<<" "<<s2<<" "<<s3<<std::endl;
    }
}
    