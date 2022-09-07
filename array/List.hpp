/**
 * Simple linked-memory, templated list class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 *   G Carl Evans <gcevans@illinois.edu>
 */

#include <iostream>
#include "List.h"

#define BASESIZE 10

/**
 * default constructor
 */
template <typename T>
List<T>::List() {
  data_ = new T[BASESIZE];
  insertp_ = data_;
  fullp_ = data_ + BASESIZE;
}

/**
 * default destructor
 */
template <typename T>
List<T>::~List() {
  delete [] data_;
}

/**
 * insertAtFront
 */
template <typename T>
void List<T>::insertAtFront(const T & data) {
  _shiftright();
  *data_ = data;
}
/**
 * _shiftright
 */ 
template <typename T>
void List<T>::_shiftright() {
  // This should probably do something
  // Shift the data in the list one space right
  // Adding space if the list fills up
}

/**
 * insertAtBack
 */
template <typename T>
void List<T>::insertAtBack(const T & data) {
  *insertp_ = data;
  ++insertp_;
  if(insertp_ == fullp_){
    _addspace();
  }
}

/**
 * _addspace
 */ 
template <typename T>
void List<T>::_addspace() {
  // This should probably do something
  // allocate more space for list elements
}

/**
 * opreator[]
 */ 
template <typename T>
T & List<T>::operator[](unsigned index) {
  return data_[index];
}

/**
 * removeFront
 */
template <typename T>
void  List<T>::removeBack() {
  --insertp_;
}

/**
 * removeFront
 */
template <typename T>
void  List<T>::removeFront() {
  _shiftleft();
  --insertp_;
}

/**
 * _shiftleft
 */ 
template <typename T>
void List<T>::_shiftleft() {
  // This should probably do something
  // This moves all the elements in the list one to left
  // The first element in the list is lost
}

/**
 * isEmpty
 */
template <typename T>
bool  List<T>::isEmpty() {
  if(data_ == insertp_){
    return true;
  } else {
    return false;
  }
}

/**
 * isEmpty
 */
template <typename T>
int List<T>::size() {
  return insertp_ - data_;
}

/**
 * isEmpty
 */
template <typename T>
int List<T>::capacity() {
  return fullp_ - data_;
}
