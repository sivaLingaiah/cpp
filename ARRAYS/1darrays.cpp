#include <bits/stdc++.h>
using namespace std;
int main(){

  cout << "Static array Implementation"<<endl;

  int arr[5] = {1,2,3,4,5};
  cout << "Array Elements:";
  for(int i=0;i<5;i++){
    cout <<arr[i]<<" ";
  }

  cout << "Dynamic Implementation off arrays"<<endl;
  int n;
  cout << "Enter N value : ";
  cin >> n;
  int *nums = new int[n];
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }

  cout << "Array Elements : ";
  for(int i=0;i<n;i++){
    cout << nums[i] <<" ";
  }

  return 0;
}