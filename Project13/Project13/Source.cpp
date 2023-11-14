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
	char gender;
	time admission_time;
	time Release_date;
};
//time Admission_time(time t1, time t2) {
//


void main(void) {
	int t = 0;
	int search;
	FILE *stream;
	errno_t err;
	err = fopen_s(&stream, "Project.txt", "w+");
	if (err == 0) {
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
			printf("gender(m/f)?: ");
			p.gender = _getche();
			Sleep(200);
			fflush(stdin);
			fseek(stdin, 0, SEEK_END);

			fseek(stream, 0, SEEK_END);
			fwrite(&p, sizeof(Patient), 1, stream);
			t++;
			break;
		case '2':
			printf("Enter a insurance number for search: ");
			scanf_s("%d", &search);
			fseek(stream, 0, SEEK_SET);
			for (int i = 0; i < t; i++) {
				fread(&p, sizeof(Patient), 1, stream);
				if (p.insurance_number == search) {
					puts(p.name);
					printf("%d\n", p.insurance_number);
					printf("gender:", p.gender);

				}
			}
			_getch();
		}
		system("cls");
	}
	_fcloseall();
	_getch();
}