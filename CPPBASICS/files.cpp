#include <iostream>
#include <fstream>
int main(){
  std::ofstream myfile("sample.txt");
  myfile << "Hello Welcome to file systems";
  myfile << "Whats your plans right know";
  myfile.close();

  std::ifstream myfile1("sample.txt");
  std::string fileContent;
  while(std::getline(myfile1,fileContent)){
    std::cout << fileContent;
    std::cout <<std::endl;
  }
  return 0;
}