#include <stdio.h>

long tIS(int h, int m, int s){
	return(h*3600+m*60+s);
}

int main(void){
	int h1, m1, s1, h2, m2, s2, dh, dm, ds;
	long dtime;
	scanf("%d %d %d\n%d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
	dtime=tIS(h2, m2, s2)-tIS(h1, m1, s1);
	ds=dtime%60;
	dm=(dtime%3600-ds)/60;
	dh=(dtime-dm-ds)/3600;
	printf("%d %d %d", dh, dm, ds);
}