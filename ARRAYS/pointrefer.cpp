#include <bits/stdc++.h>
using namespace std;
int main(){
  int a = 20;
  int &b = a;
  cout <<a<<" "<<b<<endl;
  b = 30;
  cout <<a<<" "<<b<<endl;
  a = 40;
  cout <<a<<" "<<b<<endl;
  return 0;
}