#include <bits/stdc++.h>
using namespace std;
int main(){
  cout << "Indain Vs Pakistan Match!"<<endl;
  int n;
  cout << "Enter the total strength : ";
  cin >> n;

  int *nation = new int[n];

  for(int i=0;i<n;i++){
    cout << "Only 1 and 2 values are allowed!"<<endl;
    cout << "Press 1 for india"<<endl;
    cout << "Press 2 for pakistan"<<endl;
    cout << "Please enter here : "<<endl;
    cin>>nation[i];
  }
  int ind = 0;
  int pak = 0;
  for(int i=0;i<n;i++){
    if(nation[i]==1){
      ind++;
    }else{
      pak++;
    }
  }

  cout << "Number of indians : "<<ind<<endl;
  cout << "Number of pakistans : "<<pak<<endl;

  return 0;
}