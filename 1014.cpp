//1014

#include <iostream>

main(){
	float distancia, combustivelGasto, consumo;
	
	scanf("%f", &distancia);
	scanf("%f", &combustivelGasto);
	
	consumo = distancia / combustivelGasto;
	
	printf("%.3f km/l\n", consumo);
}
