#include <stdio.h>
#include <string.h>

int main() {
	
	int i, j, op, cont, la, lb, out;
	char a[1001], b[1001];
	
	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s %s", a, b);
		
		la = strlen(a);
		lb = strlen(b);
		
		out = 0;
		if(la >= lb) {
			for(i = (la - lb), j = 0; i < la; i++, j++) {
				if(a[i] != b[j])
					out = 1;
			}
		} else
			out = 1;

		if(out == 0)
			printf("encaixa\n");
		else if(out == 1)
			printf("nao encaixa\n");
	}
	return 0;
}