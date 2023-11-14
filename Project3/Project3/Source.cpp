#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main(void){
	/*int s[20];
	for (int i = 0; i < 5; i++)
	{
		printf("s[%d]=", i);
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("s[%d]=%d\n", i, s[i]);
	int sum=0;
	for (int i = 0; i <= 4; i++)
		sum += s[i];
	printf("%f", sum / 5.0);
	for (int i = 0; i <= 4; i++)
		if (s[i] < 12)
			printf("%d\n", s[i]);
	int min = s[0],min_indx=0;
	for (int i = 0; i <= 4; i++)
		if (s[i] < min)
		{
			min = s[i];
			min_indx = i;
		}
	printf("s[%d]=%d\n", min_indx, min);
	_getch();
	for (int i =4 ; i >0; i--)
	
		for (int j = 0; j < i; j++){

			if (s[j + 1] < s[j])
			{
				int temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}

		}
	for (int i = 0; i < 4; i++)
		printf("%d\n", s[i]);
		*/
	/*int s[6] = { 5, 3, 6, 9, 11, 1 };
	for (int i = 0; i < 5; i++)
	{
		int min = s[i], ind = i;
		for (int j = i+1; j < 6; j++)
			if (s[j] < min)
			{
				min = s[j];
				ind = j;
			}
		int temp = s[i];
		s[i] = s[ind];
		s[ind] = temp;
	}
	for (int i = 0; i < 6; i++)
	printf("%d\t", s[i]);*/
	char str1[57],str2[56];
	/*for (int i = 0; i < 20; i++)
		str[i] = _getche();
	_putch('\n');*/
	gets_s(str1);
	gets_s(str2);
	/*for (int i = 0; str[i] != '\0'; i++)
		//_putch(str[i]);
		if (islower(str[i]))
			str[i] = _toupper(str[i]);
	//_strrev(str);*/
/*	_strlwr_s(str);
	_strupr_s(str);*/
/*	int n1 = strlen(str1), n2 = strlen(str2);
	for (int i = 0; i < n2; i++)
	
		str1[n1 + i] = str2[i];
		str1[n1+n2] = '\0';
	*/
	strcat_s(str1, str2);
	puts(str1);
	

	_getch();
}