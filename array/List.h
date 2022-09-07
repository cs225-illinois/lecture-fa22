/**
 * Simple linked-memory, templated list class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 *   G. Carl Evans <gcevans@illinois.edu>
 */

#pragma once

template <typename T>
class List {
  public:
    List();
    ~List();
    T & operator[](unsigned index);
    void insertAtFront(const T & data);
    void insertAtBack(const T & data);
    void removeFront();
    void removeBack();
    bool isEmpty();

  private:
    T *data_;
    T *insertp_;
    T *fullp_;
};

#include "List.hpp"