#include <bits/stdc++.h>
using namespace std;
int main(){
  cout << "Strings Imnplementation!"<<endl;
  string s1 = "Hello World!";
  string s2("Good Morning");
  string s3(s1);

  s1.push_back('S');
  cout <<s1<<endl;

  s1.pop_back();
  cout <<s1<<endl;

  cout <<s1.front()<<endl;

  cout <<s1.back()<<endl;

  cout <<s1.length()<<endl;

  cout <<s2.length()<<endl;

  cout <<s3.size()<<endl;

  cout << s1.compare(s2)<<endl;

  cout << s1.compare(s3)<<endl;

  cout << s1.substr(6,11)<<endl;

  cout << s2.substr(6,12)<<endl;

  cout << "String accessing"<<endl;
  for(int i=0;i<s1.length();i++){
    cout << s1[i]<<" ";
  }
  cout << endl;

  if(s1.find("World")!=s1.npos){
    cout << "World is persent in the s1"<<endl;
  }else{
    cout << "World is not present in the s1"<<endl;
  }

  return 0;
}