#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenaBubble(int x[]) {
	int i, j, aux;
	
	getchar();
	for(i = 0; i < 100000; i++) {
		for(j = (i + 1); j < 100000; j++) {
			if(x[i] > x[j]) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	
	printf("Valor 01: %d\n", x[0]);
    printf("Valor 99999: %d\n", x[99999]);	
	
	return 0;
}

int main() {
	int cont, x[100000];
    
	srand((unsigned)time(NULL));
    for(cont = 0; cont < 100000; cont++) 
    	x[cont] = rand()%100000;
    	
    printf("Valor 00: %d\n", x[0]);
    printf("Valor 99999: %d\n", x[99999]);
    
    ordenaBubble(x);

}
