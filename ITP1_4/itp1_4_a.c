#include<stdio.h>

int main(){
	int a, b, d, r;
	double f;
scanf("%d %d", &a,&b);
d = a / b;
r = a % b;
f = 1.00000 * a / b;
printf("%d %d %.5lf\n", d,r,f);
}
