#include <iostream>
using namespace std;

int main(){
	int n, d = 1;
cin >> n;
for(int i = 0; i < 3; i ++){
	d *= n%10;
	n /= 10;
}
cout << d;
}