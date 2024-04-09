#include <iostream>
using namespace std;

int strLength(const char* str){
  if(*str=='\0')
    return 0;
  return 1+ strLength(str+1);
}

int main() 
{
    char str[1000];
    cin.getline(str, 1000);
    int length = strLength(str);
    cout<<length<<endl;
    return 0;
}