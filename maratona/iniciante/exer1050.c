#include <stdio.h>
#include <string.h>

int main() {
	
	int ddd;
	char rs[20];

	scanf("%d", &ddd);

	switch(ddd) {
		case 61: { strcpy(rs, "Brasilia"); break; }
		case 71: { strcpy(rs, "Salvador"); break; }
		case 11: { strcpy(rs, "Sao Paulo"); break; }
		case 21: { strcpy(rs, "Rio de Janeiro"); break; }
		case 32: { strcpy(rs, "Juiz de Fora"); break; }
		case 19: { strcpy(rs, "Campinas"); break; }
		case 27: { strcpy(rs, "Vitoria"); break; }
		case 31: { strcpy(rs, "Belo Horizonte"); break; }
		default: { strcpy(rs, "DDD nao cadastrado"); break;}
	}	
	
	printf("%s\n", rs);

	return 0;
}