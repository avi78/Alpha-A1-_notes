#include <iostream>
#include <climits>
using namespace std;

int getRemainder(int num, int divisor)
{
    return (num - divisor * (num / divisor));
}

int main() {
    int n,a,b,c;
    cin >> n;
    a = getRemainder(n,15);
    b = getRemainder(n,3);
    c = getRemainder(n,5);
    if (a == 0) {
        cout << "HelloWorld";
    }
    else if (b == 0) {
        cout << "Hello";
    }
    else if (c == 0) {
        cout << "World";
    }
    else {
        cout << n;
    }
    return 0;
}