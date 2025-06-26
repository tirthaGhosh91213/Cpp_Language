#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the character ";
  cin>>ch;
  int aschii=(int)ch;
  // cout<<(int )ch;
  if((aschii>=97 && aschii<=122) ||(aschii>=65 && aschii<=90)){
    cout<<"The character is alphabet";
  }
  else{
        cout<<"The character is not alphabet";

  }

}