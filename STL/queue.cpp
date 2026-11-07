#include <iostream>
#include <queue>
using namespace std;
void print_queue(queue<int> q){
  cout << "Queue : ";
  while(!q.empty()){
    cout << q.front()<<" ";
    q.pop();
  }
  cout<<endl;
}
int main(){
  queue<int> q;
  for(int i=10;i<=50;i+=10){
    q.push(i);
  }
  cout <<"Size : "<<q.size()<<endl;
  print_queue(q);
  cout << "Pop method in queue"<<endl;
  q.pop();
  print_queue(q);
  return 0;
}
