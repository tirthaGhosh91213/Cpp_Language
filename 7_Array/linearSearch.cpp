#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array ";
  cin>>n;

  int arr[n];
  for(int i=0;i<=n-1;i++){
     cin>>arr[i];
  }
   int x;
   cout<<"Enter the element that you want to fimd in the array ";
   cin>>x;


  for(int i=0;i<=n-1;i++){
    if(arr[i]==x){
      cout<<"present in index number"<<" " <<i;
      break;
    }
    else{
      cout<<"Element is not present in tha array ";
    }
  }
}