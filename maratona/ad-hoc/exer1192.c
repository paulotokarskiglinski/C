#include <stdio.h>

int main() {
	
	int n, n1, n2, rs, cont;
	char op;

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++) {
		scanf("%d %c %d", &n1, &op, &n2);

		if(n1 == n2)
			rs = n1 * n2;
		else {
			if(op >= 'A' && op <= 'Z')
				rs = n2 - n1;
			else if(op >= 'a' && op <= 'z')
				rs = n2 + n1;
		}
		printf("%d\n", rs);
	}

	return 0;
}