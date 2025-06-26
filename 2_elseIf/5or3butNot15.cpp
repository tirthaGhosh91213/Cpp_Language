#include<iostream>
using namespace std;
int main(){
  cout<<"Enter the number ";
  int n;
  cin>>n;
  if(n%5==0&&n%3==0){
    if(n%15==0){
      cout<<"The number is divide by 5 or 3 but not 15";}
    else{
      cout<<"Not matching ";
    }
  }
  else {
    cout<<"Not matchimg the condition";
  }
}
 
