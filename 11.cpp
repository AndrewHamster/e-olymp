#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, m, k;
	cin >> m >> n >> k;
	cout << setprecision(k) << fixed;
	cout << (double) m/n;
	
}