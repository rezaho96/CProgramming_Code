#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int x, d;

void shift(int p[]) {
	for (int i = 0; i < x; i++) {
		if (p[i] == 0) {
			for (int j = i; j < x - 1; j++)
				p[j] = p[j + 1];
		}
	}
}
void main(void) {

	//for (int i = -100; i < 400; i++) {
	//	printf("%c\n",i);
	//}




	scanf_s("%d%d", &x, &d);
	int *p;
	p = (int *)malloc(x*sizeof(int));
	for (int i = 0; i < x; i++) {
		p[i] = i + 1;
	}
	int n = 0;
	printf("%d ", p[n]);
	while (x != 1)
	{
		p[n] = 0;
		shift(p);

		n = n + d;
		x--;

		/*for (int i = 0;i < x;i++) {
		printf("%d ",p[i]);
		}*/
		_putch('\n');
		while (!(n < x)) {
			n = n - x;
		}
		printf("%d ", p[n]);

	}
	_getch();
}