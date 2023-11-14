using namespace std;
#include <conio.h>
#include <iostream>

/*void get(int *x){
	
	cin >> *x;
}
void Disp(float x){
	cout << endl  << x ;
}
void Inc(float x){
	x= x+1;
}*/
/*int n, max = 0, m = 20;
float min(int a[]){
	for (int i = 0; i < n; i++)
		if (a[i] < m)
			m = a[i];
	return m;
}
void main(void){
	int g[20] ;
	
	cout << "num=";
	cin >>  n;
	for (int i = 0; i < n; i++)
	{
		cout << "g[" <<i <<"]=";
		cin >> g[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "g[" << i << "]=";
		cout << g[i] << endl;
	}
	float sum = 0,avg;
	for (int i = 0; i < n; i++)
		sum += g[i];
	avg = sum / n;

	for (int i = 0; i < n; i++)
		if (g[i] > max)
			max = g[i];
	min(g);
	cout << "min=" << m << endl << "max=" << max << endl << "avg=" << avg;
//d =  new(int);
	//*d = 6;
	//cout << *d << endl;
	//delete d;
	//cout << d;
	//get(&g);
	_getch();
}
*/
//void convert(char *s){
	//for (int i = 0; s[i]; i++)
		/*{
			if ('a' < s[i] && s[i] < 'z')
			s[i] -= 32;
			}*/
			/*if (islower(s[i]))
				s[i] = _toupper(s[i]);
*/
//}
struct Man
{
	int num; 
	char s[10];
	float avrage;

};
void main(void){
	//char s[50];
	Man s[20];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i].num;
		cin.ignore();
		gets_s(s[i].s);

		cin >> s[i].avrage;
	}
	/*cin >> s1.num;
	cin.ignore();
	gets_s(s1.s);
	cin >> s1.avrage;*/
	/*for (int i = 0; i < 50; i++)
	{
		s[i] = _getche();
		if (s[i] == 13)
			break;
	}*/
	//gets_s(s);
	//convert(s);
	
	_getch();
	
}