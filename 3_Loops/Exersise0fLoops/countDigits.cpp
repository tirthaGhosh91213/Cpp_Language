#include<bits/stdc++.h>
 using namespace std;
int main(){
 int n ;
 cout<<"enter the number ";
 cin>>n;
 int count =0;
 int a=n;
 while(n>0){
  n/=10;
  count++;
 }
 if(a==0) cout<<1;
 else cout<<count;
  
  return 0;
}