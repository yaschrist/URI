//1049

#include<iostream>
main() {
	char e1[20], e2[20], e3[20];
	scanf("%s", &e1);
	scanf("%s", &e2);
	scanf("%s", &e3);
	
	if(e1[0] == 'v') {
		if (e2[0] == 'a'){
			if (e3[0] == 'c') {
				printf("aguia\n");
			} else if (e3[0] == 'o') {
				printf("pomba\n");
			}
		} else if (e2[0] == 'm'){
			if(e3[0] == 'o') {
				printf("homem\n");
			} else if (e3[0] == 'h') {
				printf("vaca\n");
			}		
		}
	} else if (e1[0] == 'i') {
		if (e2[0] == 'i') {
			if(e3[2] == 'm') {
				printf("pulga\n");
			} else if (e3[2] == 'r') {
				printf("lagarta\n");
			}
		} else if (e2[0] == 'a') {
			if (e3[0] == 'h'){
				printf("sanguessuga\n");
			} else if (e3[0] == 'o') {
				printf("minhoca\n");
			}
		}
	}
	
}
