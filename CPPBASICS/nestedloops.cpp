#include <iostream>

int main(){
  // int i,n;
  // std::cout << "Enter table value N : ";
  // std::cin >> n;
  // for(i=1;i<=10;i++){
  //   std::cout << ""<<n<<" x "<<i<<" = "<<(n*i)<<"\n";
  // }

  for(int i=1;i<10;i++){
    int power = 1;
    for(int j=1;j<=3;j++){
      power = power*i;
      std::cout << power <<" ";
    }
    std::cout << " \n";
  }
  return 0;
}