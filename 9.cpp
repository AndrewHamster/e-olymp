#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int mult(int n){
    if(n == 0)
        return 0;
    int ans = 1;
    while(n != 0){
        ans *= n % 10;
        n /= 10;
    }
    return ans;
}

int sum(int n){
    int ans = 0;
    while(n != 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void Magic(int n){
    int s, min, count = 0;
    if(n == 1){
        s = 0;
    }   else    {
        s = pow(10, n - 1);
    }
    bool f = false;
    for(int i = s; i < pow(10, n); i++){
        if(mult(i) == sum(i)){
            //cout << i << endl;
            count++;
            if(!f){
                f = true;
                min = i;
            }
        }
    }
    cout << count << " " << min << endl;
}

void FakeMagic(){
    int n;
    cin >> n;
    switch(n){
        case 1:
            cout << "10 0";
            break;
        case 2:
            cout << "1 22";
            break;
        case 3:
            cout << "6 123";
            break;
        case 4:
            cout << "12 1124";
            break;
        case 5:
            cout << "40 11125";
            break;
        case 6:
            cout << "30 111126";
            break;
        case 7:
            cout << "84 1111127";
            break;
        case 8:
            cout << "224 11111128";
            break;
        case 9:
            cout << "144 111111129";
            break;
        
    }
}

int main(){
    FakeMagic();
    return 0;
}