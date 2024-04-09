#include <iostream>
using namespace std;

int N;
void printNum(int n){
  if(n>N){
    return;
  }
  cout<<n<<endl;
  printNum(n+1);
}

int main() 
{
    cin>>N;
    printNum(1);
    return 0;
}