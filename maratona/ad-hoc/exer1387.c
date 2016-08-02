#include <stdio.h>

int main() {
	
	int l, r, total = 0;

	do {

		scanf("%d %d", &l, &r);
		if(!(l == 0 && r == 0)) {
			printf("%d\n", (l + r));
		}

	}	while(!(l == 0 && r == 0));
	
	return 0;
}