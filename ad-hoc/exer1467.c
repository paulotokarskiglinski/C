#include <stdio.h>

int main() {
	
	int op[3];
	while(scanf("%d %d %d", &op[0], &op[1], &op[2]) != EOF) {

		if((op[0] == op[1] && op[0] == op[2]) && (op[1] == op[2]))
			printf("*\n");

		else if(op[0] != op[1] && op[0] != op[2])
			printf("A\n");
		else if(op[1] != op[0] && op[1] != op[2])
			printf("B\n");
		else if(op[2] != op[0] && op[2] != op[0])
			printf("C\n");

	}	
	
	return 0;
}