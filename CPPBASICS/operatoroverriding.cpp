#include <iostream>
#include <string>
std::string operator+(std::string s1,std::string s2){
  std::string retVal(s1);
  retVal.append(" ");
  retVal.append(s2);

  return retVal;
}
std::string operator--(std::string s1){
  std::string retVal;
  char previous{' '};
  for(char c : s1){
    if(previous==' '){
      retVal.push_back(c);
    }
    previous = c;
  }
  return retVal;
}
int main(){

  std::string fName{"Shiva Lingaiah"},lName{"Bandaru"};
  std::string fullName = fName + lName;
  std::cout << fullName <<std::endl;

  std::cout << --fullName;
  return 0;
}