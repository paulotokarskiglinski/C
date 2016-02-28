#include <stdio.h>

int total = 0;

struct Aluno {
	int matricula;
	float n1, n2;
	char sexo[10];
};

struct Aluno aluno[100];

char cadastrarAluno(int cont) {
	char op = 'n';
	
	printf("\nDigite a matricula do aluno: ");
	fflush(stdin);
	scanf("%d", &aluno[cont].matricula);
	
	printf("Digite o sexo do aluno (feminino / masculino): ");
	fflush(stdin);
	gets(aluno[cont].sexo);
	
	printf("Digite as notas 1 e 2 do aluno: ");
	fflush(stdin);
	scanf("%f %f", &aluno[cont].n1, &aluno[cont].n2);
	
	total++;
	
	printf("Deseja cadastrar mais um aluno? (s / n): ");
	fflush(stdin);
	scanf("%c", &op);
	
	return op;
}

void verificarAlunosAprovados() {
	int cont = 0;
	float media;

	puts("\n===================== Alunos aprovados =====================\n");
	for(cont = 0; cont < total; cont++) {
		media = (aluno[cont].n1 + aluno[cont].n2) / 2;
		if(media >= 7)
			printf("Matricula: %s\tMedia: %f", aluno[cont].matricula, media);
	}
}

void verificarAlunosEmExame() {
	int cont = 0;
	float media;

	puts("\n===================== Alunos em exame =====================\n");
	for(cont = 0; cont < total; cont++) {
		media = (aluno[cont].n1 + aluno[cont].n2) / 2;
		if(media < 7.0)
			printf("Matricula: %s\tMedia: %f", aluno[cont].matricula, media);
	}
}

void verificarMelhorPiorAlunos() {
	int cont, contMaior, contMenor;
	float media, maior = 0, menor = 10;
	
	puts("\n===================== Melhor/Pior alunos =====================\n");
	for(cont = 0; cont <= total; cont++) {
		media = (aluno[cont].n1 + aluno[cont].n2) / 2;
		if(media > maior) {
			maior = media;
			contMaior = cont;
		}
		
		if(media < menor) {
			menor = media;
			contMenor = cont;
		}
	}
	
	printf("\nMelhor Aluno: %d\tMedia: %f\n", aluno[contMaior].matricula, maior);
	printf("\nPior Aluno: %d\tMedia: %f\n\n", aluno[contMenor].matricula, menor);
}

int main() {
	
	int cont = 0, flag = 0;
	char op = 'n';
	
	do {
		op = cadastrarAluno(cont++);
	} while(op != 'n');
	
	do {
		puts("\n===================== MENU =====================\n");
		printf("1 - Imprimir relacao de alunos aprovados\n2 - Imprimir relacao de alunos em exame\n3 - Imprimir Melhor/Pior alunos\n0 - Sair\n");
		puts("\n================================================\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &flag);
		
		switch(flag) {
			case 1: {
				verificarAlunosAprovados();
				break;
			}
			case 2: {
				verificarAlunosEmExame();
				break;
			}
			case 3: {
				verificarMelhorPiorAlunos();
				break;
			}
		}
		
	} while(flag != 0);
	
	return 0;
}
