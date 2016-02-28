#include <stdio.h>
#include <stdbool.h>

void main() {

    int cont, i, j, aux_matric, aux_nota;
    int matric[10], nota[10];
    bool trocou;

    //Receber matricula e nota de cada aluno
    for(cont = 0; cont < 10; cont++) {
        //Matricula
        printf("Digite a metricula do aluno: ");
        scanf("%d", &matric[cont]);
        //Nota
        printf("Digite a nota do aluno: ");
        scanf("%d", &nota[cont]);
    }

    //Imprimir os valores - nao ordenados
    printf("\nNao ordenados\n");
    for(cont = 0; cont < 10; cont++)
        printf("Matricula: %d - Nota: %d\n", matric[cont], nota[cont]);

    puts("\n");

    /*//Ordenando os valores das matriculas e das notas
    for(i = 0; i < 10; i++) {
		for(j = (i + 1); j < 10; j++){
			if(nota[i] > nota[j]) {
                //Ordenando a nota
				aux_nota = nota[i];
				nota[i] = nota[j];
				nota[j] = aux_nota;

                //Ordenando a matricula
                aux_matric = matric[i];
                matric[i] = matric[j];
                matric[j] = aux_matric;
			}
		}
	}
	*/
	
	//Bubble melhorado - Ordenando os valores das matriculas e das notas
	trocou = true;
	while(trocou) {
		trocou = false;
		for(j  = 0; j < 10; j++) {
			if(nota[j] > nota[j+1]) {
				//Ordenando nota
				aux_nota = nota[j];
				nota[j] = nota[j + 1];
				nota[j + 1] = aux_nota;
				
				//Ordenado matricula
				aux_matric = matric[j];
				matric[j] = matric[j + 1];
				matric[j + 1] = matric;
				
				trocou = true;
			}
		}
	}

    //Imprimir os valores ordenados
    printf("\nOrdenados\n");
    for(cont = 0; cont < 10; cont++)
        printf("Matricula: %d - Nota: %d\n", matric[cont], nota[cont]);

    puts("\n");
}
