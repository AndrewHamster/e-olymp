#include <stdio.h>

int nOD(long n){							//numberOfDiods;
	int a=0;
	if(n>0){
		while(n>0){
			switch(n%10){
				case 0:
					a +=6;
					break;
				case 1:
					a +=2;
					break;
				case 2:
					a +=5;
					break;
				case 3:
					a +=5;
					break;
				case 4:
					a +=4;
					break;
				case 5:
					a +=5;
					break;
				case 6:
					a +=6;
					break;
				case 7:
					a +=3;
					break;
				case 8:
					a +=7;
					break;
				case 9:
					a +=6;
					break;
			}
			n /=10;
		}
	}	else	a=6;						//in case of n==0;
	return a;
}

int main(void){
	long n;
	int a;
	scanf("%ld", &n);
	a=nOD(n);
	printf("%d", a);
}