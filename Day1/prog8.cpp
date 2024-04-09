#include <iostream>
using namespace std;

void printFactors(int n,int i){
  if(i>n){
    return;
  }
  if(n%i == 0){
    cout<<i<<endl;
  }
  printFactors(n,i+1);
}

int main() 
{
    int n;
    cin>>n;
    printFactors(n,1);
    return 0;
}