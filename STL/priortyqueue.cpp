#include <iostream>
#include <queue>
using namespace std;
void print_pq(priority_queue<int> pq){
  cout << "PriortyQueue : ";
  while(!pq.empty())
  {
     cout<<pq.top()<<" ";
     pq.pop(); 
  }
  cout<<endl;
}
void print_pq(priority_queue<int,vector<int>,greater<int>> minq){
  cout << "PriortyQueue : ";
  while(!minq.empty())
  {
     cout<<minq.top()<<" ";
     minq.pop(); 
  }
  cout<<endl;
}
int main(){
  cout << "----------------"<<endl;
  cout << "MAX PRIORTY QUEUE"<<endl;
  cout << "-----------------"<<endl;
  priority_queue<int> pq;
  for(int i=10;i<=50;i+=10){
    pq.push(i);
  }
  cout << "Size : "<<pq.size()<<endl;
  print_pq(pq);
  cout << "Pop method"<<endl;
  pq.pop();
  print_pq(pq);
  cout << "----------------"<<endl;
  cout << "MIN PRIORTY QUEUE"<<endl;
  cout << "-----------------"<<endl;
  priority_queue<int,vector<int>,greater<int>> minq;
  for(int i=10;i<=50;i+=10){
    minq.push(i);
  }
  cout << "Size : "<<minq.size()<<endl;
  print_pq(minq);
  cout << "Pop method"<<endl;
  minq.pop();
  print_pq(minq);
  return 0;
}