//1037
#include<iostream>
main() {
	float valor;
	scanf("%f", &valor);
	if (valor<=25 && valor>=0) {
		printf("Intervalo [0,25]\n");
	} else if (valor>25 && valor<=50) {
		printf("Intervalo (25,50]\n");
	} else if (valor>75 && valor<=100) {
		printf("Intervalo (75,100]\n");
	} else {
		printf("Fora de intervalo\n");
	}
}
