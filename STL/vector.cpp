#include <iostream>
#include <vector>
using namespace std;
void print_vector(std::vector<int> v){
  if(!v.empty()){
  vector<int>::iterator it;
  cout <<"Vecort : ";
  for(it=v.begin();it!=v.end();it++){
    cout <<*it<<" ";
  }
  cout<<endl;
}
else{
  cout << "vector is empty!";
}
}
int main()
{
    vector<int> v{10,20,30,40,50};
    print_vector(v);
    v.push_back(60);
    v.push_back(70);
    print_vector(v);
    v.pop_back();
    v.pop_back();
    print_vector(v);
    v.insert(v.begin(),5);
    print_vector(v);
    v.erase(v.begin());
    print_vector(v);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.size()<<endl;
    v.clear();
    print_vector(v);
    return 0;
}