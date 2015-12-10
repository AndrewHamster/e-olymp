#include <stdio.h>
int getA(int num);
int getB(int num);
int main(void){
	int num, a, b;
	scanf("%d", &num);
	a= getA(num);
	b= getB(num);
	printf("%d %d", a, b);
}
int getA(int num){
	return num/10;
}
int getB(int num){
	return num%10;
}