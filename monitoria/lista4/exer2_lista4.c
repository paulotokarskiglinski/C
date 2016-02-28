#include <stdio.h>
#include <string.h>

int total = 0;
char palavra[100][20];

char lerString(int cont) {
	char op = 'n'; 
	
	printf("\nDigite uma palavra: ");
	fflush(stdin);		// Windows
	gets(palavra[cont]);
	cont++;
	total++;

	printf("\nDeseja escrever mais uma palavra? (s / n): ");
	fflush(stdin);		// Windows
	scanf("%c", &op);

	return op;

}

void imprimirPorLetra() {
	int cont;
	char letra;

	printf("\nDigite uma letra para listar as palavras que comecam com ela: ");
	fflush(stdin);		// Windows
	scanf("%c", &letra);

	puts("\n");
	for(cont = 0; cont < total; cont++) {
		if(letra == palavra[cont][0])
			printf("%s\n", palavra[cont]);
	}
}

void imprimirOrdemCrescente() {
	int cont, maiscula = 65, minuscula = 97;

	puts("\n");
	for(maiscula = 65, minuscula <= 97; maiscula <= 90 && minuscula <= 122; maiscula++, minuscula++) {
		for(cont = 0; cont < total; cont++) {
			if(palavra[cont][0] == maiscula || palavra[cont][0] == minuscula)
				printf("%s\n", palavra[cont]);
		}
	}
}

void imprimirAoContrario() {
	int cont, tam;

	puts("\n");
	for(cont = 0; cont < total; cont++) {
		for(tam = strlen(palavra[cont]); tam >= 0; tam--) {
			printf("%c", palavra[cont][tam]); 
			if(tam == 0)
				printf("\n");
		}
	}

}

int main() {

	int cont = 0, menu = 0;
	char op = 'n';

	do {
		op = lerString(cont++);
	} while(op != 'n');

	do {
		puts("\n===================== MENU =====================\n");
		printf("1 - Imprimir palavras que iniciam com alguma letra\n2 - Imprimir as palavras em ordem crescente\n3 - Imprimir as palavras de forma invertida\n0 - Sair\n");
		puts("\n================================================\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &menu);
	
		switch(menu) {
			case 1: {
				imprimirPorLetra();
				break;
			}
			case 2: {
				imprimirOrdemCrescente();
				break;
			}
			case 3: {
				imprimirAoContrario();
				break;
			}
		}

	} while(menu != 0);
		
	return 0;
}
