#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

#include <iostream>

String::String() {
  // Allocate space.
  array = new char[1];

  // Add the null.
  array[0] = '\0';

  // Adjust private variables.
  _capacity = 0;
}

String::String(char c) {
  // Allocate space.
  array = new char[2];

  // Add the character and the null.
  array[0] = c;
  array[1] = '\0';

  // Adjust private variables.
  _capacity = 1;
}

String::String(char* str) {
  // Get the length of the incoming string.
  int length = 0;
  while (str[length])
    ++length;

  // Allocate space for the string plus a null.
  array = new char[length + 1];

  // Fill our array up, including the null.
  for (int i = 0; i <= length; ++i)
    array[i] = str[i];

  // Adjust private variables.
  _capacity = length;
}

String::~String() {
  delete[] array;
}
//------------------------------------------------------------------
  
  char String::at(int x) const{
      if(x == '\0'){
          throw x;
      }else{
          return array[x];
      }
  
  }

  bool String::empty() const{
   if(array == 0){
       return 1;
   }else{
       return 0;
   }
  }

  unsigned int String::size() const{
    //   for(int i = 0; i < length; i++){
    //       return array[i];
    //   }
      return 0;
  }

  unsigned int String::capacity() const{
      return array[length+1];
  }

  void String::reserve(unsigned int x){
      return;
  }

  void String::insert(char s, int x){
      return;
  }

  void String::erase(char s){
      return;
  }

  void String::remove(int x){
      return;
  }

  void String::append(char s){
    
  }

  void String::prepend(char s){
      
  }

  bool String::compare(char* str) const{
      return 0;
  }

  bool String::compare(String&) const{
      return 0;
  }

  void String::concatenate(char* str ){
      return;
  }
  void String::concatenate(String&){
      return;

  }

unsigned int String::find(char* str, int start) const{
    return 0;
}
unsigned int String::find(char s, int start) const{
    return 0;
}
unsigned int String::find(String&, int start ) const{
    return 0;
}

void String::reverse(){
    
    
    return;

}

void String::shift(int x){
    return;

}

int String::toInt() const{
   char * s;
   int n = 0;
   for(int i = 0; s[i] >= '0' && s[i]<= '9'; i++){
       n = 10 * n + (s[i] - '0');
   }
    return n;
}

String String::substr(int x, int y) const{
    return 'a';
}
