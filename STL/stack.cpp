#include <iostream>
#include <stack>
using namespace std;
void print_stack(stack<int> st){
  cout << "Stack : ";
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}
int main(){
  stack<int> st;
  for(int i=10;i<=50;i+=10){
    st.push(i);
  }
  cout<<"Size : "<<st.size()<<endl;
  print_stack(st);
  cout << "Pop method"<<endl;
  st.pop();
  print_stack(st);
  return 0;
}