#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct TIME{
	int year;
	int month;
	int day;
};
struct patient
{
	char name[50];
	TIME t1;
	TIME t2;
	int no;
	char gender;

};

void main(void){
	patient s;

	while (1){
		system("cls");
		printf("\n1)new patient\n2)find a patient\n3)exit ");
		char ch1 = _getch();
		if (ch1 == 51)
			exit(-1);
		FILE *f = fopen("E:\\patient.dat", "ab+");
		int n = 0;
		if (ch1 == 49){

			printf("\nname: ");
			fflush(stdin);

			gets_s(s.name);
			printf("\ninsurrenc serial: ");
			scanf_s("%d", &s.no);
			printf("sexuality(f/m): ");
			s.gender = _getche();
			printf("\ndata of resepting (y/m/d) : ");
			scanf_s("%d/%d/%d", &s.t1.year, &s.t1.month, &s.t1.day);
			printf("data of realising (y/m/d) : ");
			scanf_s("%d/%d/%d", &s.t2.year, &s.t2.month, &s.t2.day);
			fwrite(&s, sizeof(patient), 1, f);
			n++;
		}
		//printf("%d", n);

		if (ch1 == 50){
			//FILE *f = fopen("E:\\patient.dat", "rb");
			int no1;
			printf("\ninsurrenc serial: ");
			scanf_s("%d", &no1);
			//	fread(&s, sizeof(patient), 1, f);
			//puts(s.name);
			
				fseek(f, 0*sizeof(patient), SEEK_SET);

				while (!feof(f)){


					fread(&s, sizeof(patient), 1, f);
					if (no1 == s.no){
						printf("\nname: ");
						puts(s.name);
						printf("insurrenc serial: ");
						printf("%d", s.no);
						printf("\nsexuality: ");
						_putch(s.gender);
						printf("\ndata of resepting: ");
						printf("%d/%d/%d\n", s.t1.year, s.t1.month, s.t1.day);
						printf("data of realising: ");
						printf("%d/%d/%d", s.t2.year, s.t2.month, s.t2.day);
					}
					//	else
					//	printf("THER IS NO SUCH SERIAL !!! ");



					fclose(f);




				}
			
		
	}
	
	_getch();
}
}