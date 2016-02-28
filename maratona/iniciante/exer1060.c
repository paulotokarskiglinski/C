#include <stdio.h>

int main() {

	int v[6], cont, pos = 0;

	scanf("%d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);

	for(cont = 0; cont < 6; cont++) {
		if(v[cont] > 0)
			pos++;
	}

	printf("%d valores positivos\n", pos);

	return 0;
}