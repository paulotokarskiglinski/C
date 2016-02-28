#include <stdio.h>

int main() {
	
	int n = 0, cont, i, v, primo = 0;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d", &v);

		if(v > 1) {
			for(i = 2; i < v; i++) {
				if((v % i) == 0)
					primo++;
			}

			if(primo > 0)
				printf("%d nao eh primo\n", v);
			else
				printf("%d eh primo\n", v);

			primo = 0;
		} else
			printf("%d nao eh primo\n", v);
	}
	
	return 0;
}