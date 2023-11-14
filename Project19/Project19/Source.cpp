#include <stdio.h>
#include <conio.h>
void main(void){
	//int c ,d;
	/*float b = c*d/3.00;
	scanf_s("%d%d",&c,&d);
	printf("c=%d,d=%d",d,c);*/
	char a,b,c;
	a = _getch(); _putch('*');
    b = _getch(); _putch('*');
	c = _getch(); _putch('*');
	int r = (a - 48) * 100 + (b - 48) * 10 + (c - 48);
	printf("\n%d", r);
	

	
	_getch();
}