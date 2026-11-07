#include <iostream>
#include <algorithm>

int main(){
  int arr[] = {7,4,2,9,1};
  int n = 5;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        std::swap(arr[j],arr[j+1]);
      }
    }
  }
  for(int x : arr){
    std::cout << x;
    std::cout <<"\n";
  }
  return 0;
}