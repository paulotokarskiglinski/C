#include <stdio.h>

int main() {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if(a > b && b <= c)
		printf(":)\n");
	
	if(a < b && b >= c)
		printf(":(\n");
	
	if(a < b && b < c) {
		if((b - a) > (c - b))
			printf(":(\n");
		if((b - a) <= (c - b))
			printf(":)\n");
	}

	if(a > b && b > c) {
		if((a - b) > (b - c))
			printf(":)\n");
		if((a - b) <= (b - c))
			printf(":(\n");
	}

	if(a == b) {
		if(b < c)
			printf(":)\n");
		else
			printf(":(\n");
	}

	return 0;
}