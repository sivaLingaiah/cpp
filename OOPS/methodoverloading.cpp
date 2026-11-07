#include <iostream>
using namespace std;
class Calculator{
public:
    int add(int a,int b){
      return a+b;
    }
    float add(float a,float b){
      return a+b;
    }
    double add(double a,double b){
      return a+b;
    }
  
};
int main(){
  Calculator c;
  cout << c.add(2,4) <<endl;
  cout << c.add(2.4,5.4) <<endl;
  cout << c.add(23.34453,45.63435) <<endl;
  return 0;
}