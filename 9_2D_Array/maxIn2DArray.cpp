#include<bits/stdc++.h>
using namespace std;
int main(){
  int m;
  cout<<"Enter the number of rows :-";
  cin>>m;
  int n;
  cout<<"Enter the number of column :-";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  int max=INT_MIN;
  int sum =0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      
      if(max<arr[i][j]) max=arr[i][j];
      sum+=arr[i][j];
    }
    cout<<max<<" ";
    cout<<sum;
  }
}