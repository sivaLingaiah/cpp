#include <iostream>
#include <set>
using namespace std;
void print_set(set<int> s){
  cout << "Set : ";
  set<int>::iterator it;
  for(it = s.begin();it!=s.end();it++){
    cout << *it<<" ";
  }
  cout <<endl;
}
int main(){
  set<int> s{10,50,30,20,40};
  cout<<"Size : "<<s.size()<<endl;
  print_set(s);
  for(int i=60;i<=70;i+=10){
    s.insert(i);
  }
  print_set(s);
  cout << "Size : "<<s.size()<<endl;
  cout << "Set is empty or not : "<<s.empty()<<endl;
  cout << "Found method : "<<s.count(40)<<endl;
  if(s.find(50)!=s.end()){
    cout << "50 is present in the set"<<endl;
  }else{
    cout << "50 is not present in the set"<<endl;
  }
  s.erase(s.find(50));
  s.erase(40);
  print_set(s);
  return 0;
}