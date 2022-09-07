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
  data_ = new t[BASESIZE];
  insertp_ = data_;
  fullp_ = data_ + BASESIZE;
}

/**
 * default destructor
 */
template <typename T>
List<T>::List() {
  delete [] data_;
}

/**
 * insertAtFront
 */
template <typename T>
void List<T>::insertAtFront(const T & data) {
  //move right
  *data_ = data;
}

/**
 * insertAtBack
 */
template <typename T>
void List<T>::insertAtBack(const T & data) {
  *insertp_ = data;
  ++insertp_;
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
  //move left
  --insertp_;
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
