#include <iostream>
#include <vector>

class habit{
  std::string title;
  std::string category;
  int habit_count{0};

public:
    habit(std::string t,std::string c) : 
         title{t},category{c},habit_count{0}
    { std :: cout << "new habbit with "<<title<<" in "<<category<<" is created!\n";}
    habit(std::string t) :
        title{t},category("others"),habit_count{0}
    {std :: cout << "new habbit with "<<title<<" in "<<category<<" is created!\n";}
    habit()
    {}
    
    void setHabbits(std::string name,std::string c){
      title = name;
      category = c;
    }
    void printHabbits(){
      std::cout <<title<< "("<<category<<"): "<<habit_count<<" times\n";
    }
    void trackHabbits(){
      habit_count = habit_count+1;
    }
};
int main()
{
  std::vector<habit> myHabits;
  habit temp{"Drink water","Health"};
  myHabits.push_back(temp);

  temp = habit{"Go for a jog","Health"};
  myHabits.push_back(temp);

  temp = habit{"Code for one hour everyday","Mind"};
  myHabits.push_back(temp);

  for(habit& x : myHabits){
    x.printHabbits();
    x.trackHabbits();
  }
  std::cout << "-----------------------------\n";

  for(habit x : myHabits){
    x.printHabbits();
  }
  return 0;
}
