#include <stdio.h>

int sumOfDig(long int num){
	int s=0;
	if(num == 0)
		s= 0;
	else while(num>0){
		s=s+num%10;
		num=num/10;
	}
	return s;
}
 
int main(void){
	long count=0; 
	long num;
	scanf("%ld", &num);
	while(num > 0){
		num=num - sumOfDig(num);
		count++;
	}
	printf("%ld", count);
}