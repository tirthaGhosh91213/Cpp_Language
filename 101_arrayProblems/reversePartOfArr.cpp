#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

void reversePart(int i ,int j,vector<int> &v){
  while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
  return ;
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
  reversePart(0,2,v);
  display(v);
} 