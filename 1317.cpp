#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int Stoi(string s){
    vector <int> n;
    for(int i = 0; i < s.size(); i++){
        int t = s[i] - '0';
        n.push_back(t);
    }
    int num = 0, k = 1;
    for(int i = n.size() - 1; i >= 0; i--){
        num += k * n[i];
        k *= 10;
    }
    return num;
}
int main()
{
    string s;
    vector<int> a;
    double p;
    while(getline(cin, s)){
        int n = Stoi(s);
        a.push_back(n);
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 121){
            p = 100.00000000;
        }   else    {
            p = 1;
            double chus = 1;
            for(int j = 1; j <= a[i]; j++){
                chus *= (365 - a[i] + j);
            }
            p = chus / pow(365, a[i]);
            p = 1 - p;
            p = p * 100;
        }
        cout << fixed <<setprecision(8) << p << "%\n";
    }
    return 0;
}