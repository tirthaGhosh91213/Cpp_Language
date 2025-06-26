#include<iostream>
using namespace std;
int main(){
  int x=3;
  int* m=&x;
  int** m1=&m;
  cout<<m<<endl;
  cout<<*m<<endl;
  cout<<**m1<<endl;

}