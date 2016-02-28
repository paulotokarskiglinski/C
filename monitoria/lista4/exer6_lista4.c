#include <stdio.h>

int total = 0, aprovados = 0;

struct Gabarito {
	char q1, q2, q3, q4, q5;
};

struct Aluno {
	int matricula;
	struct Gabarito respostas;
};

struct Aluno aluno[100];
struct Gabarito gabarito;

void cadastrarGabarito() {
	printf("Digite o gabarito (cada resposta separada por um espaco): ");
	scanf("%c %c %c %c %c", &gabarito.q1, &gabarito.q2, &gabarito.q3, &gabarito.q4, &gabarito.q5);
	puts("");
}

char responderProva(int cont) {
	
	char op = 'n';
	
	printf("\nDigite a matricula do aluno: ");
	fflush(stdin);
	scanf("%d", &aluno[cont].matricula);
	
	printf("Digite as respostas do aluno (separadas por espaco): ");
	fflush(stdin);
	scanf("%c %c %c %c %c", &aluno[cont].respostas.q1, &aluno[cont].respostas.q2, &aluno[cont].respostas.q3, &aluno[cont].respostas.q4, &aluno[cont].respostas.q5);
	
	total++;
	
	printf("\nDeseja cadastrar mais um aluno? (s / n): ");
	fflush(stdin);
	scanf("%c", &op);
	
	return op;
}

void calcularNota() {
	int cont = 0, nota = 0;
	
	puts("\n==================== NOTAS =====================\n");
	for(cont = 0; cont < total; cont++) {
		if(aluno[cont].respostas.q1 == gabarito.q1)
			nota += 2;
		if(aluno[cont].respostas.q2 == gabarito.q2)
			nota += 2;
		if(aluno[cont].respostas.q3 == gabarito.q3)
			nota += 2;
		if(aluno[cont].respostas.q4 == gabarito.q4)
			nota += 2;
		if(aluno[cont].respostas.q5 == gabarito.q5)
			nota += 2;
		
		if(nota >= 7)
			aprovados++;
		
		printf("Matricula: %d \t Nota: %d\n", aluno[cont].matricula, nota);
		nota = 0;
	}
}

float procentagemAprovacao() {
	float porcentagem = 0;
	
	calcularNota();
	return porcentagem = (aprovados*100 / total);
}

int main() {
	
	int cont = 0, flag = 0;
	char op = 'n';
	
	cadastrarGabarito();
	
	do {
		op = responderProva(cont++);
	} while(op != 'n');
	
	do {
		puts("\n===================== MENU =====================\n");
		printf("1 - Nota dos alunos\n2 - Porcentagem de aprovacao\n3 - Nota com maior frequencia\n0 - Sair\n");
		puts("\n================================================\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &flag);
		
		switch(flag) {
			case 1: {
				calcularNota();
				break;
			}
			case 2: {
				printf("\nPorcentagem de alunos aprovados: %0.2f%%\n", procentagemAprovacao());
				break;
			}
			case 3: {
				break;
			}
		}
		
	} while(flag != 0);
	
	return 0;
}
