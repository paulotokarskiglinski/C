#include <stdio.h>
#include <string.h>

int main() {

	char tweet[501];	
	
	scanf("%[^\n]", tweet);
	if(strlen(tweet) > 140)
		printf("MUTE\n");
	else
		printf("TWEET\n");

	return 0;
}