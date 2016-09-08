#include <stdio.h>
#include <string.h>

int main() {
	
	int n, op, cont, i, total = 0;
	char num[100];
	
	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%s", num);
		for(i = 0; i <= strlen(num); i++) {
			switch(num[i]) {
				case '0': { total += 6; break; }
				case '1': { total += 2; break; }
				case '2': { total += 5; break; }
				case '3': { total += 5; break; }
				case '4': { total += 4; break; }
				case '5': { total += 5; break; }
				case '6': { total += 6; break; }
				case '7': { total += 3; break; }
				case '8': { total += 7; break; }
				case '9': { total += 6; break; }
				default: 	{ total += 0; break; }
			}
		}
		printf("%d leds\n", total);
		total = 0;
	}
	return 0;
}