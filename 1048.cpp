//1048
#include<iostream>
main() {
	float salario, novo, reajuste, percentual;
	scanf("%f", &salario);
	if (salario<=400){
		percentual = 15;
		novo = salario + (salario * 0.15);
		reajuste = novo - salario;
	} else if (salario<=800) {
		percentual = 12;
		novo = salario + (salario * 0.12);
		reajuste = novo - salario;
	} else if (salario<=1200) {
		percentual = 10;
		novo = salario + (salario * 0.10);
		reajuste = novo - salario;
	} else if (salario<=2000) {
		percentual = 7;
		novo = salario + (salario * 0.07);
		reajuste = novo - salario;
	} else if (salario>2000) {
		percentual = 4;
		novo = salario + (salario * 0.04);
		reajuste = novo - salario;
	}
	printf("Novo salario: %.2f\n", novo);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %.0f %\n", percentual);
}
