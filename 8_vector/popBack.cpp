#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  // push back
  v.push_back(6);
  v.push_back(9);
  v.push_back(9);
  v.push_back(3);
  v.push_back(1);
  v.push_back(3);
  v.push_back(4);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;

  }
  v.pop_back();
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  
}