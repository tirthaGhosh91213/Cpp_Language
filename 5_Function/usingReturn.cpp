 /*#include<bits/stdc++.h>
 using namespace std;


int sum(int num1,int num2){
  int num3;
  num3=num1+num2;
  return num3;
}

int main(){
  int num1,num2;
  cin>>num1>>num2;
  int result= sum(num1,num2);
  cout<<result;
  return 0;
}*/


#include<bits/stdc++.h>
 using namespace std;


int maxx(int num1,int num2){
  if(num1>=num2){
    return num1;
  }
  else return num2;
}

int main(){
  int num1,num2;
  cin>>num1>>num2;
  int maximum= maxx(num1,num2);
  cout<<maximum;
  return 0;
}
