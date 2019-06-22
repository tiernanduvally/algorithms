#include "LinkedList.hpp"

LinkedList::LinkedList() {
  head = nullptr;
  tail = nullptr;
  len = 0;
}

LinkedList::~LinkedList() {
}

unsigned int LinkedList::length() {
  return len;
}

void LinkedList::push_front(int d) {
  Node* temp = new Node(d);
  if (!head) {
    head = temp;
  } else {
    temp->next = head->next;
    temp->prev = head;
  }
  len++;
}

int LinkedList::pop_front() {}

int LinkedList::index(int data) {}

void LinkedList::push_back(int d) {}

int LinkedList::pop_back() {}

int LinkedList::at(int idx) {}

int LinkedList::set(int idx, int d) {}

void LinkedList::push(int d, int idx) {}

int LinkedList::pop(int idx) {}

void LinkedList::clear() {
  Node* to_remove;
  if (!head) {
    throw "Empty List";
  }
  while (head) {
    to_remove = head;
    head = head->next;
    head->prev = tail;
    tail->next = head->next;
    delete to_remove;
    // len--;
  }
  len = 0;
}

void LinkedList::remove(int d) {}

void LinkedList::reverse() {}

void LinkedList::print(std::ostream& oss) {
  Node* temp = head;
  while (temp) {
    oss << temp->data << ", ";
    temp = temp->next;
  }
  oss << std::endl;
  return;
}