#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void){
	/*srand((unsigned)time(NULL));
	int m = rand() % 1000;
	bool found = false;
	int found =0;
	while (!found||0){
	int n;
	scanf_s("%d", &n);
	if (n == m){
	printf("success");
	found=true||1;
	}
	else if (m < n)
	printf("less\n");
	else
	printf("greater\n");
	}*/
	/*	int a, b,q=0;
		scanf_s("%d\t %d", &a, &b);
		while (a >= b)
		{

		q++;
		a -= b;

		}
		printf("q=%d\tr=%d", q, a);*/
	/*int num,log3=0;
	scanf_s("%d", &num);
	while (num >= 3){
	log3++;
	num /= 3;
	}
	printf("log3(%d)=%d", num, log3);*/
	/*int d,n,a;
	scanf_s("%d%d%d", &a, &n, &d);
	for (int i =1 ,j=a; i <= n; j *= d,i++)
	printf("%d\t", j);
	*/
	/*char ch = 0;
	int n = 0;
	while (n < 10){
	ch = _getche();
	if (ch == 27)
	n++;

	}*/
	/*bool f;
	for (int i = 6; i >= 0; i--)
	{
	//f = false;
	for (int j = 0; j < i; j++)
	{
	if (A[j] > A[j + 1]){
	int temp = A[j];
	A[j] = A[j + 1];
	A[j + 1] = temp;
	//f = true;
	}
	}
	}*/
	/*int A[7] = { 1, 6, 5, 2, 8, 1, 2 };
	int min = A[0];
	for (int i = 0; i <= 7; i++)
	{
	if (min < A[i])
	min = A[i];
	for (int j = 0; j <= i; j++)
	{
	int temp = A[j];
	if (min < A[j])
	min = A[j];
	temp = min;
	}
	}
	for (int i = 0; i < 7; i++)
	printf("%d\n", A[i]);*/
	/*char s1[20],s2[20];
	/*for (int i = 0; i < 2; i++)
		s[i] = _getche();
	int n = 0;
	for (int i = 0; i < 2; i++)
		if (s[i] >= '0'&& s[i] <= '9')
			n++;
	printf("\n%d", n);
	gets_s(s1);
	gets_s(s2);
	//for (int i = 0; s[i] ; i++)
		//_putch(s[i]);
	//puts(s);
	//printf("%d", strlen(s));
	//_strupr_s(s);
	int n = strlen(s1), m = strlen(s2);
	for (int i = 0; i < m; i++)
		s1[i + n] = s2[i];
	s1[n + m] = '\0';
	puts(s1);*/
	/*int s[20];
	for (int i = 0; i < 10; i++)
	scanf_s("%d", &s[i]);
	for (int i = 0; i < 10;i++)
		if (s[i] < 0){
			for (int j = i + 1; j < 10; j++)
				s[j - 1] = s[j];
			i--;
		}
	for (int i = 0; i < 10; i++)
		printf("%d", s[i]);*/
    char s[20],c1,c2;
	gets_s(s);
	c1=_getch();
	c2 = _getch();
	for (int i = 0; s[i]; i++)
		if (s[i] == c1)
			s[i] = c2;
	puts(s);
	_getch();
}