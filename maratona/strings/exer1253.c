#include <stdio.h>
#include <string.h>

int main() {
	
	int i, n, op, nxt, cont, aux, auxnxt, p = 0;
	char string[1001], final[1001];
	
	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s", string);
		scanf("%d", &nxt);
		auxnxt = nxt;
		for(i = 0; i < strlen(string); i++) {
			aux = (int) string[i];
			nxt = auxnxt;
			if((aux - nxt) < 65) {
				while(aux != 65) {
					aux--;
					nxt--;
				}
				nxt--;
				aux = 90;
			}
			p++;
			aux -= nxt;
			final[i] = aux;
		}
		for(n = 0; n < p; n++)
			printf("%c", final[n]);
		p = 0;
		printf("\n");
	}
	return 0;
}