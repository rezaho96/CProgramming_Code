#include<stdio.h>
#include<conio.h>
void main(void){
	FILE *f;
	char s[50];
	f = fopen("E:\\Mhhhhhh.txt", "r");
	while (!feof(f)){
		char ch= fgetc(f);
		//char s[50];
		//fgets(s, 50, f);
		//puts(s);
		//if (ch!=-1)
		_putch(ch);
	}
	/*fputs("\n", f);
	for (int i = 0; i < 5; i++)
	{
		
		fputs(s[i], f);
		fputc('\n', f);
	}*/
	fclose(f);
	_getch();
}