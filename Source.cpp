#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long x1 = 1, x2 = 1, x3 = 1, xi;
    for (int n = 1; n <= 30; n++) {
        if (n <= 3) {
            cout << 1 <<",";
        }
        else {
            xi = (long long)(n + 3) * (x3 - 1) + (long long)(n + 4) * x2; 
            x1 = x2;
            x2=x3;
            x3 = xi;
            cout << xi<<",";
        }
    }
    return 0;
}

