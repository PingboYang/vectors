#include <iostream>
#include<vector>
using namespace std;

void printVector(vector <int>);
int largestNumberInVector(vector <int>);
int main() {
  int x;
  vector<int>v1;
  cout<<"\nSize of v1= "<<v1.size();
  v1.push_back(100);
  cout<<"\nSize of v1= "<<v1.size();
  for(int i=1;i<3; i++){
    cout<<"\nEnter an integer: ";
      cin>>x;
    v1.push_back(x);
  }
  cout<<"\nSize of v1= "<<v1.size();
  printVector(v1);
  cout<<"The largst number is: "<<largestNumberInVector(v1);
  v1.pop_back();
  printVector(v1);

  vector <double> v2{1.1,1.2,1.3,1.4};
  int count=0;
  while(!v2.empty()){
    count++;
    v2.pop_back();
  }
  cout<<"\n\nThe v2 now is empty";
  
}

void printVector(vector <int>v){
  cout<<"--------";
  for(int i=0; i<v.size(); i++){
    cout<<"\n"<<v[i];
  }
}
int largestNumberInVector(vector <int>v){
  int largstNumber=v[0];
  for(int i=0; i<v.size(); i++){
    if(v[i]>largstNumber){
      largstNumber=v[i];
    }
  }
  return largstNumber;
}