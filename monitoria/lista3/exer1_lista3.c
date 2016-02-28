#include <stdio.h>
#include <stdbool.h>

void main() {

    int cont, i, j, aux;
    int veta[5], vetb[5], vets[10];
    bool trocou;

    //Vetor A
    for(cont = 0; cont < 5; cont++) {
        printf("Digite um valor para o vetor A: ");
        scanf("%d", &veta[cont]);
    }
    puts("\n");
    //Vetor B
    for(cont = 0; cont < 5; cont++) {
        printf("Digite um valor para o vetor B: ");
        scanf("%d", &vetb[cont]);
    }

    //Colocar os valores de A e B no vetor S
    for(cont = 0; cont < 5; cont++)
        vets[cont] = veta[cont];
    for(cont = 0; cont < 5; cont++)
        vets[cont + 5] = vetb[cont];

    //Imprimir o vetor S - não ordenado
    printf("\nVetor S - nao ordenado: ");
    for(cont = 0; cont < 10; cont++)
        printf("%d, ", vets[cont]);


    /*//Ordenando o vetor S
    for(i = 0; i < 10; i++) {
		for(j = (i + 1); j < 10; j++){
			if(vets[i] > vets[j]) {
				aux = vets[i];
				vets[i] = vets[j];
				vets[j] = aux;
			}
		}
	}
	*/
	
	//Bubble melhorado - Ordena o vetor S
	trocou = true;
	while(trocou) {
		trocou = false;
		for(j  = 0; j < 10; j++) {
			if(vets[j] > vets[j+1]) {
				aux = vets[j];
				vets[j] = vets[j + 1];
				vets[j + 1] = aux;
				trocou = true;
			}
		}
	}
	
    //Imprimir o vetor S - ordenado
    printf("\nVetor S - ordenado: ");
    for(cont = 0; cont < 10; cont++)
        printf("%d, ", vets[cont]);
    puts("\n");
}
