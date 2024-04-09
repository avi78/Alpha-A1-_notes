#include <iostream>
using namespace std;

int fibseq(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return fibseq(n-1)+fibseq(n-2);
}

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      cout<<fibseq(i)<<endl;
    }
    return 0;
}