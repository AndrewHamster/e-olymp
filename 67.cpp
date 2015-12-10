#include <stdio.h>
int main(void){
	long a, b, c, n;
	scanf("%ld%ld%ld", &a, &b, &c);
	n=((a- 1) + (b-1)*a +(a*b*(c-1)));
	printf("%ld", n);
}