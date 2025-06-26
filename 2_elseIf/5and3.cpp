#include<iostream>
using namespace std;
int main(){
  cout<<"Enter the integer ";
  int n;
  cin>>n;
  if(n%5==0 && n%3==0){
    cout<<"The number is divisible by 5 and 3";
  }
  else{
    cout<<"The number is not divisible  ";
  }
  return 0;
}