#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, d, e, f, g, h, i, j , k, l;
	double n;
	double x, y, z;
	int x1, y1;
	
	scanf("%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
	
	n = a+b+c+d+e+f+g+h+i+j+k+l;
	
	x1 = 0.07 * n;
	y1 = 0.05 * n;
	x = x1;
	y = y1;
	
	z = n - x - y;
	
	printf("%.2lf, %.2lf, %.2lf\n", x, y, z);
	
	return 0;
	
	
}
