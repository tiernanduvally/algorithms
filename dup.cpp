#include <iostream>
#include <string>

int main(){
    
std::string word;
std::cin>> word;

int sentence[0]={};


for(int i  =0;i<word.length();i++){
    for(int j=0;j<word.length();j++){
        if(sentence[i]==sentence[j]){
            std::cout<<sentence<<std::endl;

            std::cout<<"yes"<<std::endl;
            break;
       
         }else{
        std::cout<<"no"<<std::endl; 
            break;
            }
        
        }
    
    }
}