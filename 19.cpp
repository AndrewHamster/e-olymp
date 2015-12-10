#include <iostream>
#include <vector>
using namespace std;

int getSym(vector <int> a){
    int sym = 0;
    for(int i = 0; i < (a.size() + 1) / 2; i++){
        if(a[i] == a[a.size() - i - 1]){
            sym++;
        }
    }
    return sym;
}
vector <int> mvector(int n){
    vector <int> t;
    while(n){
        t.push_back(n%10);
        n /= 10;
    }
    return t;
}
int main(){
    int n;
    cin >> n;
    vector<int> a = mvector(n);
    cout << getSym(a);
}