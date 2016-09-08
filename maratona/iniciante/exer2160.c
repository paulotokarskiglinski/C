#include <stdio.h>
#include <string.h>

int main() {
	
	char p[10000];

	scanf("%[^\n]", p);
	if(strlen(p) <= 80)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}