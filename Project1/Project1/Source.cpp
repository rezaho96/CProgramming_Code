#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
void main(void){
	char c1 = 0, c2;
	while (1){
		printf("f1)Enter New Name\n");
		printf("f2)Sort & Display the Name\n");
		printf("f3)Find a Name\n");
		printf("f4)Find a Character\n");
		printf("ESC) Exit\n");
		char s[5][50], g[60];
		do{
			c2 = 0;
			c1 = _getch();
			system("cls");
			if (c1 == 27)
			exit(-1);
			if (c1 == 0 || c1 == -32)
				c2 = _getch();
			if (c2 == 59){
				printf("panj nam vared konid\n");
				for (int i = 0; i < 5; i++)
					gets_s(s[i]);
				Sleep(1000);
				system("cls");
			}
			else
			{
				printf("baray daryaft nam f1 ra vared konid");
				Sleep(3000);
				system("cls");
			}
		} while (c2 != 59);
		while(1){
			printf("f1)Enter New Name\n");
			printf("f2)Sort & Display the Name\n");
			printf("f3)Find a Name\n");
			printf("f4)Find a Character\n");
			printf("ESC) Exit\n");
			char c3, c4 = 0, c5;
			c3 = _getch();
			if (c3 == 27)
			exit(-1);
			system("cls");
			if (c3 == 0 || c3 == -32)
				c4 = _getch();
			if (c4 == 60){
				printf("sort:\n");
				for (int i = 4; i >= 0; i--)
				{
					for (int j = 0; j < i; j++)
						if (strcmp(s[j + 1], s[j]) < 0)
						{
							strcpy_s(g, s[j]);
							strcpy_s(s[j], s[j + 1]);
							strcpy_s(s[j + 1], g);
						}
				}
				for (int i = 0; i < 5; i++)
					puts(s[i]);
				Sleep(2000);
				system("cls");

			}
			if (c4 == 61){
				printf("yek nam vared konid: ");
				char s2[20];
				gets_s(s2);
				bool f = false;
				for (int i = 0; i < 5 && !f; i++)
					if (strcmp(s2, s[i]) == 0)
						f = true;
				if (f)
					printf("dar namha hast:yes\n");
				if (!f)
					printf("dar namha hast:no\n");
				Sleep(2000);
				system("cls");
			}
			if (c4 == 62)
			{
				printf("character vared konid: ");
				int n = 0;
				c5 = _getche();
				for (int i = 0; i < 5; i++)
					for (int j = 0; s[i][j]; j++)
						if (s[i][j] == c5)
							n++;
				printf("\ntedad dafat tekrar= %d\n", n);
				Sleep(2000);
				system("cls");
			}
			if (c4 == 59){
				printf("panj nam vared konid\n");
				for (int i = 0; i < 5; i++)
					gets_s(s[i]);
				Sleep(1000);
				system("cls");
			}
			if (c4 == 63)
			{
				FILE *f;
				f = fopen("E:\\project.txt", "a");
				for (int i = 0; i < 5; i++)
				{
					fputs("\n",f);
					fputs(s[i], f);
				}
				fclose(f);

			}

		} 

	}	_getch();
}