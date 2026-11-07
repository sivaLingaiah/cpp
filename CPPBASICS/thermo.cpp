#include <iostream>
void printThermo(int t);
int main(){
  int temp;
  std::cout << "What is the temperature : ";
  std::cin >> temp;
  printThermo(temp);

  int temps[5];
  std::cout << "Enter temperature for next 5 days : ";
  for(int i=0;i<5;i++){
    std::cin >> temps[i];
  }
  for(int i=0;i<5;i++){
    printThermo(temps[i]);
  }
  return 0;
}
void printThermo(int t){
  for(int i=0;i<50;i++){
    std::cout << ((i<t)?1:0);
    std::cout << " ";
  }
  if(t<=18){
    std::cout << " Cool";
    std::cout << "\n";
  }
  else if(t<27){
    std::cout << " Light cool";
    std::cout << "\n";
  }else{
    std::cout << " Hot";
    std::cout << "\n";
  }
}