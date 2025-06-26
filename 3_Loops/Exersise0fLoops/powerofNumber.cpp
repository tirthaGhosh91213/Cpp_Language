#include<bits/stdc++.h>
 using namespace std;
int main(){
 int a,b ;
 cout<<"enter the base   number :- ";
 cin>>a;
 cout<<"enter the base   number :- ";
 cin>>b;
 bool flag=true;
 int power =1;
 if(b<0){
  flag=false;
  b=-b;
 }
 for(int i=1;i<=b;i++){
  power=power*a;
 }
 if(flag==false){
  power=1/power;
  b=-b;
 }
 if(a==0 && b==0) cout<<"not Define";
 else {
  cout<<a<<" raised  to the power "<<b<<" is "<<power;
 }
  return 0;
}