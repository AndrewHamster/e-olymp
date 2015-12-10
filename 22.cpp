#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    if(n == 2)
        return true;
    for(int i = 2; i <= ceil(sqrt(n)); i ++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int getReversed(int n){
    int res = 0;
    while(n > 0){
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void Magic(){
    int a, b, count = 0;
    cin >> a >> b;
    if(a > b)
        swap(a, b);
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            int t = getReversed(i);
            if(isPrime(t)){
            //cout << i << " " << t << endl;
            count ++ ;
        }
        }
    }
    cout << count;
}

void SomeTestingStuff(){
    for(int i = 1; i <= 10000; i++){
        cout << getReversed(i) << endl;;
    }
}

int main(){
    Magic();
    //SomeTestingStuff();
    return 0;
}