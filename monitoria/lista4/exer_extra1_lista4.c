#include <stdio.h>
#include <string.h>

struct Nadador {
	int idade;
	char nome[20], categoria[20];
};

struct Nadador nadador[5];

void classificaNadadores(int cont, int idade) {
	if(nadador[cont].idade <= 7)
		strcpy(nadador[cont].categoria, "Infantil");
	else if(nadador[cont].idade > 7 && nadador[cont].idade < 18)
		strcpy(nadador[cont].categoria, "Juvenil");
	else if(nadador[cont].idade >= 18)
		strcpy(nadador[cont].categoria, "Adulto");
}

int main() {
	
	int cont;
	
	for(cont = 0; cont < 5; cont++) {
		printf("Digite o nome: ");
		fflush(stdin);
		gets(nadador[cont].nome);
		
		printf("Digite a idade: ");
		scanf("%d", &nadador[cont].idade);
		
		classificaNadadores(cont, nadador[cont].idade);
	}
	
	puts("\n========================= Nadadores =========================\n");
	for(cont = 0; cont < 5; cont++)
		printf("Nome: %s\tIdade: %d\tCategoria: %s\n", nadador[cont].nome, nadador[cont].idade, nadador[cont].categoria);
			
	return 0;
}
