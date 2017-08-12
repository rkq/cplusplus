//
// Copyright (c) 2017 Rick Qiu. All rights reserved.
//
#ifndef CPLUSPLUS_ALGODS_LINKEDLIST_H_
#define CPLUSPLUS_ALGODS_LINKEDLIST_H_

#include <sstream>
#include <string>

namespace cplusplus {
namespace algods {
template <typename T>
  struct ListNode {
    T value;
    ListNode *next;
  };

template<typename T, typename InputIt>
  ListNode<T>* CreateList(InputIt first, InputIt last) {
    ListNode<T> *head = nullptr;
    ListNode<T>* c = nullptr;
    if (first != last) {
      head = new ListNode<T>();
      head->value = *first;
      head->next = nullptr;
      c = head;
      ++first;
    }
    while (first != last) {
      c->next = new ListNode<T>();
      c->next->value = *first;
      c->next->next = nullptr;
      c = c->next;
      ++first;
    }
    return head;
  }

  template<typename T>
  void DestroyList(ListNode<T> *head) {
    while (head != nullptr) {
      ListNode<T> *t = head;
      head = head->next;
      delete t;
    }
  }

  template<typename T>
  std::string List2String(ListNode<T> *head, const std::string& sep) {
    std::ostringstream oss;
    while (head != nullptr) {
      oss << head->value;
      if (head->next != nullptr) {
        oss << sep;
      }
      head = head->next;
    }
    return oss.str();
  }

  template<typename T>
  void ReverseList(ListNode<T> *&head) {
    if (head == nullptr || head->next == nullptr) {
      return;
    }
    ListNode<T> *current = head->next;
    ListNode<T> *prev = head;
    prev->next = nullptr;
    while (current->next != nullptr) {
      ListNode<T> *p = current->next;
      current->next = prev;
      prev = current;
      current = p;
    }
    current->next = prev;
    head = current;
  }
}  // namespace algods
}  // namespace cplusplus
#endif  // CPLUSPLUS_ALGODS_LINKEDLIST_H_
