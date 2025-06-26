#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}
int main(){
  vector<int>v;
  v.push_back(6);
  v.push_back(9);
  v.push_back(9);
  v.push_back(3);
  v.push_back(1);
  v.push_back(3);
  v.push_back(4);
  display(v);
  vector<int>v1(v.size());
  for(int i=0;i<v1.size();i++){
    v1[i]=v[v.size()-1-i];

  }
  display(v1);

  
}