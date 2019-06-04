#include <iostream>

char* array;


void append(char s){
    array += s;
}
int main() {
append('a');
std::cout<<&append<<std::endl;
}