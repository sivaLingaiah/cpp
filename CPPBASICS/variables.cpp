#include <iostream>
int main(){
  float degrees,fharenheat;

  std::cout<<"What is the temperature in C?";
  std::cin>>degrees;

  fharenheat = (degrees*9/5)+32;
  std::cout<<"Current temperature is "<<degrees<<"C"<<"\n";
  std::cout<<"Temperature in F is "<<fharenheat<<"F"<<"\n";
  return 0;
}