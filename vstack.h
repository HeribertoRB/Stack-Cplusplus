// =======================================================
// HW#: HW1P2 stack
// Your name: Heriberto Bernal
// Compiler:  gcc
// File type: header file stack.h
//=======================================================

//----- Globally setting up the aliases ----------------
typedef char el_t;      // the el_t type is char for now
                      // el_t is unknown to the client
#include <vector>
#include <iostream>
using namespace std;
//-------------------------------------------------------


class stack
{ 
  
 private: // to be hidden from the client
  
  vector<el_t> el;       // el is a vector of el_t's
  //int      top;           // top is index to the top of stack
  
 public: // prototypes to be used by the client
  // Note that no parameter variables are given
  
  // exception handling classes  
  class Overflow{};   // thrown when the stack overflows
  class Underflow{};  // thrown when the stack underflows
  
  stack();   // constructor to create an object
  ~stack();  // destructor  to destroy an object
  
  // PURPOSE: if not full, enters an element at the top;
  //          otherwise throws an exception - Overflow
  // PARAMETER: pass the element to be pushed
  void push(el_t);
  
  // PURPOSE: if not empty, removes and gives back the top element;
  //          otherwise throws an exception - Underflow
  // PARAMETER: provide variable to receive the popped element (pass by ref)
  void pop(el_t&);
  
  // PURPOSE: if not empty, gives the top element without removing it;
  //          otherwise, throws an exception - Underflow
  // PARAMETER: provide variable to receive the top element (pass by ref)
  void topElem(el_t&);

  //PURPOSE: It will check if the stack is empty
  bool isEmpty();
  //PURPOSE: It will check if the stack is full
  bool isFull();
  //PURPOSE: If not empty, it will display all elements in the stack
  void displayAll();
  //PURPOSE: If not full, it will remove all elements in the stack
  void clearIt();
  
};  

// Note: semicolon is needed at the end of the header file
