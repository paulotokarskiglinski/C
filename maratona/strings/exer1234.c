#include <stdio.h>
#include <string.h>

int main() {
	
	int cont, len;
	char string[1001], prox = 'u';
	
	while(gets(string) != NULL) {		
		len = strlen(string);
		for(cont = 0; cont < len; cont++)
			if(string[cont] >= 'A' && string[cont] <= 'Z')
				string[cont] += 32;

		for(cont = 0; cont < len; cont++) {
			if(string[cont] != ' ') {
				if((string[cont] >= 'a' && string[cont] <= 'z') && prox == 'u') {
					string[cont] -= 32;
					prox = 'l';
				}
				if((string[cont] >= 'a' && string[cont] <= 'z') && prox == 'l') {
					prox = 'u';
				}
			} else {

			}
		}
		for(cont = 0; cont < len; cont++)
			printf("%c", string[cont]);
		prox = 'u';
		printf("\n");
	}
	return 0;
}