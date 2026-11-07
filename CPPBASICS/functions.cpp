#include <iostream>
using namespace std;
void doubleIt(int& thisNum){
  thisNum = thisNum*2;
}
void doubleIt(double& thisNum){
  thisNum = thisNum*2;
}
int main(){
  int x{23};
  double num{12.56};
  cout << "Before Double "<<x<<""<<endl;
  doubleIt(x);
  cout << "After Double in main "<<x<<""<<endl;

  cout << "Before Double "<<num<<""<<endl;
  doubleIt(num);
  cout << "After Double in main "<<num<<""<<endl;
  return 0;
}