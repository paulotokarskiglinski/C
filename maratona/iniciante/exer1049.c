#include <stdio.h>
#include <string.h>

int main() {
	
	char a[20], b[20], c[20];

	gets(a);
	if(strcmp(a, "vertebrado") == 0) {
		gets(b);
		if(strcmp(b, "ave") == 0) {
			gets(c);
			if(strcmp(c, "carnivoro") == 0)
				printf("aguia\n");
			else if(strcmp(c, "onivoro") == 0) {
				printf("pomba\n");
			}
		} else if(strcmp(b, "mamifero") == 0) {
			gets(c);
			if(strcmp(c, "onivoro") == 0)
				printf("homem\n");
			else if(strcmp(c, "herbivoro") == 0)
				printf("vaca\n");
		}

	} else if(strcmp(a, "invertebrado") == 0) {
		gets(b);
		if(strcmp(b, "inseto") == 0) {
			gets(c);
			if(strcmp(c, "hematofago") == 0)
				printf("pulga\n");
			else if(strcmp(c, "herbivoro") == 0)
				printf("lagarta\n");
		} else if(strcmp(b, "anelideo") == 0) {
			gets(c);
			if(strcmp(c, "hematofago") == 0)
				printf("sanguessuga\n");
			else if(strcmp(c, "onivoro") == 0)
				printf("minhoca\n");
		}
	}
	
	return 0;
}