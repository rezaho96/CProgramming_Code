#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

struct  time
{
	int y;
	int m;
	int d;
};
struct Patient
{
	char name[50];
	int insurance_number;
	char sexuality;
	time admission_time;
	time Release_date;
};

void main(void) {
	int t = 0;
	int no1;
	FILE *stream;
	errno_t sum;
	sum = fopen_s(&stream, "Project.txt", "w+");
	if (sum == 0) {
		printf("The file 'output' was opened\n");
	}
	else {
		printf("The file 'output' was not opened\n");
	}

	Patient p;
	char ch = 0;
	while (ch != '3')
	{
		printf("1)New Patient\n");
		printf("2)Find a Patient Patient\n");
		printf("3)Exit\n");
		ch = _getch();
		switch (ch)
		{
		case '1':
			fseek(stdin, 0, SEEK_END);
			printf("Name: ");
			gets_s(p.name);
			printf("insurance number: ");
			scanf_s("%d", &p.insurance_number);
			printf("input admission time : (h:m:s)");
			scanf_s("%d:%d:%d", &p.admission_time.y, &p.admission_time.m, &p.admission_time.d);
			printf("input Release date : (h:m:s)");
			scanf_s("%d:%d:%d", &p.Release_date.y, &p.Release_date.m, &p.Release_date.d);
			printf("sexuality(m/f)?: ");
			p.sexuality = _getche();
			Sleep(300);
			fflush(stdin);
			fseek(stdin, 0, SEEK_END);

			fseek(stream, 0, SEEK_END);
			fwrite(&p, sizeof(Patient), 1, stream);
			t++;
			break;
		case '2':
			printf("Enter a insurance number for search: ");
			scanf_s("%d", &no1);
			fseek(stream, 0, SEEK_SET);
			for (int i = 0; i < t; i++) {
				fread(&p, sizeof(Patient), 1, stream);
				if (p.insurance_number == no1) {
					printf("\nname:");
					puts(p.name);
					printf("insurrenc serial : %d\n", p.insurance_number);
					printf("input admission time :%d/%d/%d\n", p.admission_time.y, p.admission_time.m, p.admission_time.d);
					printf("input Release date :%d/%d/%d\n ", p.Release_date.y, p.Release_date.m, p.Release_date.d);
					printf("sexuality:%c\n", p.sexuality);
					int k1= p.admission_time.y * 365 + p.admission_time.m * 30 + p.admission_time.d;
					int k2 = p.Release_date.y * 365 + p.Release_date.m * 30 + p.Release_date.d;
					printf("period of stay : %d", k2-k1);



				}
			}
			_getch();
		}
		system("cls");
	}
	_fcloseall();
	_getch();
}