//1020

#include <iostream>

main() {
	int entrada, ano, meses, dias;
	
	scanf("%d", &entrada);
	
	ano = entrada/365;
	meses = (entrada%365) /30;
	dias = (entrada%365) % 30;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
}
