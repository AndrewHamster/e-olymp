#include <stdio.h>

int timesSaid(int n, int k){
	int count=0, a, b, m=-1;	//just4lulz
	a=1;
	b=n;
	while (m!=k){
		m=(a+b)/2;
		count++;
		if(m>k)
			b=m-1;
		else if(m<k)
			a=m+1;
	}
	return count;
}

int main(void){
	int n, k, count;
	scanf("%d %d", &n, &k);
	count=timesSaid(n, k);
	printf("%d", count);
}