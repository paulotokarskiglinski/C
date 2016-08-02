#include <stdio.h>

int main() {
	
	int h1 = 1, m1 = 1, h2 = 1, m2 = 1, tempo1 = 1, tempo2 = 1, total = 0;

	while(tempo1 != 0 && tempo2 != 0) {
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

		tempo1 = h1 * 60 + m1;
		tempo2 = h2 * 60 + m2;

		while(tempo1 != tempo2) {
			if(tempo1 == 1440) {
				tempo1 = 0;
			}
			
			total++;
			tempo1++;
		}	
		
		if(tempo1 != 0 && tempo2 != 0)
			printf("%d\n", total);
		
		total = 0;
	}
	
	return 0;
}