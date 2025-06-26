#include<bits/stdc++.h>
using namespace std;
void display(int arr1[],int size){
  for(int i=0;i<size;i++){
    cout<<arr1[i]<<endl;
  }
  return ; 
}
void change(int b[], int size){
  b[0]=99;
}
int main(){
  int arr[6]={1,2,3,4,24,21};
  int size=sizeof(arr)/arr[0];
  display(arr,size);
  change(arr,size);
  display(arr,size);
}