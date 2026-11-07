#include <iostream>
#include <vector>
#include <fstream>
#include <limits>
#include <cstdlib>
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
    habit(std::string t,std::string c,int count):
          title{t},category{c},habit_count{count}
    {}
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
    habit& operator++(int){
      habit_count++;
      return *this;
    }
    std::string printHabitsForFile(){
      std::string retVal;
      retVal.append(title);
      retVal.append("\n");
      retVal.append(category);
      retVal.append("\n");
      retVal.append(std::to_string(habit_count));
      retVal.append("\n");
      return retVal;
    }
    std::string getHabit(){
    return title;
  }
};
class habit_tracker{
  
private:
    std::vector<habit> myhabits;
public:
  habit_tracker() {}
  void addHabit(std::string h,std::string c){
    habit newHabit(h,c);
    myhabits.push_back(newHabit);
  }
  void addHabit(std::string h){
    habit newHabit(h);
    myhabits.push_back(newHabit);
  }
  habit& getHabit(int pos){
    return myhabits[pos];
  }
  habit& operator [] (int index){
    return myhabits[index];
  } 
  void saveHabits(std::string fileName){
       std::ofstream myfile(fileName);

       if(!myfile){
        std::cout << "Problem with the file "<<fileName<<"Cannot be openned\n";
        return;
       }
       for(habit h:myhabits){
        myfile << h.printHabitsForFile();
       }
       myfile.close();
  }
  int loadHabits(std::string fileName){
    std::ifstream myfile(fileName);
    if(!myfile){
      std::cout << "Problem with the file "<<fileName<<"Cannot be openned\n";
        return -1;
    }
    std::string line{};
    std::string h,c;
    int count,lineNum{0};

    while(std::getline(myfile,line)){
      int t  = lineNum % 3;
      switch(t){
        case 0 :
          h = line;
           break;
        case 1:
          c=line;
          break;
        default:
          count = std::stoi(line); 
          habit newH(h,c,count);
          myhabits.push_back(newH);
          break;   
      }
      lineNum++;
    }
    return 0;
  }
  void printHabit(){
    int lNum{1};
    for(habit h : myhabits){
      std::cout <<lNum<<"\n";
      h.printHabbits();
      lNum++;
    }
  }
  int size(){
    return myhabits.size();
  }
};
void clearScreen(){
  std::cout << "\033[2J\033[H";
}

int showScreen(){
  clearScreen();
  std::cout <<"--------------------------\n";
  std::cout << "WELCOME TO HABIT TRACKER!\n";
  std::cout <<"--------------------------\n";

  std::cout << "(1). Add a habit : \n";
  std::cout << "(2). Track a habit : \n";
  std::cout << "(3). Show habits : \n";

  std::cout << "(9). QUIT\n";

  std::cout << "Enter a choice : ";
  int choice{9};
  std::cin >> choice;
  return choice;
}

void addHabbit(habit_tracker& ht){
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  clearScreen();
  std::cout << "ADD A HABIT SCREEN\n";
  std::cout << "Type 0 any time to go back to home screen\n";
  std::cout <<"--------------------------------------------\n";

  std::string h{},c;
  while(h!="0"){
    std::cout <<"Enter the habit (or type 0 to go back):";
    std::getline(std::cin,h);
    if(h=="0"||h.size()==0)
      break;

    std::cout <<"Enter the habit category :";
    std::getline(std::cin,c);
    ht.addHabit(h,c);
  }
}
void trackHabbits(habit_tracker &ht){
  int hNum{-1};
  std::string msg{""};

  while(hNum!=0){
    ht.printHabit();
    if(msg!=""){
      std::cout << msg;
      msg="";
    }
    std::cout << "which habit have you done today?";
    std::cin>>hNum;
    if(hNum>=1 && hNum <=ht.size()){
      ht[hNum-1]++;
      msg="Habit "+(ht[hNum-1].getHabit())+" tracked successfully!\n";
    }
    else if(hNum!=0){
      msg="Incorrect choice,Try again!\n";
    }
  }
}
void showHabbits(habit_tracker &ht){
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  clearScreen();
  ht.printHabit();
  std::cout << "Type 0 to go back to main menu\n";
  char ch;
  std::cin >> ch;
  return;
}
int main()
{
  habit_tracker h;
  int status{-1};
  status = h.loadHabits("myhabits.txt");
  if(status==-1){
    std::cerr << "No habits file found,will create file when program terimantes";
  }
  int c{0};
  while(c!=9){
    c = showScreen();
    switch(c){
      case 1:
        addHabbit(h);
        break;
      case 2:
        trackHabbits(h);
        break;
      case 3:
         showHabbits(h);
         break;
      case 9:
         h.saveHabits("myhabits.txt");
         break;
      default:
         std::cout << "Inavlid option choosen,please choose a valid option to continue!";          
    }
  }
  return 0;
}
