#include <iostream>
#include <map>
using namespace std;
void print_mp(map<int,int> mp){
  cout<<"Map : ";
  map<int,int>::iterator it;
  for(it=mp.begin();it!=mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  cout<<endl;
}
int main(){
  map<int,int> mp{{1,2},{2,3},{4,5}};
  cout << "Size : "<<mp.size()<<endl;
  print_mp(mp);
  for(int i=6;i<=10;i++){
    mp.insert({i,i+1});
  }
  cout << "Size : "<<mp.size()<<endl;
  print_mp(mp);
  cout << "Set is empty or not : "<<mp.empty()<<endl;
  if(mp.find(7)!=mp.end()){
    cout << "7 is present in the map"<<endl;
  }else{
    cout << "7 is not present in the map"<<endl;
  }
  mp.erase(mp.find(8));
  mp.erase(mp.find(6));
  mp.erase(mp.find(10));
  mp.erase(mp.find(9));
  mp.erase(mp.find(7));

  print_mp(mp);
  return 0;
}