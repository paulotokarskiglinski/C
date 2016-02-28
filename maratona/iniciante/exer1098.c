#include <stdio.h>

int main() {

	float rs, j;

	for(rs = 0; rs <= 2.2; rs += 0.2) {
		for(j = 1; j <= 3; j++) {
			if(rs == 0.0 || rs == 1.0 || rs >= 2.0)
				printf("I=%.0f J=%.0f\n", rs, j + rs);
			else
				printf("I=%.1f J=%.1f\n", rs, j + rs);
		}
	}
	
	return 0;
}