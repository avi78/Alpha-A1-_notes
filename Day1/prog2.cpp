#include <iostream>
using namespace std;

void printNum(int n){
  if(n==0){
    cout<<n<<endl;
    return;
  }
  cout<<n<<endl;
  if (n < 0)
        printNum(n + 1);
  else
      printNum(n - 1);
}

int main() 
{
    int n;
    cin>>n;
    printNum(n);
    return 0;
}