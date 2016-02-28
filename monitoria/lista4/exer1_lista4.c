#include <stdio.h>

int vetorA[10], vetorB[10];

// Faz a leitura dos valores e atribui para o vetor A
void lerValores() {
	int cont;
	
	for(cont = 0; cont < 10; cont++) {
		printf("Digite um valor: ");
		scanf("%d", &vetorA[cont]);
	}
}

// Imprime o vetor A
void imprimeVetorA() {
	int cont;

	printf("\nVetor: \n");
	for(cont = 0; cont < 10; cont++)
		printf("%d\t", vetorA[cont]);

	puts("\n");
}

// Imprime o vetor B
void imprimeVetorB() {
	int cont;

	printf("\nVetor: \n");
	for(cont = 0; cont < 10; cont++)
		printf("%d\t", vetorB[cont]);

	puts("\n");
}

// Ordenação dos valores no vetor
// Algoritmo de ordenação: Bubblesort
void ordenarValores() {
	int i, j, aux;

	for(i = 0; i < 10; i++) {
		for(j = i + 1; j < 10; j++) {
			if(vetorA[i] > vetorA[j]) {
				aux = vetorA[i];
				vetorA[i] = vetorA[j];
				vetorA[j] = aux;
			}
		}
	}
}

// Conta quantos elementos repetidos existem no vetor
// retorna o numero de elementos repetidos
int numerosRepetidos() {
	int i, j, rep = 0;

	for(i = 0; i < 10; i++) {
		for(j = i + 1; j < 10; j++) {
			if(vetorA[i] == vetorA[j])
				rep++;
		}
	}

	return rep;
}

// Método utilizado para remover os elementos repetidos do vetor
void removeRepetidos() {
	// Primeiro é ordenado o vetor
	ordenarValores();

	int i, j = 0, aux;

	/*	Percorre o tamanho do vetor, sendo neste caso igual a 10
	 *	Começa a jogar os elementos do vetor A para o B, exeto os repetidos
	 *	i = 1, porque o primeiro valor no vetor, de indice 0, nunca foi repetido,
	 	então ele é jogado automaticamente para o vetor B -> (if (i - 1) == 0)
	*/
	
	for(i = 1; i < 10; i++) {
		aux = vetorA[i];
		// Se o valor de aux foi diferente do seu antecessor, ou seja, ele não é repedido
		// e não foi jogado para o vetor B ainda, ele é enviado para o vetor B
		if(aux != vetorA[i - 1] || (i - 1) == 0)
			vetorB[j++] = aux;
	}
}

int main() {

	int op = 0;

	do {
		// Menu
		puts("\n===================== MENU =====================\n");
		printf("1 - Ler valores\n2 - Imprimir valores ordenados\n3 - Numero de elementos repetidos\n4 - Elimimar elementos repetidos\n0 - Sair\n");
		puts("\n================================================\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &op);

		switch(op) {
			// Ler valores de A - lerValores()
			case 1: {
				lerValores();
				imprimeVetorA();
				break;
			}
			// Imprimir dados ordenados
			case 2: {
				ordenarValores();
				imprimeVetorA();
				break;
			}
			// Contar valores repetidos
			case 3: {
				printf("\nValores repetidos: %d\n\n", numerosRepetidos());
				break;
			}
			// Eliminar elementos repetidos
			case 4: {
				removeRepetidos();
				imprimeVetorB();
				break;
			}
		}
	} while(op != 0);

	return 0;
}