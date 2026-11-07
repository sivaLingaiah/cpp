#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){
  cout << "Single pair"<<endl;
  pair<int,int> p;
  p.first = 10;
  p.second = 11;
  cout << "First : "<<p.first<<endl;
  cout << "Second : "<<p.second<<endl;
  cout << "Second Pair Student"<<endl;
  cout << "Nested apirs"<<endl;
  pair<int,pair<int,string>> std;
  std.first = 1206;
  std.second.first = 1206;
  std.second.second = "Shiva";
  cout << "Std id: "<<std.first<<endl;
  cout << "Std number : "<<std.second.first<<endl;
  cout << "Std name : "<<std.second.second<<endl;

  cout << "Array of pairs "<<endl;
   pair<int,int> arr[3] = {
    {1,2},
    {2,3},
    {4,5}
  };
  for(int i=0;i<3;i++){
    cout << arr[i].first<<" "<<arr[i].second<<endl;
    
  }
  cout << endl;
  cout << "Vector apirs"<<endl;
  vector<pair<int,int>> v;
  v.push_back({1,2});
  v.push_back({3,4});
  v.push_back({5,6});
  for(auto vp : v){
    cout << vp.first <<" "<<vp.second<<endl;
  }
  return 0;
}
