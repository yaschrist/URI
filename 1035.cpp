//1035

#include<iostream>
main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b>c & d>a & (c+d) > (a+b)) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}
}
