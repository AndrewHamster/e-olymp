#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    int k, i = -1;
    do{
        i++;
        k = 1 + i * (i + 1)/2;
    }
    while(k < n);
    cout << i;
    return 0;
}