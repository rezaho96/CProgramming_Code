#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
void main(void){
	char c1,c2=0, c3, c4=0, c5;
	while (1){
		char s[5][20], g[20];		
		do{
			printf("f1)Enter New Name\n");
			printf("f2)Sort & Display the Name\n");
			printf("f3)Find a Name\n");
			printf("f4)Find a Character\n");
			printf("ESC) Exit\n");
			//printf("1\n");
			 c1 =_getch();
			if (c1 == 27)
				exit(-1);
			if (c1 == 0 || c1 == -32)
				c2 =_getch();
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
				Sleep(2000);
				system("cls");
			}
		} while (c2!=59);

	      while(1){
			  c4 = 0;
			printf("2\n");
			c3 = _getch();
			if (c3 == 27)
				exit(-1);
			if (c3 == 0 || c3 == -32)
				c4 = _getch();
			if (c4 == 60){
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
					Sleep(1000);
					system("cls");

				}
				if (c4 == 61){
					char s2[20];
					gets_s(s2);
					bool f = false;
					for (int i = 0; i < 5 && !f; i++)
						if (strcmp(s2, s[i]) == 0)
							f = true;
					if (f)
						printf("yes\n");
					if (!f)
						printf("no\n");
					Sleep(1000);
					system("cls");
				}
				if (c4 == 62)
				{
					int n = 0;
					c5 = _getch();
					for (int i = 0; i < 5; i++)
						for (int j = 0; s[i][j]; j++)
							if (s[i][j] == c5)
								n++;
					printf("%d\n", n);
					Sleep(1000);
					system("cls");
				}
				
			} 
		}
			_getch();
		}
	
