#include <stdio.h>
#include <string.h>

int main() {
	
	int month;
	char rs[10];

	scanf("%d", &month);

	switch(month) {
		case 1: { strcpy(rs, "January"); break; }
		case 2: { strcpy(rs, "February"); break; }
		case 3: { strcpy(rs, "March"); break; }
		case 4: { strcpy(rs, "April"); break; }
		case 5: { strcpy(rs, "May"); break; }
		case 6: { strcpy(rs, "June"); break; }
		case 7: { strcpy(rs, "July"); break; }
		case 8: { strcpy(rs, "August"); break; }
		case 9: { strcpy(rs, "September"); break; }
		case 10: { strcpy(rs, "October"); break; }
		case 11: { strcpy(rs, "November"); break; }
		case 12: { strcpy(rs, "December"); break; }
	}

	printf("%s\n", rs);	
	
	return 0;
}