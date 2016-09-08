#include <stdio.h>
#include <string.h>

int main() {
	
	int n, i, cont;
	float total;
	char p[10001];

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++) {
		scanf("%s", p);
		
		total = 0;
		for(i = 0; i < strlen(p); i++)
			total++;
		printf("%0.2f\n", total/100);
	}
	return 0;
}