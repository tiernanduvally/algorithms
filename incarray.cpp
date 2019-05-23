#include <iostream>

int arr_inc(int*, int);


int main(){
int* arr;
arr = new int[10];

for(int i =0; i<10;++i){
    arr[i] = i;
    }
for(int i = 0; i< 10;++i){
    std::cout<<arr[i]<<", ";
    
    }
std::cout<<std::endl;

arr_inc(arr,10);

for(int i =0;i<10;++i){
    std::cout<<arr[i]<<" ,";
    }
std::cout<<std::endl;
delete[] arr;
return 0;
}

void func(int *arr, int n){
for(int i = 0;i<n;++i){
    arr[i]+=1;
return;

    }   

}