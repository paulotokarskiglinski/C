#include <stdio.h>

int main() {
	
	int op, ai, di, li, cont, bonus, guarte, dabriel;

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%d", &bonus);
		
		scanf("%d %d %d", &ai, &di, &li);
		dabriel = (ai + di) / 2;
		if((li % 2) == 0)	dabriel += bonus;

		scanf("%d %d %d", &ai, &di, &li);
		guarte = (ai + di) / 2;
		if((li % 2) == 0)	guarte += bonus;

		if(dabriel > guarte)
			printf("Dabriel\n");
		else if(dabriel < guarte)
			printf("Guarte\n");
		else
			printf("Empate\n");
	}	
	
	return 0;
}