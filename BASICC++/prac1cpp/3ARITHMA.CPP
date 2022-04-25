//wap to demonstrate arithmatic operators
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;

	clrscr();
	cout<<"Enter any two values :";
	cin>>a>>b;	   		//initialization at runtime
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	cout<<"Addition ="<<c<<endl;
	cout<<"subtraction ="<<d<<endl;
	cout<<"Multiplication ="<<e<<endl;
	cout<<"Division ="<<f<<endl;
	cout<<"Modulus ="<<g<<endl;
	getch();
}