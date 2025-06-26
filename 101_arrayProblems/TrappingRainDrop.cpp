#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

int  reversePart(vector<int> &v){
  int n=v.size();
  int prev[n];
  prev[0]=-1;
  int max =v[0];
  for(int i=1;i<n;i++){
      prev[i]=max;
      if(max<v[i]) max=v[i];
  }

  
  prev[n-1]=-1;
  max=v[n-1];
  for(int i=n-2;i>=0;i--){
    if(max<prev[i]) prev[i]=max;
      if(max<v[i]) max=v[i];
  }

  
  // for(int i=0;i<n;i++){
  //   prev[i]=min(prev[i],next[i]);
  // }


  int water=0;
  for(int i=1;i<n-1;i++){
  if(v[i]<prev[i]){
    water+=(prev[i]-v[i]);
  }
}
return water;

}

int main(){
  vector<int>v; 
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(2);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);
  v.push_back(2);
  v.push_back(1);
  display(v);
  int water=reversePart(v);
  cout<<"Present water in the building "<<water;
} 