#include <stdio.h>
#include <string.h>

int main() {

	int i, j, cont;
	char risada[1000], final[1000], aux[1000];

	scanf("%s", risada);

	for(i = 0, cont = strlen(risada); cont >= 0; cont--) {
		if(risada[cont] == 'a' || risada[cont] == 'e' || risada[cont] == 'i' || risada[cont] == 'o' || risada[cont] == 'u')
			final[i++] = risada[cont];
	}

	for(j = 0, cont = i - 1; cont >= -1; cont--) {
		aux[j++] = final[cont];	
	}

	if(strcmp(final, aux) == 0)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
