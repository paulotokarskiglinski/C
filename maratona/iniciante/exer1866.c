#include <stdio.h>

int main() {
	
	int n, cont, v[1001], rs = 0, i;

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++)
		scanf("%d", &v[cont]);

	for(cont = 0; cont < n; cont++) {
		for(i = 1; i <= v[cont]; i++) {
			if((i % 2) != 0)
				rs += 1;
			else
				rs -= 1;
		}
		printf("%d\n", rs);
		rs = 0;
	}
	
	return 0;
}