#include "Stack.hpp"
#include <iostream>
//#include "LinkedList.hpp"
Stack::Stack() {
  head = nullptr;
  len = 0;
}

Stack::~Stack() {
  Node* to_remove;
  while (head) {
    to_remove = head;
    head = head->next;
    delete to_remove;
  }
  len = 0;
}

/** size()
 * Returns the size of the stack.
 */
unsigned int Stack::size() {
  return len;
}

/** push(int data)
 * Pushes a node containing the given data to the top of the stack.
 */
void Stack::push(int data) {
  Node* n = new Node(data);
  if (!head) {
    head = n;
  } else {
    n->next = head;
    head = n;
  
  }
  ++len;
}

/** pop()
 * Removes and returns the data at the top of the stack.
 */
int Stack::pop() {
    Node* to_remove = head;
  int rval = head->data;
  if (len == 1) {
    head = nullptr;
  } else {
    head = to_remove->next;
  }
  delete to_remove;
  --len;
  return rval;
}

/** top()
 * Returns the data at the top of the stack without changing the stack.
 */
int Stack::top() {
  return head->next->data;
}

/** empty()
 * Returns whether or not the stack is empty.
 */
bool Stack::empty() {
  if (!head) {
    return true;
  } else {
    return false;
  }
}

/** clear()
 * Clears the entire stack.
 */
void Stack::clear() {
//   Node* to_remove;
//   while (head) {
//     to_remove = head;
//     head = head->next;
//     delete to_remove;
//   }
//   len = 0;
// }
}
