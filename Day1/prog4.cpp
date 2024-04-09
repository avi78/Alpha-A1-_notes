#include <iostream>
using namespace std;

int sumNum(int n){
  if(n==1){
    return 1;
  }
  int sum=sumNum(n-1);
  sum+=n;
  return sum;
}

int main() 
{
    int n;
    cin>>n;
    int sum = sumNum(n);
    cout<<sum<<endl;
    return 0;
}