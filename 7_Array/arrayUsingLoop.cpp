// Array is a call by reference function
#include<bits/stdc++.h>
 using namespace std;

void  doSomething(int arr[],int n){
cout<<arr[0]<<endl;
arr[0]+=100;
cout<<arr[0]<<endl;
}

int main(){
int n=5;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
doSomething(arr,n);
  return 0;
}
