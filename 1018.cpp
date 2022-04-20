//1018

#include <iostream>

main() {
	
	int entrada, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
	
	scanf("%d", &entrada);
	
	nota100 = entrada/100;
	nota50 = (entrada - (nota100*100)) / 50;
	nota20 = (entrada - (nota100*100 + nota50*50)) / 20;
	nota10 = (entrada - (nota100*100 + nota50*50 + nota20*20)) / 10;
	nota5 = (entrada - (nota100*100 + nota50*50 + nota20*20 + nota10*10)) / 5;
	nota2 = (entrada - (nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5)) / 2;
	nota1 = (entrada - (nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2)) / 1;
	
	printf("%d\n", entrada);
	printf("%d nota(s) de R$ 100,00\n", nota100);
	printf("%d nota(s) de R$ 50,00\n", nota50);
	printf("%d nota(s) de R$ 20,00\n", nota20);
	printf("%d nota(s) de R$ 10,00\n", nota10);
	printf("%d nota(s) de R$ 5,00\n", nota5);
	printf("%d nota(s) de R$ 2,00\n", nota2);
	printf("%d nota(s) de R$ 1,00\n", nota1);
	
}
