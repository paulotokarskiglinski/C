#include <stdio.h>
#include <string.h>

int main() {
	
	int i, j, p, op, cont, str1, str2, total;
	char final[1001], string1[1001], string2[1001];

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s %s", string1, string2);
		p = 0;
		str1 = strlen(string1);
		str2 = strlen(string2);
		total = str1 + str2;

		i = j = 0;
		while(total > 0) {
			if(i < str1) {
				final[j] = string1[i];
				j++;
				p++;
				total--;
			}
			if(i < str2) {
				final[j] = string2[i];
				j++;
				p++;
				total--;
			}
			i++;
		}
		for(i = 0; i < p; i++)
			printf("%c", final[i]);
		printf("\n");
	}
	return 0;
}