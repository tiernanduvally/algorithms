#ifndef __FUNCTIONS__
#define __FUNCTIONS__

#include "doctest/doctest/doctest.h"

/** Absolute Value.
 * Converts any integer to its absolute value.
 * O(1) and Omega(1), thus,
 * Theta(1)
 */
int abs_val(int x);

TEST_CASE("Testing the absolute value function") {
  CHECK(abs_val(1) == 1);
  CHECK(abs_val(-1) == 1);
  CHECK(abs_val(-60) == 60);
  CHECK(abs_val(60) == 60);
  CHECK(abs_val(33) == 33);
  CHECK(abs_val(-33) == 33);
  CHECK(abs_val(14) == 14);
  CHECK(abs_val(0) == 0);
}

/** Power.
 * Raise the given base to the given power.
 * O(?)
 */
int pow(int base, int num);

TEST_CASE("Testing the power function") {
  CHECK(pow(1, 0) == 1);
  CHECK(pow(10, 0) == 1);
  CHECK(pow(100, 0) == 1);
  CHECK(pow(1, 2) == 1);
  CHECK(pow(1, 5) == 1);
  CHECK(pow(1, 10) == 1);
  CHECK(pow(2, 1) == 2);
  CHECK(pow(2, 3) == 8);
  CHECK(pow(2, 5) == 32);
  CHECK(pow(5, 2) == 25);
  CHECK(pow(3, 3) == 27);
}

/** Logarithm.
 * Returns an integer such that base^{integer} = number.
 * O(?)
 */
int log(int base, int num);

TEST_CASE("Testing the logarithm function") {
  CHECK(log(3, 27) == 3);
  CHECK(log(2, 4) == 2);
  CHECK(log(2, 8) == 3);
  CHECK(log(2, 10) == 3);
  CHECK(log(5, 25) == 2);
}

/** Character to Int.
 * Returns the integer value of the given character [0, 9].
 * O(?)
 */
int chartoint(char c);

TEST_CASE("Testing the character to integer function") {
  CHECK(chartoint('0') == 0);
  CHECK(chartoint('1') == 1);
  CHECK(chartoint('2') == 2);
  CHECK(chartoint('3') == 3);
  CHECK(chartoint('4') == 4);
  CHECK(chartoint('5') == 5);
  CHECK(chartoint('6') == 6);
  CHECK(chartoint('7') == 7);
  CHECK(chartoint('8') == 8);
  CHECK(chartoint('9') == 9);
}

/** Int to Character.
 * Returns the character represented by the given integer [0, 9].
 * O(?)
 */
char inttochar(int x);

TEST_CASE("Testing the integer to character function") {
  CHECK(inttochar(0) == '0');
  CHECK(inttochar(1) == '1');
  CHECK(inttochar(2) == '2');
  CHECK(inttochar(3) == '3');
  CHECK(inttochar(4) == '4');
  CHECK(inttochar(5) == '5');
  CHECK(inttochar(6) == '6');
  CHECK(inttochar(7) == '7');
  CHECK(inttochar(8) == '8');
  CHECK(inttochar(9) == '9');
}

/** Character.
 * Returns the character represented by the integer give.
 * O(?)
 */
char chr(int);

TEST_CASE("chr()") {
  CHECK(chr(43) == '+');
  CHECK(chr(40) == '(');
  CHECK(chr(48) == '0');
  CHECK(chr(122) == 'z');
}

/** Ordinal.
 * Returns the index of the ASCII character given.
 * O(?)
 */
int ord(char);

TEST_CASE("ord()") {
  CHECK(ord('c') == 99);
  CHECK(ord('O') == 79);
  CHECK(ord('|') == 124);
}

/** Max.
 * Returns the maximum element from the parameters given.
 * O(?)
 */
int max(int, int);
int max(int, int, int);
int max(int arr[], int n);

TEST_CASE("Max") {
  SUBCASE("Two variables.") {
    CHECK(max(1, 2) == 2);
    CHECK(max(2, 1) == 2);
    CHECK(max(-50, 50) == 50);
    CHECK(max(0, 0) == 0);
  }
  SUBCASE("Three variables.") {
    CHECK(max(1, 2, 3) == 3);
    CHECK(max(3, 2, 1) == 3);
    CHECK(max(1, 1, 1) == 1);
    CHECK(max(0, 4, 0) == 4);
  }
  SUBCASE("Arrays of integers.") {
    int arr1[5] = {-2, -1, 0, 1, 2};
    CHECK(max(arr1, 5) == 2);

    int arr3[7] = {-8, -6, 7, 5, -3, 0, -9};
    CHECK(max(arr3, 7) == 7);

    int arr4[1] = {34982};
    CHECK(max(arr4, 1) == arr4[0]);
  }
}

/** Min.
 * Returns the minimum element from the parameters given.
 * O(?)
 */
int min(int, int);
int min(int, int, int);
int min(int arr[], int n);

