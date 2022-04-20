//jogo com minutos

#include <iostream>
main() {
	int horaInicio, minutoInicio, horaFinal, minutoFinal, tempoMinutos, horaResultado, minutoResultado;
	
	scanf("%d %d %d %d", &horaInicio, &minutoInicio, &horaFinal, &minutoInicio);
	
	//converter tudo para minutos
	minutoInicio +=  horaInicio*60;
	minutoFinal += horaFinal*60;
	
	tempoMinutos = minutoFinal - minutoInicio;
	if (tempoMinutos <= 0) {
		tempoMinutos += 24*60; //pois significa que já passou 1 dia e estamos trabalhando em minutos
	}
	
	horaResultado = tempoMinutos/60;
	minutoResultado = tempoMinutos%60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", horaResultado, minutoResultado);
	
	
}


