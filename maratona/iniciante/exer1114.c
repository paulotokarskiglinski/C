#include <stdio.h>

int senha = 2002;

int main() {
	
	int s = 0;

	do {
		scanf("%d", &s);
		
		if(s == senha) printf("Acesso Permitido\n");
		else printf("Senha Invalida\n");	
	} while(s != senha);

	return 0;
}