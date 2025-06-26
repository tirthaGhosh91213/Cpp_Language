#include<iostream>
using namespace std;
int main(){
 cout<<"Enter the selling price :";
 int sp;
 cin>>sp;
 cout<<"Enter the cost price :";
 int cp;
 cin>>cp;
 if(sp>cp){
  cout<<"Profit"<<" "<<sp-cp;
 }
 else if(sp<cp){
  cout<<"Loss "<<" "<<cp-sp;
 }
 else{
  cout<<"no loss, no profit";
 }

  return 0;
}