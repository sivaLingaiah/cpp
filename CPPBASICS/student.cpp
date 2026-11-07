#include <iostream>
#include <string>
class Student{
  std::string name,courses[4];
  int id;
  bool fee_pay;
  public:
  Student(std::string name,int id):
    name{name},id{id}
  {}

  void print(){
    std::cout << name <<" ";
    std::cout << id <<"\n";
    for(std::string c : courses){
      std::cout << c <<"\n";
    }
    std::cout <<"Fee Completed";
  }
  void setCourses(int cnum,std::string course){
    courses[cnum] = course;
  }
  void payFee(){
    fee_pay = true;
  }
};
int main(){
  Student s{"Srivalli",1002};
  s.setCourses(0,"OOPS");
  s.setCourses(1,"DBMS");
  s.setCourses(2,"SQL");
  s.setCourses(3,"PYTHON");
  s.payFee();
  s.print();
  return 0;
}