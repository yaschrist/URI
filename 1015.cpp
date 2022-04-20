//1015

#include <iostream>
#include <math.h>

main() {
	
	double x1, x2, y1, y2, resultado;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	
	resultado = pow((pow((x2-x1), 2) + pow((y2-y1), 2)), 0.5); 

	printf("%.4lf", resultado);	
}
