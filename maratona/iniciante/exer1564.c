#include <stdio.h>

int main() {
	
	int re;

	while(scanf("%d", &re) != EOF) {
		if(re > 0)
			printf("vai ter duas!\n");
		else
			printf("vai ter copa!\n");
	}	
	
	return 0;
}