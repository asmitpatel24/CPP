// WHAT IS POINTER?
//  Pointer is a data type which holds the address of other data type.
#include<iostream>
using namespace std;
int main() {
  int a=3;
  int* b=&a;
  
  // &-->(address of) operator
  cout<<"The address of a is "<<&a<<endl;
  cout<<"the address of a is "<<b<<endl;

  //  *-->(value at) dereferene operator
  cout<<"the value at address b is "<<*b<<endl;

  return 0;

}
