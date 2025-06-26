#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(6);
  v.push_back(9);
  v.push_back(10);
  v.push_back(7);
  v.push_back(1);
  v.push_back(9);
  v.push_back(4);
  int x=9;
  int idx=-1;
  for(int i=v.size()-1;i>=1;i--){
    if(v[i]==x){
      idx=i;
      break;
    }
  }
  cout<<idx;
  
}
