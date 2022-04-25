//wap to swap/interchange two values without using third variable.
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter any two numbers:";
	cin>>a>>b;
	cout<<"Before swap A = "<<a<<" and B = "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After A = "<<a<<" and B = "<<b<<endl;
	getch();
}