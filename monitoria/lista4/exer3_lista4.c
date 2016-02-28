#include <stdio.h>

struct Moca {
	int inscricao;
	float peso, altura, imc;
};

struct Moca moca[100];

char cadastrarCandidata(int cont) {
	char op = 'n';

	printf("Digite o numero da inscricao da candidata: ");
	fflush(stdin);
	scanf("%d", &moca[cont].inscricao);
	
	printf("Digite a altura da candidata: ");
	fflush(stdin);
	scanf("%f", &moca[cont].altura);

	printf("Digite o peso da candidata: ");
	fflush(stdin);
	scanf("%f", &moca[cont].peso);

	moca[cont].imc = moca[cont].peso / (moca[cont].altura*moca[cont].altura);

	printf("\nDeseja cadastrar mais uma candidata? (s / n): ");
	fflush(stdin);
	scanf("%c", &op);

	return op;
}

void selecionaCandidatas(int total) {
	int cont;

	puts("\n===================== Candidatas Aprovadas =====================\n");
	for(cont = 0; cont < total; cont++) {
		if(moca[cont].imc < 18) {
			printf("Candidata: %d\tAltura: %f\tPeso: %f\tIMC: %f\n", moca[cont].inscricao, moca[cont].altura, moca[cont].peso, moca[cont].imc);
		}
	}
}

int main() {

	int cont = 0;
	char op = 'n';

	puts("\n===================== Concurso de Beleza =====================\n");
	do{
		op = cadastrarCandidata(cont);
		cont++;
	} while(op != 'n'); 
	
	selecionaCandidatas(cont);

	return 0;
}
