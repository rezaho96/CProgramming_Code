#include<stdio.h>
#include<conio.h>
#include<string.h>
/*bool Isrev(char s[50]){
	char temp[50];
	strcpy_s(temp, s);
	_strrev(temp);
	if (strcmp(temp, s) == 0)
		return true;
	else
		return  false;

}
void main(void){
	char s[50];
	gets_s(s);
	if (Isrev(s))
		printf("yes");
	else
		printf("no");
	_getch();
}*/
/*void main(void){
	char s[20];
	gets_s(s);
	//puts(&s[1]);
	//strcpy_s(s, &s[4]);
	for (int i = 0; i < strlen(s) - 3; i++)
	{
		char temp[20];
		strcpy_s(temp,&s[i]);
		temp[4] = '\0';
		puts(temp);
	}
	
	_getch();

}*/
/*struct student{
	char name[50];
	int np;
	float avg;
	char gender;

};
void Get(student s){
	gets_s(s.name);
	scanf_s("%d", &s.np);
	scanf_s("%f", &s.avg);
	s.gender = _getche();
	fflush(stdin);
}
void SD(student s){
	puts(s.name);
	printf("%d", s.np);
	printf("%f", s.avg);
	if (s.gender == 'm')
		printf("mall");
	if (s.gender == 'f')
		printf("femall");
}
void main(void){
	student s;
	Get(s);
	SD(s);
	_getch();
}*/
void main(void){
	char s[50];
	int n = 0;
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &s[i]);
	int max = s[0];
	for (int i = 0; i < 5;i++)

	_getch();
}
