#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int l1, c1, l2, c2;

	do {
		scanf("%d %d %d %d", &l1, &c1, &l2, &c2);
		if((l1 + c1 + l2 + c2) != 0) {
			if(!(l1 == l2 && c1 == c2)) {
				if(l1 == l2 || c1 == c2)
					printf("1\n");
				else if(abs(l1 - l2) == abs(c1 - c2))
					printf("1\n");
				else
					printf("2\n");
			} else
				printf("0\n");
		}
	} while((l1 + c1 + l2 + c2) != 0);
	return 0;
}
