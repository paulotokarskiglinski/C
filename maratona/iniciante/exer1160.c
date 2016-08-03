#include <stdio.h>

int main() {
	
	int n, pa, pb, cont;
	double ga, gb, tempo;

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++)	{
		scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

		while(pa <= pb) {
			pa += pa * (ga / 100);
			pb += pb * (gb / 100);

			tempo++;
			
			if(tempo > 100)	break;
		}

		if(tempo > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%.0lf anos.\n", tempo);
		
		tempo = 0;
	}
	
	return 0;
}