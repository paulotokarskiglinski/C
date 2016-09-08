#include <stdio.h>
#include <string.h>

int main() {
	
	int i, j, op, aux, cont, value, p = 0;
	char string[1001], final[1001];

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf(" %[^\n]s", string);
		
		for(i = 0; i < strlen(string); i++) {
			value = (int) string[i];
			if((value >= 65 && value <= 90) || (value >= 97 && value <= 122))
				value += 3;
			final[i] = value;
			value = 0;
			p++;
		}
		for(i = p - 1, j = 0; i >= 0; i--, j++)
			string[j] = final[i];
		for(i = p/2; i < p; i++) {
			value = (int) string[i];
			string[i] = value - 1;
		}
		for(i = 0; i < p; i++)
			printf("%c", string[i]);
		printf("\n");
		p = 0;
	}	
	return 0;
}