#include <iostream>
using namespace std;

int main(){
    int arr[100],n;
    int maxi = arr[0];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    cout << "Maximum value: " << maxi << endl;
    return 0;
}