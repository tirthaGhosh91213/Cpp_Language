#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the  number ";
  cin>>n;
  for(int i=0;i<=n;i++){
    int curr=1;
    for(int j=0;j<=i;j++){
      cout<<curr;
      curr=curr*(i-j)/(j+1);
    }
    cout<<endl;
  }
}