#include <iostream>
using namespace std;

long long power(int a,int b){
  if(b==0){
    return 1;
  }
  int temp = power(a,b/2);
  long long result = temp*temp;
  if(b%2 == 1){
    result*=a;
  }
  return result;
}

int main() 
{
    int a,b;
    cin>>a>>b;
    long long ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}