#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int final;
	char n, valor[101], v[101], cont, len, i = 0;

	do {	
		__fpurge(stdin);
		scanf("%c %s", &n, valor);
		
		if((strcmp(valor, "0") == 0) || (n == '0'))
			break;
		else {
			len = strlen(valor);
			for(cont = 0; cont < len; cont++) {
				if(valor[cont] != n)
					v[i++] = valor[cont];
			}
			
			printf("%d\n", final = atoi(v));			
			for(cont = 0; cont < i+1; cont++)
				v[cont] = '\0';
			i = 0;
		}

	} while((strcmp(valor, "0") == 0) || n != '0');

	return 0;
}