#include<bits/stdc++.h>
int main(){
  using namespace std;
  int x;
  cout<<"enter the month number :";
  cin>>x;
  switch(x<=7 && x%2!=0){
      case 1:
      cout<<"31";
  
  }
  switch (x>=8 && x%2==0){
  
    case 1:
    cout<<"31";
  }
  switch(x==4||x==6||x==9||x==11){
    case 1:
    cout<<"30";
  }
  switch(x){
    case 2:
    cout<<"28";
  }
    
  cout<<endl<<"All are chaked";
  return 0;
}