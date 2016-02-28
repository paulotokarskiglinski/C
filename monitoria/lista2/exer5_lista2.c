#include <stdio.h>

int main() {

	int cont, voto, v1 = 0, v2 = 0, v3 = 0, v4 = 0, vn = 0, vb = 0;
	
	for(cont = 0; cont < 50; cont++) {
		printf("Digite seu voto: ");
		scanf("%d", &voto);

		switch(voto) {
			// Candidatos
			case 1: { v1++; break; }
			case 2: { v2++; break; }
			case 3: { v3++; break; }
			case 4: { v4++; break; }

			// Voto nulo e em branco
			case 5: { vn++; break; }
			case 6: { vb++; break; }
		}
	}

	printf("\nTotal de votos: %d\n", cont);
	printf("\nVotos para o 1* candidato: %d\n", v1);
	printf("Votos para o 2* candidato: %d\n", v2);
	printf("Votos para o 3* candidato: %d\n", v3);
	printf("Votos para o 4* candidato: %d\n\n", v4);
	printf("Votos nulos: %d\n", vn);
	printf("Votos em branco: %d\n\n", vb);

	return 0;
}