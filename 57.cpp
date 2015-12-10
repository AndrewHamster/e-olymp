#include <stdio.h>
#include <math.h>

float disAB(int x1,int y1,int z1,int x2,int y2,int z2){
	float i;
	i=sqrt(pow((x1-x2), 2)+pow((y1-y2), 2)+pow((z1-z2), 2));
	return i;
}

int main(void){
	float d;
	int x1, x2, y1, y2, z2; 
	if(scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &z2)!=5)
		printf("\n");
	d=1/(disAB(x1, y1, 0, x2, y2, z2));
	printf("%f", d);
}