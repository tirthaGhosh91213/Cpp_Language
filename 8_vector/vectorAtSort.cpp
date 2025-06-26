#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  
  v.push_back(6);
  v.push_back(9);
  v.push_back(9);
  v.push_back(3);
  v.push_back(1);
  v.push_back(3);
  v.push_back(4);
  v.at(2)=80;
  cout<<v.at(2);

  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";

  }
  cout<<endl;

  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
}