//1021

#include <iostream>

main() {
	
	float entrada; 
 	int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
	
	scanf("%f", &entrada);
	
	nota100 = entrada/100;
	entrada = entrada - (nota100*100);
	
	nota50 = entrada / 50;
	entrada = entrada - (nota50*50);
	
	nota20 = entrada / 20;
	entrada = entrada - ( nota20*20);
	
	nota10 = entrada / 10;
	entrada = entrada - (nota10*10);
	
	nota5 = entrada / 5;
	entrada = entrada - (nota5*5);
	
	nota2 = entrada / 2;
	entrada = entrada - (nota2*2);
	
	moeda1 = entrada/1;
	entrada = entrada - (moeda1*1);
	
	moeda50 = entrada / 0.50;
	entrada = entrada - (moeda50*0.5);
	
	moeda25 = entrada / 0.25;
	entrada = entrada - (moeda25*0.25);
	
	moeda10 = entrada / 0.1;
	entrada = entrada - (moeda10*0.1);
	
	moeda5 = entrada / 0.05;
	entrada = entrada - (moeda5*0.05);
	
	moeda01 = entrada/0.01;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda50);
	printf("%d moeda(s) de R$ 0.25\n", moeda25);
	printf("%d moeda(s) de R$ 0.10\n", moeda10);
	printf("%d moeda(s) de R$ 0.05\n", moeda5);
	printf("%d moeda(s) de R$ 0.01\n", moeda01);
	
}
	

