#include <stdio.h>

int main() {
	
	int l, v, cont, maior = -1;	
	
	while(scanf("%d", &l) != EOF) {
		for(cont = 0; cont < l; cont++) {
			scanf("%d", &v);
			if(v > maior)
				maior = v;
		}

		if(maior < 10) printf("1\n");
		else if(maior >= 10 && maior < 20) printf("2\n");
		else if(maior >= 20) printf("3\n");

		maior = -1;
	}

	return 0;
}