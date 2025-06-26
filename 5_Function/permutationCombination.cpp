#include<iostream>
using namespace std;
int fact(int x){
  int f=1;
  for(int i=2;i<=x;i++){
    f*=i;
  }
  return f;
}
int combinatation(int n,int r){
  int ncr=fact(n)/(fact(r)*fact(n-r));
  return ncr;
}
int permutation(int n,int r){
  int npr=fact(n)/fact(n-r);
}
int main(){
  int n;
  int r;
  cout<<"Enter the value of n :- ";
  cin>>n;
  cout<<"Enter the value of r :-";
  cin>>r;
  int ncr =combinatation(n,r);
  int npr=permutation(n,r);
  cout<<ncr;
}