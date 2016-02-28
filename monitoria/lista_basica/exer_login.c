#include <stdio.h>

char user[] = "ALUNO";
char pass[] = "BSI"; 

void main() {
	
	char scan_user[10];
	char scan_pass[10];

	printf("Usuario: ");
	scanf("%s", &scan_user);

	printf("Senha: ");
	scanf("%s", &scan_pass);

	if(strcmp(scan_user, user) != 0)
		printf("\nUsuario inexistente!\n");
	
	else if(strcmp(scan_pass, pass) != 0)
		printf("\nSenha incorreta!\n");

	else if(strcmp(scan_user, user) != 0 && strcmp(scan_pass, pass) != 0)
		printf("\nAcesso nao autorizado!\n");		

}