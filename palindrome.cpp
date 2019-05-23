#include <iostream>
#include <string>

bool palindrome(char*);

int main(){
    char *str = 'akdnknfd';
    std::cout<<str<<" "<< palindrome(str)<<std::endl;
    return 0;
}

bool palindrome(char *str){
    int length;
    for(length=0;str[length];++length);
    for(int i =0;i<length/2;i++){
        if(str[i]!=str[length-i-1])
            return false;
    }
    return true;
}

