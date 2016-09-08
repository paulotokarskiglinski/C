#include <stdio.h>
#include <string.h>

int main() {
	
	int i, op, cont, n1 = 0, n2 = 0, n3 = 0;
	char string[6];

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s", string);

		if(strlen(string) == 5)
			printf("3\n");
		else {
			for(i = 0; i <= strlen(string); i++) {
				switch(string[i]) {
					case 'e': {
						n1++;
						if(i == 2)  n1++;
						break;
					}
					case 'n': {
						n1++; 
						if(i == 1) 	n1++;
						break; 
					}
					case 't': {
						n2++;
						if(i == 0)	n2++;
						break;
					}
					case 'w': {
						n2++;
						if(i == 1) 	n2++;
						break;
					}
					case 'o': {
						n1++;
						n2++;
						if(i == 0)	n1++;
						if(i == 2)  n2++;
						break;
					}
				}
			}
			if(n1 > n2) 	printf("1\n");
			else					printf("2\n");
			n1 = n2 = 0;
		}
	}
	return 0;
}