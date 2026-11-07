#include <iostream>

int main(){
  std::string name;
  float degrees,f_temp;

  std::cout << "Hello,Welcome.My name is chitti,the bot\n";
  std::cout << "What is your name ? ";
  std::cin >> name;
  std::cout << "How hot is today ? ";
  std::cin >> degrees;
  std::cout << "Hello,"<<name<<"\n";

  f_temp = (degrees*9/5)+32;
  std::cout << "Current temperature in "<<degrees<<"C.\n";
  std::cout << "Temperature in F is "<<f_temp<<"\n";

  if(degrees>40){
    std::cout << "Abbo 🥵,chala vadiga Vundey";
  }
  else{
    std::cout << "Abba 🥶,chala challaga vundey";
  }
  return 0;
}