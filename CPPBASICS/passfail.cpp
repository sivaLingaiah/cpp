#include <iostream>

int main()
{
  int marks,attendence;
  char letterGrade;
  std::cout << "How much did you get ? ";
  std::cin >> marks;

  std::cout << "What's your current attendence ? ";
  std::cin >> attendence;

  if(marks>85 && attendence>60){
    letterGrade = 'A';
  }
  else if(marks>70 && attendence>60){
    letterGrade = 'B';
  }
  else if(marks>50 && attendence>60){
    letterGrade = 'C';
  }
  else if(marks>40 && attendence>60)
  {
    letterGrade = 'D';
  }
  else{
    letterGrade = 'F';
  }
  std::cout << "Your Grade "<<letterGrade<<"\n";
  return 0;
}