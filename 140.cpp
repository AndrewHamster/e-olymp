#include <iostream>

using namespace std;

int main(){
    int n, k = 2, t = 2, b = t;
    cin >> n;
    for(int i = 1; i < n; i++){
        t *= 2;
        b += t;
        int v = b / 2;
        b = b - v;
        k = t - v;
    }
    cout << k << " " << b;
}