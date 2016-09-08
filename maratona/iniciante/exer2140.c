#include <stdio.h>

int main() {
	
	int n, m, rs, ok = 0;

	do {
		scanf("%d %d", &n, &m);
		if((n + m) != 0) {
			rs = m - n;
			
			if(rs == (2 + 2) || rs == (2 + 5) || rs == (2 + 10) || rs == (2 + 20) || rs == (2 + 50) || rs == (2 + 100))
				ok = 1;
			else if(rs == (5 + 5) || rs == (5 + 10) || rs == (5 + 20) || rs == (5 + 50) || rs == (5 + 100))
				ok = 1;
			else if(rs == (10 + 10) || rs == (10 + 20) || rs == (10 + 50) || rs == (10 + 100))
				ok = 1;
			else if(rs == (20 + 20) || rs == (20 + 50) || rs == (20 + 100))
				ok = 1;
			else if(rs == (50 + 50) || rs == (50 + 100))
				ok = 1;
			else if(rs == (100 + 100))
				ok = 1;
			else
				ok = 0;

			if(ok == 1)
				printf("possible\n");
			else
				printf("impossible\n");

			ok = 0;
		}
	}	while((n + m) != 0);
	
	return 0;
}