TEST_CASE("Min") {
  SUBCASE("Two variables.") {
    CHECK(min(1, 2) == 1);
    CHECK(min(2, 1) == 1);
    CHECK(min(1, 1) == 1);
    CHECK(min(-20, 20) == -20);
  }
  SUBCASE("Three variables.") {
    CHECK(min(1, 2, 3) == 1);
    CHECK(min(3, 2, 1) == 1);
    CHECK(min(1, 1, 1) == 1);
    CHECK(min(0, 4, 0) == 0);
  }
  SUBCASE("Arrays of variables.") {
    int arr1[5] = {2, 1, 0, -1, -2};
    CHECK(min(arr1, 5) == -2);

    int arr3[7] = {-8, -6, 7, 5, -3, 0, -9};
    CHECK(min(arr3, 7) == -9);

    int arr4[1] = {34982};
    CHECK(min(arr4, 1) == arr4[0]);
  }
}

/** Round a float.
 * Rounds a float either (u)p or (d)own, depending on the char given.
 * O(?)
 */
int round(double, char);

TEST_CASE("Round a float.") {
  SUBCASE("Up") {
    CHECK(round(2.1, 'u') == 3);
    CHECK(round(-4.6, 'u') == -4);
  }
  SUBCASE("Down") {
    CHECK(round(4.6, 'd') == 4);
    CHECK(round(-5.5, 'd') == -6);
  }
}

/** All true.
 * Checks if all elements in the array are true.
 * O(?)
 */
bool all(bool arr[], int n);

TEST_CASE("All true.") {
  bool arr1[1] = {true};
  CHECK(all(arr1, 1));

  bool arr2[1] = {false};
  CHECK(!all(arr2, 1));

  bool arr3[6] = {true, true, true, true, true, false};
  CHECK(!all(arr3, 6));

  bool arr4[6] = {false, true, true, true, true, true};
  CHECK(!all(arr4, 6));
}

/** Any true
 * Returns whether or not any element is true.
 * O(?)
 */
bool any(bool arr[], int n);

TEST_CASE("Any element.") {
  bool arr1[1] = {true};
  CHECK(any(arr1, 1));

  bool arr2[1] = {false};
  CHECK(!any(arr2, 1));

  bool arr3[6] = {false, false, false, false, false, true};
  CHECK(any(arr3, 6));

  bool arr4[6] = {true, false, false, false, false, false};
  CHECK(any(arr4, 6));
}

/** Frequency of x.
 * Returns the frequency of x in the given array.
 * O(?)
 */
int frequency(int arr[], int n, int x);

TEST_CASE("testing frequency function") {
  int arr[10] = {1, 1, 1, 3, 2, 5, 3, 4, 7, 7};
  CHECK(frequency(arr, 10, 1) == 3);
  CHECK(frequency(arr, 10, 3) == 2);
  CHECK(frequency(arr, 10, 4) == 1);
  CHECK(frequency(arr, 10, 6) == 0);
  CHECK(frequency(arr, 10, 7) == 2);

  int arr2[0] = {};
  for (int i = -1; i < 10; ++i) {
    CHECK(frequency(arr2, 0, i) == 0);
  }
}

/** Sum.
 * Returns the sum of all elements in the array.
 * O(?)
 */
long sum(int arr[], int n);

TEST_CASE("testing sum function") {
  int arr1[1] = {5};
  CHECK(sum(arr1, 1) == 5);

  int arr2[5] = {1, 2, 3, 4, 5};
  CHECK(sum(arr2, 5) == 15);

  int arr3[2] = {2000000000, 2000000000};
  CHECK(sum(arr3, 2) == 4000000000);

  int arr4[2] = {-2000000000, -2000000000};
  CHECK(sum(arr4, 2) == -4000000000);
}

/** Index.
 * Returns the index of the given substring if found, or -1.
 * O(?)
 */
int index(char str[], char substr[]);

TEST_CASE("testing index function") {
  char str1[] = "this is my string";
  char sub1[] = "ring";
  char sub2[] = "thin";
  char sub3[] = "";

  CHECK(index(str1, sub1) == 13);
  CHECK(index(str1, sub2) == -1);
  CHECK(index(str1, sub3) == 0);
  CHECK(index(str1, str1) == 0);

  char str2[] = "a";
  char sub4[] = "apple";

  CHECK(index(str2, sub4) == -1);
  CHECK(index(str2, str2) == 0);
}

/** Is sorted.
 * Returns if an array is strictly increasing, decreasing, or neither.
 * O(?)
 */
bool is_sorted(int arr[], int n);

TEST_CASE("testing sorted array check function") {
  int arr1[1] = {80};
  CHECK(is_sorted(arr1, 1));

  int arr2[2] = {5, 4};
  CHECK(!is_sorted(arr2, 2));

  int arr3[6] = {1, 1, 3, 3, 5, 5};
  CHECK(is_sorted(arr3, 6));

  int arr4[5] = {1, 2, 3, 4, 3};
  CHECK(!is_sorted(arr4, 5));
}

#endif