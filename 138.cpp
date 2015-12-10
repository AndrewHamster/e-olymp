#include <stdio.h>

int count(long n){
	int c=0;
	if(n%10==0){
		while(n>=500){
			n -=500;
			c++;
		}
		while(n>=200){
			n -=200;
			c++;
		}
		while(n>=100){
			n -=100;
			c++;
		}
		while(n>=50){
			n -=50;
			c++;
		}
		while(n>=20){
			n -=20;
			c++;
		}
		while(n>=10){
			n -=10;
			c++;
		}
		
	}
	else c=-1;
	return c;
}

int main(void){
	long n;
	int	c;
	scanf("%ld", &n);
	c=count(n);
	printf("%d", c);
}