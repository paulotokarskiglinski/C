#include <stdio.h>
#include <string.h>

int main() {
	
	int op, cont, j1, j2;
	char n1[100], n2[100], op1[100], op2[100];

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s %s %s %s", n1, op1, n2, op2);
		scanf("%d %d", &j1, &j2);

		if(strcmp(op1, "PAR") == 0 && ((j1 + j2) % 2) == 0)
			printf("%s\n", n1);
		else if(strcmp(op1, "IMPAR") == 0 && ((j1 + j2) % 2) != 0)
			printf("%s\n", n1);
		else
			printf("%s\n", n2);
	}
	return 0;
}