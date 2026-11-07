#include <iostream>
int main(){
  std::string names[5];
  int expenses[5],totalExp{0};
  float avgExp;

  std::cout << "---------------------------\n";
  std::cout << "WELCOME TO EXPENSE SPLITTER\n";
  std::cout << "---------------------------\n";

  for(int i=1;i<=5;i++){
    std::cout << "Enter person "<<i<<" name : ";
    std::cin >> names[i-1];
    std::cout << "How much "<<names[i-1]<<" spent? : ";
    std::cin >> expenses[i-1];
    totalExp = totalExp+expenses[i-1];
  }
  avgExp = totalExp / 5;
  std::cout << "Total Expenses "<<totalExp<<", Per person "<<avgExp<<"\n";
  for(int i=1;i<=5;i++){
    int toPay = avgExp - expenses[i-1];

    if(toPay > 0){
      std::cout << ""<<names[i-1]<<" to pay "<<(toPay)<<"\n";
    }else if(toPay<0){
      std::cout << ""<<names[i-1]<<" has to get "<<abs(toPay)<<"\n";
    }else{
      std::cout << ""<<names[i-1]<<" is all good"<<"\n";
    }

  }
  return 0;
}
