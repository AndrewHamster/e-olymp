#include <iostream>
#include <iomanip>
using namespace std;
int gcd(int a, int b){
	while(b != 0){
		int t;
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int main() {
	int a, b, c, d, m, n;
	cin >> a >> b >> c >> d;
	m = a * d + b * c;
	n = b * d;
	int k = gcd(m, n);
	m /= k;
	n /= k;
	if(n != 1){
		cout << m << " " << n;
	}	else	{
		cout << m;
	}
}