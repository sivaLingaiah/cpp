#include <iostream>
#include <string>
#include <vector>
int main(){
  std::vector<int> nums;
  nums.push_back(7);
  nums.push_back(6);
  nums.push_back(5);
  nums.push_back(18);
  nums.push_back(2);
  for(int x : nums){
    std::cout << x <<"\n";
  }

  std::vector<std::string> names;
  names.push_back("Shiva");
  names.push_back("Srinu");
  names.push_back("Mangamama");
  names.push_back("Parvathi");
  names.push_back("Venu Kumar");

  for(auto name : names){
    std::cout << name <<"\n";
  }

  return 0;
}