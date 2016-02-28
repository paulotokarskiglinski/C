#include <stdio.h>

int main() {

	int hi, mi, hf, mf, ht = 0, mt = 0;

	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	hi = hi * 60 + mi;
	hf = hf * 60 + mf;

	if((hf - hi) == 0) {
		ht = 24;
		mt = 0;

	} else if((hf - hi) < 0) {
		mt = (hi - hf) % 60;
		mt = 60 - mt;

		ht = ((hf - hi) - mt) / 60;
		ht = 24 - (-ht);
	} else {

		mt = (hf - hi) % 60;
		ht = ((hf - hi) - mt) / 60;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);

	return 0;
}