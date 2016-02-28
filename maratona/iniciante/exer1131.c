#include <stdio.h>

int main() {
	
	int grenais = 0, golsGremio, golsInter, vGremio = 0, vInter = 0, empates = 0, op = 0;

	do {
		grenais++;
		scanf("%d %d", &golsInter, &golsGremio);

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &op);

		if(golsInter > golsGremio) 
			vInter++;
		else if(golsGremio > golsInter) 
			vGremio++;
		else if(golsInter == golsGremio) 
			empates++;

	} while(op == 1);

	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", vInter);
	printf("Gremio:%d\n", vGremio);
	printf("Empates:%d\n", empates);

	if(vInter > vGremio) 
		printf("Inter venceu mais\n");
	else if(vGremio > vInter) 
		printf("Gremio venceu mais\n");
	else if(vInter == vInter) 
		printf("Nao houve vencedor\n");

	return 0;
}