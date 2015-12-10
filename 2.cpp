#include <stdio.h>

int numOfDigits(long int num);

int main(void){
	int num;
	scanf("%d", &num);
	printf("%d", numOfDigits(num));
	return 0;
}
int numOfDigits(long int num){
	int i=1;
	if(!(num >=0 && num <= 9))
		while(num >= 10){
			num=num/10;
			i++;
		}
	
		return i;
	
}