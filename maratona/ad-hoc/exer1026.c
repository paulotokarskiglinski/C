#include <stdio.h>

int main() {
	
	unsigned long num1, num2;

	while(scanf("%u %u", &num1, &num2) != EOF)
		printf("%u\n", num1 ^ num2);
	return 0;
}