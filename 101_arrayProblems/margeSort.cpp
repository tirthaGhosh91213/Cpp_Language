#include<bits/stdc++.h>
using namespace std;


vector<int> sortedArray(vector<int> &v,vector<int> &u){

  int n=v.size();
  int m=u.size();
  vector<int>w(m+n);
  int i=0;
  int j=0;
  int k=0;
  while(i<=n &&j<=m ){
      if(v[i]<u[j]){
          w[k]=v[i];
          i++;
      } 
      else{
        w[k]=u[j];
        j++;
      }
      k++;
  }
  if(i==n){
    while(j<m-1){
      w[k]=u[j];
      k++;
      j++;
    }
  }
  if(i==m){
    while(j<n-1){
      w[k]=v[i];
      k++;
      i++;
    }
}
return w;
}

int main(){
  vector<int>v; 
  v.push_back(1);
  v.push_back(4);
  v.push_back(10);
  v.push_back(23);
  
  vector<int>u;
  u.push_back(3);
  u.push_back(8);
  u.push_back(16);
  u.push_back(19);
  u.push_back(29);
  vector<int>w=sortedArray(v,u);

  // sortedArray(v);
  for (int i = 0; i < w.size(); i++)
  {
    cout<<w[i]<<" ";
  }
  
} 