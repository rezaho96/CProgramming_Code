#include<stdio.h>
#include<conio.h>
//#include<ctype.h>


/*void Day(int n){
	if (n >= 1 && n <= 7){
		switch (n){
		case 1: printf("sat"); break;
		case 2:printf("sun"); break;
		case 3:printf("mon"); break;
		case 4:printf("tue"); break;
		case 5: printf("wed"); break;
		case 6: printf("tue"); break;
		}
	}
	else
	printf("ERORE!!!");
}

void main(void){
	int n;
	scanf_s("%d", &n);

	Day(n);
	_getch();
}*/
/*char Tolower(char ch){
	
    if (ch>='A' && ch<='Z')
	return _tolower(ch);
	else if (ch >= 'a' && ch <= 'z')
		return ch;
	else
		return 0;
	
}

/*void main(void){
	char c;
	c = _getche();
	printf("\nTOLOWER=%c",Tolower(c));
	_getch();
}*/
/*float Avg1(float a,float b,float c){
	float Avrage =(a + b + c) / 3.0;
	return Avrage;
}
char Avg2(float d){
	if (d <= 20 && d >= 18)
		return 'A';
	else if ( d >= 16)
		return 'B';
	else if ( d >= 14)
		return 'C';
	else if ( d >= 12)
		return 'D';
	else if ( d >= 10)
		return 'E';
	else if ( d >= 0)
		return 'F';
	return 0;
}

void main(void){
	float x,y,z,f;
	scanf_s("%f\n%f\n%f",&x, &y, &z);
	f = Avg1(x,y,z);
	printf("%f\n%c", f, Avg2(f));
	_getch();
}*/
/*int Time(int h,int m,int s){
	int sec = h * 3600 + m * 60 + s;
	return sec;
}
void main(void){
	int a, b, c;
	scanf_s("%d\n%d\n%d", &a, &b, &c);
	printf("sec=%d", Time(a, b, c));
	_getch();
}*/
/*void main(void){
	unsigned long f=1;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		f *= i;

	printf("%ld", f);
	_getch();

}*/
/*void main(void){
	//int n;
	//scanf_s("%d", &n);
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++)
			//_putch('*');
			printf("%d\t", i*j);
		_putch('\n');
	}
	_getch();

}*/
/*void main(void){
	int n;
	scanf_s("%d", &n);
	for (int j = 0, i = 1; j <= n; j++ , i += 2)
		printf("%d\t", i);
	_getch();

}*/
/*void main(void){
	for (int i = 2; i <= 1000; i++){
		bool found = false;
		for (int  j = 2;  j <= i / 2; j++)
			if (i%j == 0)
				found = true;
		if (!found)
				printf("%d\t", i);
	}
	_getch();
}*/
/*void Disp(int n){
	for (int i=0; i < n; i++)
		_putch('*');
}
void main(void){
	int n;
	scanf_s("%d", &n);
	Disp(n);
	_getch();
}*/
/*void(int) Add(int n,int m){
	int jama = n + m;
	printf("%d", jama);
	//return jama;
}
void main(void){
	int x, y;
	scanf_s("%d%d", &x, &y);
	Add(x, y);
	//printf("%d", Add(x, y));
	_getch();
}*/
/*int B(int n){
	for (int i = n/2; i>=1; i--)
		if (n%i == 0)
			return i;
}
void main(void){
	int m;
	scanf_s("%d",& m);
	printf("%d", B(m));
	_getch();
}*/
/*void main(void){
	/*int x,x1,x2,x3;
	scanf_s("%d",&x);
	x1 = x / 100;
	x2 = (x % 100) / 10;
	x3 = (x % 100) % 10;
	if (x1 >= 1 && x1 <= 9 && x2 >= 0 && x2 <= 9 && x3 >= 0 && x3 <= 9)
	{
		printf("hhhhhh");
	}
	else
		printf("adad vared  konid");
	char x1 = _getche();
	char x2 = _getche();
	char x3 = _getche();
	if (x1 >= '1' && x1 <= '9' && x2 >= '0' && x2 <= '9' && x3 >= '0' && x3 <= '9')
	{
		printf("\n%c%c%c",x1,x2,x3);
	}
	else
		printf("\nadad vared  konid"); 

	_getch();
}*/
/*void main(void){
	int n;
	scanf_s("%d", &n);
	int i;
	for (i = 2; i <= n / 2; i++)
		if (n%i == 0)
			break;
	if (i>n/2)
			printf(" prime");
			
		else
			printf("no prime");
	_getch();
}*/
/*inline void Disp(){
	for (int i = 0; i < 10; i++)
		printf("heloo\n");
}
void main(void){
	Disp();
	_getch();
}*/
/*void main(void){
	float  a[7];
	for (int i = 0; i < 7; i++)
	{
		printf("A[%d]= ", i);
		scanf_s("%f", &a[i]);
	}
	/////////////////////
	for (int i = 0; i < 7; i++)
		printf("A[%d]=%.2f\t", i, a[i]);
	/////////////////////
	int s = 0;
	for (int i = 0; i < 7; i++)
		s += a[i];
	printf("\nmoadel kol=%.2f",s / 7.0);
	////////////////////
	printf("\nlimited::::::");
	for (int i = 0; i < 7; i++)
		if (a[i]<12)
			printf("A[%d]=%.2f\t", i, a[i]);
	/////////////////////////////
	printf("\nmoadel A::::::");
	int A=0;
	for (int i = 0; i < 7; i++)
		if (a[i] >= 18)
			A++;
	printf("%d",A);
	/////////////////////////
	float m;
	m = a[0] ;
	for (int i = 1; i < 7; i++)
		if (a[i]>m)
			m = a[i];
	printf("\nmax=%.2f", m);
	_getch();

}*/
/*void main(void){
	int a, b, c,s;
	scanf_s("%d", &s);
	a = s / 100;
	b = (s % 100)/10;
	c = (s % 100)%10;
	_putch(a); _putch('\n');
	_putch(b); _putch('\n');
	_putch(c); _putch('\n');
	_getch();

}*/
void main(void){
	int a;

	while (1){
		scanf_s("%d", &a);

		printf("%d=%c\n", a, a);
	}
	_getch();
}