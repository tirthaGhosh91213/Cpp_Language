#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

void reversePart(vector<int> &v){
  
    int i=0;
    int j=v.size()-1;
    while(i<j){
    if(v[i]==0) i++;
     if(v[j]==1) j--;
   if(i>j) break;
    if(v[i]==1 && v[j]==0) {
        int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
    
    
  }
  return ;
}

int main(){
  vector<int>v; 
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(1);
  display(v);
  int i=0;
  int j=v.size();
  reversePart(v);
  display(v);
} 