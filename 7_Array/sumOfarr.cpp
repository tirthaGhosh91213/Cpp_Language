#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[8];
  for(int i=0;i<=7;i++){
     cin>>arr[i];
  }
  int sum =0;
  for(int i=0;i<=7;i++){
    sum=sum+arr[i];
    
  }
  cout<<sum;
}