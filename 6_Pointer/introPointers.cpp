#include<iostream>
using namespace std;
int main(){
  int x=3;
  int*  m=&x;
  cout<<m<<endl;
  // here * is dereference operator
  *m=9;
  cout<<*m<<endl;
}