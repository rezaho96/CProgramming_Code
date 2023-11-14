#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


void main(void) {
	int x, d, n = 0;
	scanf_s("%d%d", &x, &d);
	int p[100];
	for (int i = 0; i < x; i++) {
		p[i] = i + 1;
	}
	printf("%d ));", p[n]);
	while (x != 1)
	{
		p[n] = 0;
		for (int i = 0; i < x; i++) {
			if (p[i] == 0) {
				for (int j = i; j < x - 1; j++)
					p[j] = p[j + 1];
			}
		}
		n = n + d;
		x--;
		_putch('\n');
		while (!(n < x)) {
			n = n - x;
		}
		if (x == 1){
			printf("\n%d\n", p[n]);
			printf("    (^ ^) \n", p[n]);
			printf("     O ");
		}
		else
		printf("%d )); ", p[n]);
	}
	_getch();
}