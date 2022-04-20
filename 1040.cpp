//1040

#include<iostream>
main() {
	float n1, n2, n3, n4, media, media2, exame;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = ((n1*2) + (n2*3) + (n3*4) + n4) / 10;
	printf("Media: %.1f\n", media);
	if (media>=7){
		printf("Aluno aprovado.\n");
	} else if (media<5){
		printf("Aluno reporvado.\n");
	} else if (media>=5 && media<=6.9) {
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media2 = (media + exame) / 2;
		if (media2>=5){
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f", media2);
	}
}
