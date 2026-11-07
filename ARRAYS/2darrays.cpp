#include <bits/stdc++.h>
using namespace std;

int main(){
  cout << "static 2D array implementation!"<<endl;

  int tdarr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  cout << "Array Elements : "<<endl;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout << tdarr[i][j]<<" ";
    }
    cout <<endl;
  }

  cout << "Dynamic 2D array implementation!"<<endl;

  int n;
  int m;
  cout << "Enter row(n) value : ";
  cin >> n;
  cout << "Enter column(m) value : ";
  cin >> m;

  int **dtdarr = new int*[n];
  for(int i=0;i<n;i++){
    dtdarr[i] = new int[m];
  }

  cout << "Reading values : "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> dtdarr[i][j];
    }
  }

  cout << "Accessing the values : "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout << dtdarr[i][j]<<" ";
    }
    cout << endl;
  }

  return 0;
}