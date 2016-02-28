#include <stdio.h>

int total = 0;

struct Pessoa {
	char nome[10], sobrenome[20];
};

struct Pessoa pessoa[100];

char lerNomeSobrenome(int cont) {
	
	char op = 'n';
	
	printf("\nDigite o primeiro nome: ");
	fflush(stdin);
	gets(pessoa[cont].nome);
	
	printf("Digite o primeiro sobrenome: ");
	fflush(stdin);
	gets(pessoa[cont].sobrenome);

	total++;
	
	printf("Deseja cadastrar mais uma pessoa? (s / n): ");
	fflush(stdin);
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
		if(letra == pessoa[cont].nome[0])
			printf("%s %s\n", pessoa[cont].nome, pessoa[cont].sobrenome);
	}
}

void imprimirOrdemCrescente() {
	int cont, maiscula = 65, minuscula = 97;

	puts("\n");
	for(maiscula = 65, minuscula <= 97; maiscula <= 90 && minuscula <= 122; maiscula++, minuscula++) {
		for(cont = 0; cont < total; cont++) {
			if(pessoa[cont].nome[0] == maiscula || pessoa[cont].sobrenome[0] == minuscula)
				printf("%s %s\n", pessoa[cont].nome, pessoa[cont].sobrenome);
		}
	}
}

int main() {
	
	int cont = 0, flag = 0;
	char op = 'n';
	
	do {
		op = lerNomeSobrenome(cont++);
	} while(op != 'n');
	
	do {
		puts("\n===================== MENU =====================\n");
		printf("1 - Imprimir palavras que iniciam com alguma letra\n2 - Imprimir as palavras em ordem crescente\n0 - Sair\n");
		puts("\n================================================\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &flag);
		
		switch(flag) {
			case 1: {
				imprimirPorLetra();
				break;
			}
			case 2: {
				imprimirOrdemCrescente();
				break;
			}
		}
		
	} while(flag != 0);
	
	return 0;
}
