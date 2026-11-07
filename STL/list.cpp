#include <iostream>
#include <list>
using namespace std;
void print_list(list<int> ls){
  if(!ls.empty()){
  list<int>::iterator it;
  cout <<"List : ";
  for(it=ls.begin();it!=ls.end();it++){
    cout <<*it<<" ";
  }
  cout<<endl;
}
else{
  cout << "list is empty!";
}
}
int main(){
  list<int> ls{10,20,30,40,50};
  print_list(ls);
  cout<<"size : "<<ls.size()<<endl;
  cout <<"Push back method in list"<<endl;
  ls.push_back(60);
  ls.push_back(70);
  cout << "After push back method(60,70)"<<endl;
  print_list(ls);
  cout << "Pop back method in list"<<endl;
  ls.pop_back();
  ls.pop_back();
  cout << "After pop back method"<<endl;
  print_list(ls);
  cout << "Push front mehtod in list"<<endl;
  ls.push_front(5);
  ls.push_front(1);
  cout << "After push front method(1,5)"<<endl;
  print_list(ls);
  cout <<"Insert method in list"<<endl;
  list<int>::iterator temp = ls.begin();
  advance(temp,1);
  ls.insert(temp,2);
  print_list(ls);
  cout << "Erase in method in list"<<endl;
  list<int>::iterator temp1 = ls.begin();
  advance(temp1,3);
  ls.erase(ls.begin(),temp1);
  print_list(ls);
  ls.clear();
  print_list(ls);
  return 0;
}