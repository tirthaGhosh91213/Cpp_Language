
// Pass By Vlue for Integer 
/*#include<bits/stdc++.h>
 using namespace std;


void sum(int num1){
  cout<<num1<<endl;
  int num2=num1+5;
  cout<<num2<<endl;

}

int main(){
  int num1;
  cin>>num1;
 sum(num1);
  cout<<num1<<endl;
  return 0;
}*/

// pass by value for string


#include<bits/stdc++.h>
 using namespace std;


void printname(string name){
  cout<<name<<endl;
  name[0]='T';
  cout<<name<<endl;

}

int main(){
  string name;
  cin>>name;
  printname(name);
  cout<<name;
  return 0;
}


