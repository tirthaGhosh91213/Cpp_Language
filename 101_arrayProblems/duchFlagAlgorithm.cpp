#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

void reversePart(vector<int> &v){
  int lo=0;
  int mid=0;
  int hi=v.size()-1;
  while (mid<=hi)
  {
   if(v[mid]==2){
    int temp =v[mid];
    v[mid]=v[hi];
    v[hi]=temp;
    hi--;
   }
  else if(v[mid]==0){
    int temp=v[mid];
    v[mid]=v[lo];
    v[lo]=temp;
    lo++;
    mid++;
  }
  else{
    mid++;
  }
  }
  
  return ;  
}

int main(){
  vector<int>v; 
  v.push_back(1);
  v.push_back(2);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(2);
  v.push_back(1);
  display(v);
  reversePart(v);
  display(v);
} 