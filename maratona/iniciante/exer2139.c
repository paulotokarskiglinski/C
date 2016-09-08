#include <stdio.h>

int main() {
	
	int d, m, rs, cont, meses[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	while(scanf("%d %d", &m, &d) != EOF) {
		if(m == 12 && d == 25)
			printf("E natal!\n");
		else if(m == 12 && d == 24)
			printf("E vespera de natal!\n");
		else if(m == 12 && d > 25)
			printf("Ja passou!\n");
		else {
			rs = 0;
			for(cont = m; cont <= 12; cont++)
				rs += meses[cont];
			printf("Faltam %d dias para o natal!\n", (rs - d) - 6);
		}
	}
	return 0;
}