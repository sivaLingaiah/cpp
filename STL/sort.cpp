#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Student{
  public:
  int id;
  string name;
  int marks;
  Student(int id,string name,int marks){
       this->id = id;
       this->name = name;
       this->marks = marks;
   }
};
void print_vector(vector<Student> v){
  int n = v.size();
  for(int i=0;i<n;i++){
    cout << v[i].id << "---" <<v[i].name <<"---" <<v[i].marks <<endl;
  }
}
bool mycomparator(Student a1,Student a2){
  if(a1.marks>a2.marks) return 1;
  else if(a1.marks < a2.marks) return 0;
  else{
    if(a1.id<a2.id) return 1;
    else return 0;
  }
}
int main(){
  vector<Student> stduent_list;
  Student s1(1,"s1",89),s2(2,"s2",56),s3(3,"s3",90),s4(4,"s4",87),s5(5,"s5",75);
  stduent_list.push_back(s1);
  stduent_list.push_back(s2);
  stduent_list.push_back(s3);
  stduent_list.push_back(s4);
  stduent_list.push_back(s5);
  //print_vector(stduent_list);
  sort(stduent_list.begin(),stduent_list.end(),mycomparator);
  print_vector(stduent_list);
  return 0;
}