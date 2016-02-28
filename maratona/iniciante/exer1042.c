#include <stdio.h>

int main() {

	int v1[3], v2[3], aux, i, j;

	scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);

	for(i = 0; i < 3; i++)
		v2[i] = v1[i];

	for(i = 0; i < 3; i++) {
		for(j = i + 1; j < 3; j++) {
			if(v1[i] > v1[j]) {
				aux = v1[i];
				v1[i] = v1[j];
				v1[j] = aux; 
			}
		}
	}

	for(i = 0; i < 3; i++)
		printf("%d\n", v1[i]);
	puts("");
	for(i = 0; i < 3; i++)
		printf("%d\n", v2[i]);

	return 0;
}