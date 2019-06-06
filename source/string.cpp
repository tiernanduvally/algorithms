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

int String::len() {
  int length = 0;
  while (array[length]) {
    ++length;
  }
  return length;
}

char String::at(int x) const {
  //   if(*(array) > '\0'){
  //       return array[x];
  //   }else{
  //       throw "Select Another Value";
  //   }
  return *array;
}

bool String::empty() const {
  // if array is not empty return false
  if (*(array) != 0) {
    return 0;
    // else return true
  } else {
    return 1;
  }
}

unsigned int String::size() const {
  // used to access subsequent array elements
  int sub = 0;
  // used to count number of elements in the array
  int count = 0;
  // while *array + offset don't equal NULL
  while (*(array + sub) != '\0') {
    // increment count
    count++;
    // advance to the next element
    sub++;
  }
  // return size of array
  return count;
}

unsigned int String::capacity() const {
  // combined empty and
  int sub = 0;
  int count = 0;

  if (*(array) == 0) {
    return 0;
  } else {
    while (*(array + sub) != '\0') {
      // increment count
      count++;
      // advance to the next element
      sub++;
    }
    // return size of array
    return count;
  }
}

void String::reserve(unsigned int x) {

}
void String::insert(char s, int x) {
  return;
}

void String::erase(char s) {

}

void String::remove(int x) {

}
void String::append(char s) {

}

void String::prepend(char s) {}

bool String::compare(char* str) const {
  
  if (strlen(array) == strlen(str)) {
    return 0;
  } else {
    return 1;
  }
}

bool String::compare(String&) const {
  return 0;
}

void String::concatenate(char* str) {
}
void String::concatenate(String&) {
  return;
}

unsigned int String::find(char* str, int start) const {
  return 0;
}
unsigned int String::find(char s, int start) const {
  return 0;
}
unsigned int String::find(String&, int start) const {
  return 0;
}

void String::reverse() {
  // loop as long as i > len/2
  for (unsigned int i = 0; i < len() / 2; i++) {
    // hold array[i] in a temp variable
    char temp = array[i];
    array[i] = array[len() - i - 1];
    array[len() - i - 1] = temp;
  }
}

void String::shift(int x) {
  return;
}

int String::toInt() const {
  return 0;
}

String String::substr(int x, int y) const {
  return 'a';
}
