#include<bits/stdc++.h>
using namespace std;
void  change(vector<int> &a){
  a[0]=99;
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
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  change(v);
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}