#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int m, k;
    cin >> m;
    vector<int> a;
    for(int i = 0; i < m; i++){
        cin >> k;
        a.push_back(k);
    }

    for(int i = 0; i < m; i++){
        int t = a[i] % 3;
        switch(t){
        case 0:
            cout << "GCV\n";
            break;
        case 1:
            cout << "VGC\n";
            break;
        case 2:
            cout << "CVG\n";
            break;
        }
    }
    return 0;
}