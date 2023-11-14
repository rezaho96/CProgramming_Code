using namespace std;
#include <iostream>
#include <conio.h>
#include <ctime>
#pragma warning(disable:4996)
struct Date
{
	int day;
	int month;
	int year;
};
struct Time{
	int hour, minute, second;
};
struct Product
{
	int num;
	Time t;
	Date d;
};
/*void main(void){
	int n;
	cout << "enter n:";
	cin >> n;
	Product p[50];
	for (int i = 0; i < n; i++)
	{
		cout <<endl<<"...................................."<< endl<<"enter product num  "<<i<<":";
		cin >> p[i].num;
		cout << "enter product date shamsi "<<i<<":";
		cin >> p[i].d.year;
		cout << "/ ";
		cin >> p[i].d.month;
		cout << "/ ";
		cin >> p[i].d.day;
		cout << "enter product time  "<<i<<":";
		cin >> p[i].t.hour;
		cout << ": ";
		cin >> p[i].t.minute;
		cout << ": ";
		cin >> p[i].t.second;
		
	}
	cout << "before 1397 : ";
	for (int i = 0; i < n;i++)
	{
		
		if (p[i].d.year<1397)
			cout << "num=" << p[i].num << endl << "date=" << p[i].d.year << "/" << p[i].d.month << "/" << p[i].d.day<<endl<<p[i].t.hour<<":"<<p[i].t.minute<<":"<<p[i].t.second<<endl;
	}
	_getch();

}*/
struct course
{
	int num;
	char name[17];
	float score;
	int credit;
};
struct student
{
	int num;
	char name[17];
	float average;
	course c[3];
};
/*void main(void){
	student s[60];
	int n,m=0;
	float sum=0;
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "enter student num:";
		cin >> s[i].num;
		cin.ignore();
		cout << "enter student name:";
		gets_s(s[i].name);
		for (int j = 0; j < 3; j++)
		{
			cout << "enter course num:";
			cin >> s[i].c[j].num;
			cin.ignore();
			cout << "enter course name:";
			gets_s(s[i].c[j].name);
			cout << "enter course score:";
			cin >> s[i].c[j].score;
			cout << "enter course credit:";
			cin >> s[i].c[j].credit;
			sum += (s[i].c[j].score)*(s[i].c[j].credit);
			m += (s[i].c[j].credit);
		}
		
		s[i].average = sum / m;
		cout << "average=" << s[i].average<<endl;
	}
	float max = 0;
	int i_indx;
	for (int i = 0; i < n; i++)
	{
		if (s[i].average > max)
		{
			max = s[i].average;
			i_indx = i;
		}
	}
	cout << ".........................................................................."<<endl<<"average max:" << endl << "average:" << s[i_indx].average << endl << "student nums:" << s[i_indx].num << endl << "student name:" << s[i_indx].name << endl;
	for (int j = 0; j < 3; j++)
	cout<< "course num:" << s[i_indx].c[j].num << endl << "course name:" << s[i_indx].c[j].name << endl << "course score:" << s[i_indx].c[j].score << endl << "course credit:" << s[i_indx].c[j].credit<<endl;
	_getch();

}*/
/*void  main(void){
	int y, m, d,A;
	time_t now = time(0);
	tm *t = localtime(&now);
	y= 1900 + t->tm_year;
	m=1 + t->tm_mon;
	d= t->tm_mday;
	//cout << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec;
	int n;
	cout << "enter n:";
	cin >> n;
	Product p[50];
	for (int i = 0; i < n; i++)
	{
		cout << endl << "........................................";
		cout << endl << "enter product num  " << i << ":";
		cin >> p[i].num;
		cout << "enter product date miladi " << i << ":";
		cin >> p[i].d.year;
		cout << "/ ";
		cin >> p[i].d.month;
		cout << "/ ";
		cin >> p[i].d.day;
		cout << "enter product time  " << i << ":";
		cin >> p[i].t.hour;
		cout << ": ";
		cin >> p[i].t.minute;
		cout << ": ";
		cin >> p[i].t.second;

	}
	cout << "//////////////////////////////////////////////////////////" << endl << "products past expiration date:";
	int y1, m1, d1,m2;
	for (int i = 0; i < n; i++)
	{
		y1 = y - p[0].d.year;
		m1 = m - p[0].d.month;
		d1 = d - p[0].d.day;
		m2 = ((y1 * 360 + m1 * 30 + d1)) / 30;
		if (m2>=6)
			cout <<endl<< "num=" << p[i].num << endl << "date=" << p[i].d.year << "/" << p[i].d.month << "/" << p[i].d.day << endl << p[i].t.hour << ":" << p[i].t.minute << ":" << p[i].t.second << endl;
	}
		_getch();*/
//}
void  main(void){
	int y, m, d;
	time_t now = time(0);
	tm *t = localtime(&now);
	y = 1900 + t->tm_year;
	m = 1 + t->tm_mon;
	d = t->tm_mday;
	//cout << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec;
	int n;
	cout << "enter n:";
	cin >> n;
	Product p[50];
	for (int i = 0; i < n; i++)
	{
		cout << endl << "........................................";
		cout << endl << "enter product num  " << i << ":";
		cin >> p[i].num;
		cout << "enter product date miladi " << i << ":";
		cin >> p[i].d.year;
		cout << "/ ";
		cin >> p[i].d.month;
		cout << "/ ";
		cin >> p[i].d.day;
		cout << "enter product time  " << i << ":";
		cin >> p[i].t.hour;
		cout << ": ";
		cin >> p[i].t.minute;
		cout << ": ";
		cin >> p[i].t.second;

	}
	cout << "//////////////////////////////////////////////////////////" << endl << "products past expiration date:";
	int y1, m1, d1, m2;
	
		y1 = y-p[0].d.year;
		m1 = m-p[0].d.month;
		d1 = d-p[0].d.day;
		m2 = ((y1 * 360 + m1 * 30 + d1)) / 30;
		cout <<endl<<d<< endl << y1 << endl << m1 << endl << d1 << endl << m2;
	_getch();
}
