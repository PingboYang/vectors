#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int>v1;
  cout<<"\nSize of v1= "<<v1.size();
  v1.push_back(100);
  cout<<"\nSize of v1= "<<v1.size();
}